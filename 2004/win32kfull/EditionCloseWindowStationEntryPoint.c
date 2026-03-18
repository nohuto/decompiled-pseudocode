/*
 * XREFs of EditionCloseWindowStationEntryPoint @ 0x1C0120BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionCloseWindowStationEntryPoint(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  LODWORD(a1) = _CloseWindowStation(a1, v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return (unsigned int)a1;
}
