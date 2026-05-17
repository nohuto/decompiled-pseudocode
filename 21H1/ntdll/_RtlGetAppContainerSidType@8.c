/*
 * XREFs of _RtlGetAppContainerSidType@8 @ 0x4B3463A0
 * Callers:
 *     _RtlDefaultNpAcl@4 @ 0x4B335F90 (_RtlDefaultNpAcl@4.c)
 *     _RtlGetAppContainerParent@8 @ 0x4B3462F0 (_RtlGetAppContainerParent@8.c)
 *     _RtlIsParentOfChildAppContainer@8 @ 0x4B346550 (_RtlIsParentOfChildAppContainer@8.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 * Callees:
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

int __stdcall RtlGetAppContainerSidType(int a1, _DWORD *a2)
{
  char v2; // al

  if ( *(_BYTE *)(a1 + 1) >= 2u
    && *(_BYTE *)a1 == 1
    && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6u) == 6
    && *(_DWORD *)(a1 + 8) == 2 )
  {
    v2 = *(_BYTE *)(a1 + 1);
    if ( v2 == 8 )
    {
      *a2 = 2;
      return 0;
    }
    if ( v2 == 12 )
    {
      *a2 = 1;
      return 0;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return -1073700352;
}
