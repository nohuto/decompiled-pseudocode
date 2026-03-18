/*
 * XREFs of HalPerformEndOfInterrupt @ 0x1402F5F40
 * Callers:
 *     KiChainedDispatch @ 0x1403FD300 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FDC50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FE010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140400A90 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140401FC0 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140403100 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     HvlPerformEndOfInterrupt @ 0x1404F43A0 (HvlPerformEndOfInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404BC168 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BC1DC (HalpInterruptServiceActiveBoth.c)
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
