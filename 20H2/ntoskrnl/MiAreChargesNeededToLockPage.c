/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x1402A6B80
 * Callers:
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402C9A90 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     MiReferenceDriverPage @ 0x1403976B0 (MiReferenceDriverPage.c)
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
