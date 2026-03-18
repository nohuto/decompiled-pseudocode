/*
 * XREFs of ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C012358C
 * Callers:
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C013A920 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C01528D0 (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0125AB8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  DXGADAPTER *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // di
  __int64 v11; // r14
  __int64 v12; // rbp
  MONITOR_MGR *v13; // rcx
  bool IsVirtualModeSuportDisabled; // r15
  int MonitorInstance; // eax
  int v16; // ebx
  struct DXGMONITOR *v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGMONITOR *v29; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v4 = *(_QWORD *)(v3 + 40);
  if ( !v4 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v19);
    v4 = *(_QWORD *)(v3 + 40);
  }
  v5 = *(_QWORD *)(v4 + 88);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v20);
    v6 = *(_QWORD *)(v5 + 8);
  }
  v7 = *(DXGADAPTER **)(v6 + 16);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v7) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v21);
  }
  v10 = 1;
  if ( !v7 || (v11 = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL), (_DWORD)v11 == -1) )
  {
    v16 = -1073741811;
    goto LABEL_20;
  }
  v12 = *((_QWORD *)v7 + 337);
  if ( !v12 )
  {
    v22 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v22 + 24) = 9255LL;
    WdLogEvent5_WdError(v22);
    goto LABEL_23;
  }
  v13 = *(MONITOR_MGR **)(v12 + 96);
  IsVirtualModeSuportDisabled = 0;
  if ( !v13 )
  {
    v24 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v24 + 24) = v7;
    WdLogEvent5_WdError(v24);
    v16 = -1073741811;
LABEL_29:
    v26 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v26 + 24) = v16;
    WdLogEvent5_WdAssertion(v26);
    goto LABEL_20;
  }
  v29 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v13, v11, 1u, &v29);
  v16 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v25 = WdLogNewEntry5_WdDmmEvent(v9, v8);
    *(_QWORD *)(v25 + 24) = v11;
    *(_QWORD *)(v25 + 32) = v7;
    WdLogEvent5_WdDmmEvent(v25);
LABEL_27:
    v16 = 0;
    goto LABEL_28;
  }
  if ( MonitorInstance >= 0 )
  {
    v17 = v29;
    if ( !v29 || *((_DWORD *)v29 + 108) != 1 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v27);
    }
    if ( !v17 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v28);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 296), 1u);
    IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v17);
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 296));
    KeLeaveCriticalRegion();
    v16 = 0;
    goto LABEL_18;
  }
  if ( MonitorInstance == -1073741632 )
    goto LABEL_27;
LABEL_28:
  if ( v16 < 0 )
    goto LABEL_29;
LABEL_18:
  if ( !IsVirtualModeSuportDisabled )
    v10 = *(_BYTE *)(v12 + 249) == 0;
LABEL_20:
  if ( v16 < 0 )
  {
LABEL_23:
    v23 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v23);
  }
  return !v10;
}
