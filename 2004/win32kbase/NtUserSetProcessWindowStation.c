/*
 * XREFs of NtUserSetProcessWindowStation @ 0x1C004CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionSetProcessWindowStationEntryPoint @ 0x1C004CFC8 (ApiSetEditionSetProcessWindowStationEntryPoint.c)
 */

__int64 NtUserSetProcessWindowStation()
{
  return (int)ApiSetEditionSetProcessWindowStationEntryPoint();
}
