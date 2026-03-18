/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1402440A8
 * Callers:
 *     MiQueuePageAccessLog @ 0x14023356C (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x140244008 (PfpReturnAccessBuffer.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnCcAccessLog @ 0x140326F44 (MiReturnCcAccessLog.c)
 *     PfpFlushBuffers @ 0x14064B810 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x14099D47C (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
