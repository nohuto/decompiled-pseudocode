/*
 * XREFs of MmFreeAccessPfnBuffer @ 0x14035FA80
 * Callers:
 *     PfpReturnAccessBuffer @ 0x1402009E4 (PfpReturnAccessBuffer.c)
 *     MiReturnCcAccessLog @ 0x140233A4C (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140233AA0 (MiQueuePageAccessLog.c)
 *     PfpFlushBuffers @ 0x1407D9F00 (PfpFlushBuffers.c)
 *     PfTAccessTracingCleanup @ 0x140A483FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MmFreeAccessPfnBuffer(_QWORD *P, char a2)
{
  void *v3; // rcx

  if ( !*((_DWORD *)P + 2) )
  {
    v3 = (void *)P[7];
    if ( (unsigned __int64)v3 > 1 )
    {
      if ( a2 )
        ObDereferenceObjectDeferDelete(v3);
      else
        ObfDereferenceObject(v3);
    }
  }
  ExFreePoolWithTag(P, 0);
}
