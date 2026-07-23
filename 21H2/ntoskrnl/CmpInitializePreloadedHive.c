/*
 * XREFs of CmpInitializePreloadedHive @ 0x140A5BBA8
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140A5B924 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCreateHive @ 0x1406F756C (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 *     CmpSetupLoggingState @ 0x1407A7288 (CmpSetupLoggingState.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8F850 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v6; // r15
  int v7; // ecx
  int v8; // esi
  wchar_t *v9; // rax
  wchar_t *v10; // r14
  int v11; // r8d
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  int v19; // eax
  const WCHAR *SystemRelativeRegistryHiveFilePath; // rbx
  _BYTE v21[8]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v22; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v24; // [rsp+80h] [rbp-80h] BYREF
  _OWORD BugCheckParameter3[27]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+240h] [rbp+140h] BYREF

  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = 4096;
  v22 = 0LL;
  v21[0] = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_33;
  v7 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&Destination.Length = 0x10000000LL;
  Destination.Buffer = PoolWithTag;
  if ( (v7 & 0x36) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v19 = *(_DWORD *)(a1 + 24);
    if ( (v19 & 2) == 0 )
    {
      if ( (v19 & 4) != 0 )
        v4 = 0x2000;
      else
        v4 = (v19 & 0x20) != 0 ? 0x200000 : 1;
    }
  }
  else if ( (v7 & 0x80) != 0 )
  {
    SystemRelativeRegistryHiveFilePath = (const WCHAR *)CmpGetSystemRelativeRegistryHiveFilePath(*(_QWORD *)(a1 + 16));
    RtlAppendUnicodeToString(&Destination, L"\\DriverStores\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 48));
    RtlAppendUnicodeToString(&Destination, SystemRelativeRegistryHiveFilePath);
    v4 = 0x400000;
    if ( CmStateSeparationEnabled && !CmStateSeparationDevMode )
      v4 = 4194305;
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v4 = 0x4000;
  }
  v8 = *(_DWORD *)(a1 + 24) & 0x100;
  v9 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.Length + 2LL, 0x20204D43u);
  v10 = v9;
  if ( !v9 )
LABEL_33:
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v9, Destination.Buffer, Destination.Length);
  ExFreePoolWithTag(v6, 0);
  v10[(unsigned __int64)Destination.Length >> 1] = 0;
  v11 = *(_DWORD *)(a1 + 24);
  Destination.MaximumLength = Destination.Length + 2;
  Destination.Buffer = v10;
  v12 = CmpCreateHive(
          &v22,
          1u,
          (32 * (v11 & 8)) | 0x12u,
          2u,
          *(_QWORD *)(a1 + 32),
          0LL,
          (__int64)&Destination,
          5832712,
          0LL,
          0LL,
          (__int64)v21,
          (__int64)BugCheckParameter3);
  if ( v12 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v12);
  CmpSetupLoggingState(v22, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v22 + 1816), v10);
  v13 = v4 | 0x1000000;
  if ( !v8 )
    v13 = v4;
  *(_DWORD *)(v22 + 160) |= v13 | 0x400;
  if ( v21[0] == 1 )
    *(_DWORD *)(v22 + 160) |= 0x800u;
  if ( BYTE4(NlsMbCodePageTag) )
    *(_DWORD *)(v22 + 160) |= 0x8000u;
  if ( CmStateSeparationEnabled && !CmStateSeparationDevMode && (*(_DWORD *)(a1 + 24) & 0x20) == 0 )
    *(_DWORD *)(v22 + 160) |= 0x8000u;
  v14 = *(_DWORD *)(*(_QWORD *)(v22 + 64) + 4088LL);
  CmpBootType = v14;
  if ( !CmSelfHeal )
  {
    BYTE3(NlsMbCodePageTag) = 0;
    if ( (v14 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v22, 0LL);
  }
  *(_QWORD *)&v24.Length = 0x800000LL;
  v24.Buffer = (wchar_t *)&v26;
  RtlAppendUnicodeToString(&v24, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v24, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v24, L"\\");
  RtlAppendUnicodeToString(&v24, *(PCWSTR *)(a1 + 48));
  v15 = CmpLinkHiveToMaster((__int64)&v24, 0LL, v22, 0, 0x200u, 0, 0LL, a2, 0LL, 0LL, 1, BugCheckParameter3);
  if ( v15 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v22, v15);
  v16 = (_QWORD *)qword_140C48518;
  v17 = (_QWORD *)(v22 + 1616);
  if ( *(__int64 **)qword_140C48518 != &CmpPreloadedHivesList )
    __fastfail(3u);
  *v17 = &CmpPreloadedHivesList;
  v17[1] = v16;
  *v16 = v17;
  qword_140C48518 = (__int64)v17;
  return 0LL;
}
