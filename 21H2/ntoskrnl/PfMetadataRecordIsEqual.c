/*
 * XREFs of PfMetadataRecordIsEqual @ 0x1406761E4
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x140676358 (PfSnOpenVolumesForPrefetch.c)
 *     PfVerifyScenarioBuffer @ 0x1406A6220 (PfVerifyScenarioBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
