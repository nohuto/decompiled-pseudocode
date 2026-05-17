/*
 * XREFs of RtlGetAppContainerSidType @ 0x180044680
 * Callers:
 *     RtlGetAppContainerParent @ 0x180043E10 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180044040 (RtlpGetTokenNamedObjectPath.c)
 *     RtlIsParentOfChildAppContainer @ 0x180046720 (RtlIsParentOfChildAppContainer.c)
 *     RtlDefaultNpAcl @ 0x1800D6AA0 (RtlDefaultNpAcl.c)
 * Callees:
 *     RtlCompareMemory @ 0x1800A1FF0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(__int64 a1, _DWORD *a2)
{
  char v4; // al

  if ( *(_BYTE *)(a1 + 1) >= 2u
    && *(_BYTE *)a1 == 1
    && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
    && *(_DWORD *)(a1 + 8) == 2 )
  {
    v4 = *(_BYTE *)(a1 + 1);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
