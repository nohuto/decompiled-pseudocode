/*
 * XREFs of CcGetActiveWorkerCountInPartition @ 0x140258114
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x1406E14E0 (CcPartitionTelemetryCallback.c)
 *     CcPrivateVolumeCacheMapTelemetryCallback @ 0x14090BC00 (CcPrivateVolumeCacheMapTelemetryCallback.c)
 * Callees:
 *     CcForEachNumaNode @ 0x140258140 (CcForEachNumaNode.c)
 */

char __fastcall CcGetActiveWorkerCountInPartition(__int64 a1, __int64 a2, _QWORD *a3)
{
  *a3 = 0LL;
  CcForEachNumaNode(CcGetActiveWorkerCountPerNode, a1, a2, a3);
  return 1;
}
