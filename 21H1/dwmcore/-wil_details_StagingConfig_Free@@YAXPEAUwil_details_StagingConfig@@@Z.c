/*
 * XREFs of ?wil_details_StagingConfig_Free@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x180085E14
 * Callers:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x180085D60 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 *     ?wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z @ 0x180151E90 (-wil_StagingConfig_RecordFeatureUsage@@YAJIIH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_StagingConfig_Free(struct wil_details_StagingConfig *a1)
{
  void *v2; // rbx
  HANDLE ProcessHeap; // rax

  if ( *((_DWORD *)a1 + 20) )
  {
    v2 = (void *)*((_QWORD *)a1 + 7);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
