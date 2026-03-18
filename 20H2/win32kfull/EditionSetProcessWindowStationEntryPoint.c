/*
 * XREFs of EditionSetProcessWindowStationEntryPoint @ 0x1C00F6100
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C00F61A0 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall EditionSetProcessWindowStationEntryPoint(HANDLE SourceHandle)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  EnterCrit(0LL, 1LL);
  v6 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v4, v3, v5) + 672);
  if ( (int)xxxSetProcessWindowStation(SourceHandle) < 0 )
  {
    v2 = 0;
  }
  else if ( v6 != *(_QWORD *)(PsGetCurrentProcessWin32Process(v8, v7, v9) + 672) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v10, v11);
    *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x4000000u;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v2;
}
