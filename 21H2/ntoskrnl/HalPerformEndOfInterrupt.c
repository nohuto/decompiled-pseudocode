/*
 * XREFs of HalPerformEndOfInterrupt @ 0x140222670
 * Callers:
 *     KiChainedDispatch @ 0x140420C10 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1404215E0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140421A20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140421E60 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140425050 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140426820 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140427B30 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 *     HvlPerformEndOfInterrupt @ 0x140459C10 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x14050A598 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050A60C (HalpInterruptServiceActiveBoth.c)
 */

__int64 __fastcall HalPerformEndOfInterrupt(__int64 a1)
{
  __int64 result; // rax

  if ( a1 && *(_BYTE *)(a1 + 101) )
    HalpInterruptServiceActiveBoth();
  result = HalPerformEndOfInterruptAtController();
  if ( HalpInterruptDirectedEoiModeEnabled )
    return HalpInterruptPerformDirectedEndOfInterrupt(a1);
  return result;
}
