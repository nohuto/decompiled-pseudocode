/*
 * XREFs of CcPrivateVolumeCacheMapTelemetryCallback @ 0x14090BC00
 * Callers:
 *     <none>
 * Callees:
 *     CcGetActiveWorkerCountInPartition @ 0x140258114 (CcGetActiveWorkerCountInPartition.c)
 */

char __fastcall CcPrivateVolumeCacheMapTelemetryCallback(__int64 a1, __int64 a2)
{
  ++qword_140C49910;
  qword_140C49918 += *(unsigned int *)(a2 + 912);
  qword_140C49920 += *(_QWORD *)(a2 + 992);
  qword_140C49930 += *(unsigned int *)(a2 + 776);
  qword_140C49940 += *(_QWORD *)(a2 + 1080);
  qword_140C49948 += *(_QWORD *)(a2 + 1088);
  CcGetActiveWorkerCountInPartition(a1, a2, &qword_140C49938);
  return 1;
}
