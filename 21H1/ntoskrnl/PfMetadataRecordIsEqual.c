/*
 * XREFs of PfMetadataRecordIsEqual @ 0x140672E6C
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140652E90 (PfVerifyScenarioBuffer.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140670968 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfMetadataRecordIsEqual(__int64 a1, _QWORD *a2, int a3)
{
  return *(_QWORD *)(a1 + 8) == *a2 && *(_DWORD *)(a1 + 16) == a3;
}
