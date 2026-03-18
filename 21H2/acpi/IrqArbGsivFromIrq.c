/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C009A2C0
 * Callers:
 *     IcCopyInputStateToDeviceState @ 0x1C0098F48 (IcCopyInputStateToDeviceState.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0099084 (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 *     IrqTranslateResources @ 0x1C009A040 (IrqTranslateResources.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009A974 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009D25C (IrqArbpFindSuitableRangePci.c)
 *     IrqTransGetInterruptVector @ 0x1C00B62D0 (IrqTransGetInterruptVector.c)
 *     IrqArbBacktrackAllocation @ 0x1C00B67A0 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B6A14 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00B6D8C (IrqArbpFindSuitableRangeIsa.c)
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
