/*
 * XREFs of CitDisplayPowerChange @ 0x1C00BEC3C
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0074424 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011DAFC (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0066264 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00679CC (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C009FD64 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitDisplayPowerChange(__int64 a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  int v3; // ecx
  int v4; // eax
  unsigned __int64 v5; // rsi
  struct _CIT_IMPACT_CONTEXT *v6; // rcx
  struct tagPROCESSINFO *v7; // r8

  v1 = xmmword_1C024E4A0;
  if ( xmmword_1C024E4A0 )
  {
    v3 = *(_DWORD *)(a1 + 64);
    if ( (*((_DWORD *)xmmword_1C024E4A0 + 50) == 0) == (v3 == 0) )
    {
      *((_DWORD *)xmmword_1C024E4A0 + 50) = v3;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 64);
      v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !v4 )
      {
        CitpSetForegroundProcess(xmmword_1C024E4A0, v5, 0LL, 0LL, 0LL);
        CitpContextFlush(v1, v5);
        v4 = *(_DWORD *)(a1 + 64);
      }
      *((_DWORD *)v1 + 50) = v4;
      if ( *(_DWORD *)(a1 + 64) && CitpAllowForegroundProcess(v1) )
      {
        v7 = (struct tagPROCESSINFO *)*((_QWORD *)v1 + 16);
        if ( v7 )
          CitpSetForegroundProcess(v6, v5, v7, 0LL, 0LL);
      }
    }
  }
}
