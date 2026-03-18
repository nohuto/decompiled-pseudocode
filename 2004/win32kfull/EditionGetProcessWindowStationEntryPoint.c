/*
 * XREFs of EditionGetProcessWindowStationEntryPoint @ 0x1C00C4090
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 */

__int64 __fastcall EditionGetProcessWindowStationEntryPoint(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  EnterSharedCrit(0LL, 1LL);
  GetProcessWindowStation(a1);
  return UserSessionSwitchLeaveCrit(v3, v2, v4);
}
