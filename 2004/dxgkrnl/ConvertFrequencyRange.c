/*
 * XREFs of ConvertFrequencyRange @ 0x1C01880D0
 * Callers:
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C01882FC (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01881A0 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01886E4 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall ConvertFrequencyRange(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  v4 = (int)a1[9];
  v5 = (unsigned int)(a1[9] - 1);
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 1 )
    {
      v10 = WdLogNewEntry5_WdError(v5, a2);
      *(_QWORD *)(v10 + 24) = v4;
      WdLogEvent5_WdError(v10);
      *(_DWORD *)(a2 + 36) = 0;
      return 3223192408LL;
    }
    v6 = 2;
  }
  else
  {
    v6 = 1;
  }
  *(_DWORD *)(a2 + 36) = v6;
  result = ConvertMonitorCapablitiesOrigin(*(unsigned __int8 *)a1, a2);
  if ( (int)result < 0 )
    return result;
  v8 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 4) = a1[1];
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 12) = a1[3];
  *(_DWORD *)(a2 + 16) = a1[4];
  *(_DWORD *)(a2 + 20) = a1[5];
  *(_DWORD *)(a2 + 24) = a1[6];
  *(_DWORD *)(a2 + 28) = a1[7];
  *(_DWORD *)(a2 + 32) = a1[8];
  v9 = v8 - 1;
  if ( !v9 )
  {
    *(_DWORD *)(a2 + 40) = a1[10];
    *(_DWORD *)(a2 + 44) = a1[11];
    return IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)a2);
  }
  if ( v9 != 1 )
    return 3223192408LL;
  *(_QWORD *)(a2 + 40) = (unsigned int)a1[12];
  return IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)a2);
}
