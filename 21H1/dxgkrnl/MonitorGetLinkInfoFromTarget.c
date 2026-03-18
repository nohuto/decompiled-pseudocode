/*
 * XREFs of MonitorGetLinkInfoFromTarget @ 0x1C00EF904
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D5870 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00EF8A0 (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C013F768 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromTarget(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 v7; // rax
  MONITOR_MGR *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGMONITOR *v11; // rdi
  int v12; // eax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
LABEL_14:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( (_DWORD)a2 == -1 )
    return 3221226021LL;
  v7 = *(_QWORD *)(a1 + 2672);
  if ( !v7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v16);
    v7 = *(_QWORD *)(a1 + 2672);
  }
  v8 = *(MONITOR_MGR **)(v7 + 96);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v14 + 24) = a1;
    goto LABEL_14;
  }
  v21 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v8, v4, 1u, &v21) < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v15[3] = v4;
    v15[4] = a1;
    v15[5] = -1073741275LL;
    WdLogEvent5_WdError(v15);
    return 3221226021LL;
  }
  v11 = v21;
  if ( !v21 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v17);
    v20 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v20);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v11 + 296), 1u);
  if ( (*((_DWORD *)v11 + 10) & 0x400) != 0 )
  {
    *(_QWORD *)a3 = *(_QWORD *)((char *)v11 + 468);
    v12 = *((_DWORD *)v11 + 119);
  }
  else
  {
    v12 = 0;
    v3 = -1073741275;
    *(_QWORD *)a3 = 0LL;
  }
  *(_DWORD *)(a3 + 8) = v12;
  ExReleaseResourceLite((PERESOURCE)((char *)v11 + 296));
  KeLeaveCriticalRegion();
  return v3;
}
