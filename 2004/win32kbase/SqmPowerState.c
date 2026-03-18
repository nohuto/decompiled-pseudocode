/*
 * XREFs of SqmPowerState @ 0x1C00611A0
 * Callers:
 *     SetProtocolType @ 0x1C00610C0 (SetProtocolType.c)
 *     PowerOnMonitor @ 0x1C00636E0 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0063A00 (PowerUnDimMonitor.c)
 *     UserPowerInfoCallout @ 0x1C0066874 (UserPowerInfoCallout.c)
 *     PowerOffMonitor @ 0x1C00C9F70 (PowerOffMonitor.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011F550 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C011F610 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     PowerDimMonitor @ 0x1C0120DB0 (PowerDimMonitor.c)
 * Callees:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00612C8 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 */

__int64 SqmPowerState()
{
  unsigned int v0; // ebx
  unsigned int v1; // r8d
  unsigned int v2; // edi
  unsigned int v3; // esi
  __int64 result; // rax

  v0 = 0;
  if ( dword_1C024D198 )
  {
    v1 = 4014;
    if ( gPowerTransitionsState )
    {
      v2 = 4011;
      if ( dword_1C024D140 == 2 )
        v0 = 4119;
    }
    else
    {
      v2 = 4009;
    }
  }
  else
  {
    v1 = 4015;
    if ( gPowerTransitionsState )
    {
      v2 = 4012;
      if ( dword_1C024D140 == 2 )
        v0 = 4120;
    }
    else
    {
      v2 = 4010;
    }
  }
  v3 = ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - dword_1C024D1AC)
     / 0x3E8;
  _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, v1, v3);
  _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, v2, v3);
  if ( v0 - 4119 <= 1 )
    _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, v0, v3);
  result = MEMORY[0xFFFFF78000000320];
  dword_1C024D1AC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return result;
}
