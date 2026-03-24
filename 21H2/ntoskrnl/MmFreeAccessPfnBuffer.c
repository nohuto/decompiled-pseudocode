/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1402D4628
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140208250 (MiTrimOrAgeWorkingSet.c)
 *     MiQueuePageAccessLog @ 0x14025C02C (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1402C811C (MiReturnCcAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402D40D0 (PfpReturnAccessBuffer.c)
 *     PfpFlushBuffers @ 0x1406CA6C0 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x14099A9FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  struct _DMA_ADAPTER *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (struct _DMA_ADAPTER *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDelete(v3);
      else
        HalPutDmaAdapter(v3);
    }
  }
  ExFreePoolWithTag(P, 0);
}
