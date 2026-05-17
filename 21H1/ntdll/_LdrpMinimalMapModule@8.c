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

int __fastcall LdrpMinimalMapModule(_DWORD *a1, int a2)
{
  int v3; // esi
  int v4; // ebx
  struct _TEB *v5; // ecx
  int v6; // edx
  int v7; // esi
  _DWORD *v9; // [esp+10h] [ebp-18h]
  void *ArbitraryUserPointer; // [esp+14h] [ebp-14h]
  int v12; // [esp+1Ch] [ebp-Ch] BYREF
  struct _TEB *v13; // [esp+20h] [ebp-8h] BYREF
  char v14; // [esp+27h] [ebp-1h]

  v3 = a1[8];
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 640, "LdrpMinimalMapModule", 3, "DLL name: %wZ\n", v3 + 36);
  v14 = RtlEqualUnicodeString(v3 + 44, &LdrpKernel32DllName, 1);
  v12 = 0;
  v4 = 0x800000;
  if ( !v14 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v13 = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, *(_DWORD *)(v3 + 48), 4, &v13, 4u, 0);
      if ( v13 )
      {
        if ( (int)RtlAcquirePrivilege(&LdrpLockMemoryPrivilege, 1, 0, &v12) >= 0 )
          v4 = 0x20000000;
      }
    }
  }
  v5 = NtCurrentTeb();
  a1[23] = 0;
  v13 = v5;
  ArbitraryUserPointer = v5->NtTib.ArbitraryUserPointer;
  v5->NtTib.ArbitraryUserPointer = *(void **)(v3 + 40);
  if ( (a1[4] & 0x800000) != 0 )
    v4 |= 0x40000u;
  v9 = (_DWORD *)(v3 + 24);
  v7 = ZwMapViewOfSection(a2, -1, v3 + 24, 0, 0, 0, a1 + 23, 1, v4, (a1[4] & 0x800000) != 0 ? 2 : 128);
  v13->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  if ( v4 == 0x20000000 )
    RtlReleasePrivilege(v12);
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
        else if ( v14 )
        {
          v7 = -1073741800;
        }
      }
      break;
  }
  if ( *v9 && (v7 < 0 || v7 == 1073741838) )
  {
    NtUnmapViewOfSection(-1, *v9);
    *v9 = 0;
  }
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 833, "LdrpMinimalMapModule", 4, "Status: 0x%08lx\n", v7);
  return v7;
}
