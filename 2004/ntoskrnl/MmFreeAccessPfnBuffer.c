/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1403050AC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     MiQueuePageAccessLog @ 0x14024C08C (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x140305230 (PfpReturnAccessBuffer.c)
 *     MiReturnCcAccessLog @ 0x1403566F4 (MiReturnCcAccessLog.c)
 *     PfpFlushBuffers @ 0x1406CE830 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x14099743C (PfTAccessTracingCleanup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
