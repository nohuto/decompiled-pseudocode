/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C00935CC
 * Callers:
 *     IrqArbpSetDeviceProperties @ 0x1C0092268 (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 *     IrqTranslateResources @ 0x1C0093200 (IrqTranslateResources.c)
 *     IcCopyInputStateToDeviceState @ 0x1C0093490 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0093CAC (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C00967A8 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0096BD8 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqTransGetInterruptVector @ 0x1C00B6960 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B6C20 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B6E94 (IrqArbUpdateInterruptProperties.c)
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
