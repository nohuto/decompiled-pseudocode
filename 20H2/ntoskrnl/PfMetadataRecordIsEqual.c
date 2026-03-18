/*
 * XREFs of PfMetadataRecordIsEqual @ 0x1406E86F4
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x14065A250 (PfVerifyScenarioBuffer.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1406E7EB4 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
