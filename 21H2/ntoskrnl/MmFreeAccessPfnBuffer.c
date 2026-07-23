/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x140273308
 * Callers:
 *     MiReturnCcAccessLog @ 0x14024697C (MiReturnCcAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x140272DA8 (PfpReturnAccessBuffer.c)
 *     MiQueuePageAccessLog @ 0x14027D59C (MiQueuePageAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     PfpFlushBuffers @ 0x140678FB0 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x14099B9FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
