/*
 * XREFs of EditionSetProcessWindowStationEntryPoint @ 0x1C00FBC10
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C00FBCB0 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall EditionSetProcessWindowStationEntryPoint(HANDLE SourceHandle)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  EnterCrit(0LL, 1LL);
  v4 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3) + 672);
  if ( (int)xxxSetProcessWindowStation(SourceHandle) < 0 )
  {
    v2 = 0;
  }
  else if ( v4 != *(_QWORD *)(PsGetCurrentProcessWin32Process(v6) + 672) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x4000000u;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v2;
}
