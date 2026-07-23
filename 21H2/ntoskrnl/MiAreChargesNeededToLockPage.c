/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x14032E180
 * Callers:
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     MiReferenceDriverPage @ 0x140397C78 (MiReferenceDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // edx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x1000000000LL) != 0 || (v1 & 0x2000000000000LL) != 0 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v4 = 0;
  if ( !v2 )
    return 1LL;
  if ( v2 == 1 )
  {
    if ( v3 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      return 1LL;
  }
  else if ( v2 == 2 && v3 )
  {
    return (*(_BYTE *)(a1 + 34) & 8) != 0;
  }
  return v4;
}
