/*
 * XREFs of EtwpCovSampProcessCleanup @ 0x140945700
 * Callers:
 *     EtwExitProcess @ 0x140613F08 (EtwExitProcess.c)
 *     EtwpCovSampContextCleanup @ 0x140943074 (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1409457A0 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCoverageSamplerStop @ 0x140947458 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     EtwpCovSampModuleDereference @ 0x1409452C8 (EtwpCovSampModuleDereference.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampProcessCleanup(__int64 a1, char a2)
{
  void *v4; // rcx
  unsigned int v5; // r9d
  int v6; // r9d
  __int64 v7; // rdx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 32) )
    {
      do
      {
        EtwpCovSampModuleDereference(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v5 + 8));
        v5 = v6 + 1;
      }
      while ( v5 < *(_DWORD *)(a1 + 32) );
      v4 = *(void **)(a1 + 24);
    }
    ExFreePoolWithTag(v4, 0x56777445u);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
  }
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    EtwpCovSampModuleDereference(*(_QWORD *)a1, v7);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( a2 )
      HalPutDmaAdapter(**(PADAPTER_OBJECT **)a1);
    *(_QWORD *)a1 = 0LL;
  }
}
