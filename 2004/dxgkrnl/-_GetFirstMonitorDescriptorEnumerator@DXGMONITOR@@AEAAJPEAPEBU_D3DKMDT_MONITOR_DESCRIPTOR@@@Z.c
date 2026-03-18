/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02F9D0C
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C02F6650 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01886E4 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v12; // rdi
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // rbx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v19; // rax
  char **v20; // rcx

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_DWORD *)this + 32) )
  {
    v7 = WdLogNewEntry5_WdDmmEvent(this, a2);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdDmmEvent(v7);
LABEL_5:
    *a2 = 0LL;
    return 0LL;
  }
  v8 = *((_QWORD *)this + 18);
  if ( !v8 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    goto LABEL_5;
  }
  v9 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v12 = v9;
  if ( !v9 )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    WdLogEvent5_WdError(v13);
    return 3221225495LL;
  }
  v9->Id = 0;
  v9->Type = *(_DWORD *)(v8 + 12);
  v9->DataSize = *(_QWORD *)(v8 + 16);
  v9->pData = (void *)(v8 + 24);
  if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v8 + 8), &v9->Origin) < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = (char *)this + 192;
  v19 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v12[1];
  v20 = (char **)*((_QWORD *)v18 + 1);
  if ( *v20 != v18 )
    __fastfail(3u);
  *(_QWORD *)&v19->Id = v18;
  v12[1].DataSize = (SIZE_T)v20;
  *v20 = (char *)v19;
  *((_QWORD *)v18 + 1) = v19;
  *a2 = v12;
  return 0LL;
}
