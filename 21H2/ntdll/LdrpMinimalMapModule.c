/*
 * XREFs of LdrpMinimalMapModule @ 0x180014C38
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 *     LdrpCheckForRetryLoading @ 0x1800612D8 (LdrpCheckForRetryLoading.c)
 *     RtlAcquirePrivilege @ 0x1800781B0 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x18007B4D0 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x1800814A0 (RtlReleasePrivilege.c)
 *     LdrpProcessMachineMismatch @ 0x180087698 (LdrpProcessMachineMismatch.c)
 *     ZwMapViewOfSection @ 0x18009DB40 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB80 (NtUnmapViewOfSection.c)
 *     ZwMapViewOfSectionEx @ 0x18009F8D0 (ZwMapViewOfSectionEx.c)
 *     LdrpLogDbgPrint @ 0x1800CDC88 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpMinimalMapModule(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // r14
  int v6; // esi
  struct _TEB *v7; // r13
  int v8; // r15d
  int v9; // edx
  _QWORD *v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v15; // rdx
  _QWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-20h] BYREF
  void *ArbitraryUserPointer; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+48h]
  __int64 v20; // [rsp+D0h] [rbp+50h] BYREF

  v19 = a2;
  v4 = *(_QWORD *)(a1 + 56);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      640,
      (unsigned int)"LdrpMinimalMapModule",
      3,
      (__int64)"DLL name: %wZ\n",
      v4 + 72);
  LOBYTE(a3) = 1;
  if ( !(unsigned __int8)RtlEqualUnicodeString(v4 + 88, &LdrpKernel32DllName, a3)
    || (v5 = 1, (*(_BYTE *)(LdrpAppHeaders + 22) & 0x20) == 0) )
  {
    v5 = 0;
  }
  v20 = 0LL;
  v6 = 0x800000;
  if ( !v5 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v15 = *(_QWORD *)(v4 + 96);
      LODWORD(ArbitraryUserPointer) = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, v15, 4LL, &ArbitraryUserPointer, 4, 0LL);
      if ( (_DWORD)ArbitraryUserPointer )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1LL, 0LL, &v20) >= 0 )
          v6 = 0x20000000;
      }
    }
  }
  v7 = NtCurrentTeb();
  *(_QWORD *)(a1 + 160) = 0LL;
  ArbitraryUserPointer = v7->NtTib.ArbitraryUserPointer;
  v7->NtTib.ArbitraryUserPointer = *(void **)(v4 + 80);
  v8 = v6 | 0x40000;
  v9 = (*(_DWORD *)(a1 + 32) & 0x800000) != 0 ? 2 : 128;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    v8 = v6;
  v10 = (_QWORD *)(v4 + 48);
  if ( (*(_DWORD *)(a1 + 32) & 0x800) != 0 )
  {
    v17[1] = LdrpMaximumUserModeAddress;
    v16[1] = v17;
    v17[0] = 0LL;
    v17[2] = 0LL;
    v16[0] = 1LL;
    v11 = ZwMapViewOfSectionEx(v19, -1LL, v4 + 48, 0LL, a1 + 160, v8, v9, v16, 1);
  }
  else
  {
    v11 = ZwMapViewOfSection(v19, -1LL, v4 + 48, 0LL, 0LL, 0LL, a1 + 160, 1, v8, v9);
  }
  v13 = v11;
  v7->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v8 == 0x20000000 )
    RtlReleasePrivilege(v20);
  switch ( v13 )
  {
    case 1073741827:
      goto LABEL_40;
    case 1073741838:
      v13 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_40:
      if ( LdrpMapAndSnapWork && !*(_QWORD *)(a1 + 168) )
      {
        LOBYTE(v12) = 1;
        if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, v12) )
        {
          v13 = -1073741267;
        }
        else if ( v5 )
        {
          v13 = -1073741800;
        }
      }
      break;
  }
  if ( *v10 && (v13 < 0 || v13 == 1073741838) )
  {
    NtUnmapViewOfSection(-1LL, *v10);
    *v10 = 0LL;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      833,
      (unsigned int)"LdrpMinimalMapModule",
      4,
      (__int64)"Status: 0x%08lx\n",
      v13);
  return (unsigned int)v13;
}
