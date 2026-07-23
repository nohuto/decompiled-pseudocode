/*
 * XREFs of HalPerformEndOfInterrupt @ 0x14020F440
 * Callers:
 *     KiChainedDispatch @ 0x1403FF7A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140400120 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400510 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400900 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1404030D0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140404690 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405870 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 *     HvlPerformEndOfInterrupt @ 0x1404F5EC0 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404BDD68 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BDDDC (HalpInterruptServiceActiveBoth.c)
 */

__int64 __fastcall HalPerformEndOfInterrupt(__int64 a1)
{
  __int64 result; // rax

  if ( a1 && *(_BYTE *)(a1 + 101) )
    HalpInterruptServiceActiveBoth();
  result = HalPerformEndOfInterruptAtController[0]();
  if ( HalpInterruptDirectedEoiModeEnabled )
    return HalpInterruptPerformDirectedEndOfInterrupt(a1);
  return result;
}
