/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C00938DC
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C0092578 (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C0092810 (IrqArbAddAllocation.c)
 *     IrqTranslateResources @ 0x1C0093510 (IrqTranslateResources.c)
 *     IcCopyInputStateToDeviceState @ 0x1C00937A0 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0093FBC (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0096AB8 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0096EE8 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqTransGetInterruptVector @ 0x1C00B6C80 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B6F40 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B71B4 (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbGsivFromIrq(unsigned __int64 a1)
{
  if ( a1 < 0x10 )
    return *((unsigned int *)&IsaVectorOverrides + 2 * (unsigned __int8)a1);
  else
    return (unsigned int)a1;
}
