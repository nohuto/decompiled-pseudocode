/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x140337EA0
 * Callers:
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiReferenceDriverPage @ 0x1402DB710 (MiReferenceDriverPage.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140337B00 (MiCheckProtoPtePageState.c)
 *     MiMakeFaultPfnActive @ 0x140339240 (MiMakeFaultPfnActive.c)
 *     MiFinishMdlForMappedFileFault @ 0x14033DC30 (MiFinishMdlForMappedFileFault.c)
 *     MiCanBatchHardFaultPages @ 0x140595E34 (MiCanBatchHardFaultPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx
  __int64 v3; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x10000000000LL) != 0 || (v1 & 0x20000000000000LL) != 0 )
    return 0LL;
  v2 = *(_WORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  result = 0LL;
  if ( !v2 )
    return 1LL;
  if ( v2 == 1 )
  {
    if ( v3 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      return 1LL;
  }
  else if ( v2 == 2 && v3 && (*(_BYTE *)(a1 + 34) & 8) != 0 )
  {
    return 1LL;
  }
  return result;
}
