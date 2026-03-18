/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C0040440
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionSetProcessWindowStationEntryPoint @ 0x1C0040458 (ApiSetEditionSetProcessWindowStationEntryPoint.c)
 */

__int64 NtUserSetProcessWindowStation()
{
  return (int)ApiSetEditionSetProcessWindowStationEntryPoint();
}
