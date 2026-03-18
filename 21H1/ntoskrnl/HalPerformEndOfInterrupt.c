/*
 * XREFs of HalPerformEndOfInterrupt @ 0x1402EC5B0
 * Callers:
 *     KiChainedDispatch @ 0x1403F70E0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403F7900 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F7B90 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F7E20 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x1403F8E10 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1403F9EB0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1403FB2B0 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1403FC050 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FC540 (KiIpiInterrupt.c)
 *     HvlPerformEndOfInterrupt @ 0x1404F04E0 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404B8568 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404B85DC (HalpInterruptServiceActiveBoth.c)
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
