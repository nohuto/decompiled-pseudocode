/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C0126064
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005924 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0145C00 (DxgkIsVirtualizationDisabledForTarget.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0126C38 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(__int64 a1, __int64 a2, bool *a3, bool *a4)
{
  __int64 v4; // r15
  __int64 v8; // rbp
  MONITOR_MGR *v9; // rcx
  bool IsVirtualModeSuportDisabled; // r13
  bool v11; // si
  int MonitorInstance; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  DXGMONITOR *v16; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  DXGMONITOR *v24; // [rsp+50h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  if ( a1 && (_DWORD)a2 != -1 && a3 && a4 )
  {
    v8 = *(_QWORD *)(a1 + 2696);
    if ( v8 )
    {
      v9 = *(MONITOR_MGR **)(v8 + 96);
      IsVirtualModeSuportDisabled = 0;
      if ( !v9 )
      {
        v20 = WdLogNewEntry5_WdError(0LL, a2);
        *(_QWORD *)(v20 + 24) = a1;
        WdLogEvent5_WdError(v20);
        v15 = -1073741811;
        goto LABEL_26;
      }
      v24 = 0LL;
      v11 = 1;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v9, a2, 1u, &v24);
      v15 = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v18 = WdLogNewEntry5_WdDmmEvent(v14, v13);
        *(_QWORD *)(v18 + 24) = v4;
        *(_QWORD *)(v18 + 32) = a1;
        WdLogEvent5_WdDmmEvent(v18);
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v16 = v24;
          if ( !v24 || *((_DWORD *)v24 + 108) != 1 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v14, v13);
            WdLogEvent5_WdAssertion(v22);
          }
          if ( !v16 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v14, v13);
            WdLogEvent5_WdAssertion(v23);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v16 + 296), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v16);
          ExReleaseResourceLite((PERESOURCE)((char *)v16 + 296));
          KeLeaveCriticalRegion();
          v15 = 0;
          goto LABEL_14;
        }
        if ( MonitorInstance != -1073741632 )
          goto LABEL_20;
      }
      v15 = 0;
LABEL_20:
      if ( v15 >= 0 )
      {
LABEL_14:
        if ( IsVirtualModeSuportDisabled )
        {
          *a3 = 1;
        }
        else
        {
          *a3 = *(_BYTE *)(v8 + 249) == 0;
          v11 = *(_BYTE *)(v8 + 250) == 0;
        }
        *a4 = v11;
        return (unsigned int)v15;
      }
LABEL_26:
      v21 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v21 + 24) = v15;
      WdLogEvent5_WdAssertion(v21);
      return (unsigned int)v15;
    }
    v19 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v19 + 24) = 9255LL;
    WdLogEvent5_WdError(v19);
  }
  return 3221225485LL;
}
