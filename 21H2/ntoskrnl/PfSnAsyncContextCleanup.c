/*
 * XREFs of PfSnAsyncContextCleanup @ 0x140674F40
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140674BE0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnAsyncContextCleanup(_QWORD *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  void *v3; // rcx
  struct _DMA_ADAPTER *v4; // rcx

  v2 = (struct _EX_RUNDOWN_REF *)a1[28];
  if ( v2 )
    ExReleaseRundownProtection(v2 + 45);
  v3 = (void *)a1[26];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (struct _DMA_ADAPTER *)a1[27];
  if ( v4 )
    HalPutDmaAdapter(v4);
}
