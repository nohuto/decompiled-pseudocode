/*
 * XREFs of EtwpCovSampProcessCleanup @ 0x1409458D0
 * Callers:
 *     EtwExitProcess @ 0x14067DB68 (EtwExitProcess.c)
 *     EtwpCovSampContextCleanup @ 0x140943244 (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampProcessEnsureContext @ 0x140945970 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCoverageSamplerStop @ 0x140947628 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     EtwpCovSampModuleDereference @ 0x140945498 (EtwpCovSampModuleDereference.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
