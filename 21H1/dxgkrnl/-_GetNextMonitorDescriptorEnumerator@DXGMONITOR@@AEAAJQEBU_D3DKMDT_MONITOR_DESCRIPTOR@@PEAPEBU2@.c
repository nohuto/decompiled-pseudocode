/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C02F5A40
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C02F2700 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0169D48 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3,
        __int64 a4)
{
  DXGMONITOR *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rdi
  DXGMONITOR *v10; // rax
  D3DKMDT_MONITOR_DESCRIPTOR_ID v11; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR **v23; // rcx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v24; // rax
  __int64 v25; // rax

  v6 = this;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (char *)v6 + 192;
  if ( !a2 )
    goto LABEL_27;
  v10 = *(DXGMONITOR **)v9;
  if ( *(char **)v9 == v9 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v10 != this )
  {
    if ( v9 == (char *)v10 )
      goto LABEL_27;
    v10 = *(DXGMONITOR **)v10;
  }
  this = (DXGMONITOR *)*((unsigned int *)v6 + 32);
  if ( (unsigned int)this <= a2->Id )
  {
LABEL_27:
    v25 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = v6;
    WdLogEvent5_WdError(v25);
    return 3223192368LL;
  }
  v11 = a2->Id + 1;
  if ( (unsigned int)this <= v11 )
  {
LABEL_13:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = v6;
    *a3 = 0LL;
    return 0LL;
  }
  if ( a2->Id == -1 )
  {
    v13 = *((_QWORD *)v6 + 18);
    goto LABEL_19;
  }
  v13 = *(_QWORD *)(*((_QWORD *)v6 + 17) + 8LL * v11);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, a2);
    WdLogEvent5_WdAssertion(v14);
LABEL_19:
    if ( !v13 )
      goto LABEL_13;
  }
  v15 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v18 = v15;
  if ( v15 )
  {
    v15->Id = a2->Id + 1;
    v15->Type = *(_DWORD *)(v13 + 12);
    v15->DataSize = *(_QWORD *)(v13 + 16);
    v15->pData = (void *)(v13 + 24);
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v13 + 8), &v15->Origin) < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = (struct _D3DKMDT_MONITOR_DESCRIPTOR **)*((_QWORD *)v9 + 1);
    v24 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v18[1];
    if ( *v23 != (struct _D3DKMDT_MONITOR_DESCRIPTOR *)v9 )
      __fastfail(3u);
    *(_QWORD *)&v24->Id = v9;
    v18[1].DataSize = (SIZE_T)v23;
    *v23 = v24;
    *((_QWORD *)v9 + 1) = v24;
    *a3 = v18;
    return 0LL;
  }
  v19 = WdLogNewEntry5_WdError(v17, v16);
  WdLogEvent5_WdError(v19);
  return 3221225495LL;
}
