/*
 * XREFs of _LdrpMinimalMapModule@8 @ 0x4B2D110F
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _LdrpCheckForRetryLoading@8 @ 0x4B2DE632 (_LdrpCheckForRetryLoading@8.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpProcessMachineMismatch@4 @ 0x4B333CEC (_LdrpProcessMachineMismatch@4.c)
 *     _RtlAcquirePrivilege@16 @ 0x4B345D20 (_RtlAcquirePrivilege@16.c)
 *     _RtlReleasePrivilege@4 @ 0x4B346D00 (_RtlReleasePrivilege@4.c)
 */

NTSTATUS __fastcall LdrpMinimalMapModule(_DWORD *a1, void *a2)
{
  int v3; // esi
  int v4; // ebx
  struct _TEB *v5; // ecx
  int v6; // edx
  NTSTATUS v7; // esi
  SIZE_T v9; // [esp-14h] [ebp-3Ch]
  ULONG v10; // [esp+0h] [ebp-28h]
  ULONG v11; // [esp+4h] [ebp-24h]
  PVOID *v12; // [esp+10h] [ebp-18h]
  void *ArbitraryUserPointer; // [esp+14h] [ebp-14h]
  PVOID ReturnedState; // [esp+1Ch] [ebp-Ch] BYREF
  ULONG Value; // [esp+20h] [ebp-8h] BYREF
  BOOLEAN v17; // [esp+27h] [ebp-1h]

  v3 = a1[8];
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 640, "LdrpMinimalMapModule", 3, "DLL name: %wZ\n", v3 + 36);
  v17 = RtlEqualUnicodeString((PUNICODE_STRING)(v3 + 44), (PUNICODE_STRING)&LdrpKernel32DllName, 1u);
  ReturnedState = 0;
  v4 = 0x800000;
  if ( !v17 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      Value = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, *(PCWSTR *)(v3 + 48), 4, &Value, 4u, 0);
      if ( Value )
      {
        if ( RtlAcquirePrivilege((PULONG)&LdrpLockMemoryPrivilege, 1u, 0, &ReturnedState) >= 0 )
          v4 = 0x20000000;
      }
    }
  }
  v5 = NtCurrentTeb();
  a1[23] = 0;
  Value = (ULONG)v5;
  ArbitraryUserPointer = v5->NtTib.ArbitraryUserPointer;
  v5->NtTib.ArbitraryUserPointer = *(void **)(v3 + 40);
  if ( (a1[4] & 0x800000) != 0 )
    v4 |= 0x40000u;
  v12 = (PVOID *)(v3 + 24);
  HIDWORD(v9) = a1 + 23;
  LODWORD(v9) = 0;
  v7 = ZwMapViewOfSection(
         a2,
         (HANDLE)0xFFFFFFFF,
         (PVOID *)(v3 + 24),
         0LL,
         v9,
         (PLARGE_INTEGER)1,
         (PSIZE_T)v4,
         (SECTION_INHERIT)((a1[4] & 0x800000) != 0 ? ViewUnmap : 128),
         v10,
         v11);
  *(_DWORD *)(Value + 20) = ArbitraryUserPointer;
  if ( v4 == 0x20000000 )
    RtlReleasePrivilege(ReturnedState);
  switch ( v7 )
  {
    case 1073741827:
      goto LABEL_31;
    case 1073741838:
      v7 = LdrpProcessMachineMismatch(a1);
      break;
    case 1073741878:
LABEL_31:
      if ( LdrpMapAndSnapWork && !a1[24] )
      {
        LOBYTE(v6) = 1;
        if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, v6) )
        {
          v7 = -1073741267;
        }
        else if ( v17 )
        {
          v7 = -1073741800;
        }
      }
      break;
  }
  if ( *v12 && (v7 < 0 || v7 == 1073741838) )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, *v12);
    *v12 = 0;
  }
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 833, "LdrpMinimalMapModule", 4, "Status: 0x%08lx\n", v7);
  return v7;
}
