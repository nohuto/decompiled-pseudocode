/*
 * XREFs of ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02F949C
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C02FAEA8 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorCapablitiesOrigin(__int64 a1, enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      *(_DWORD *)a2 = 1;
      break;
    case 2:
      *(_DWORD *)a2 = 2;
      break;
    case 3:
      *(_DWORD *)a2 = 3;
      break;
    case 4:
      *(_DWORD *)a2 = 4;
      break;
    default:
      v4 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v4 + 24) = v2;
      WdLogEvent5_WdError(v4);
      *(_DWORD *)a2 = 0;
      return 3223192407LL;
  }
  return 0LL;
}
