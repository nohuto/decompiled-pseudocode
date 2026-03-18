/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x1402C2DF4
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     MiQueuePageAccessLog @ 0x1402A50BC (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402C2F78 (PfpReturnAccessBuffer.c)
 *     MiReturnCcAccessLog @ 0x140318B04 (MiReturnCcAccessLog.c)
 *     PfpFlushBuffers @ 0x1406541D0 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x14099606C (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
