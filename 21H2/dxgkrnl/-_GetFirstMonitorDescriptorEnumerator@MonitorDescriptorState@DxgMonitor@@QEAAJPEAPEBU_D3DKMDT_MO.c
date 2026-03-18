/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor@@QEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0216408
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0216070 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_GetFirstMonitorDescriptorEnumerator(
        DxgMonitor::MonitorDescriptorState *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v11; // rdx
  char *v12; // rbx
  char *v13; // rax
  char **v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)this + 20);
  if ( !v4 || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) )
  {
    WdLogSingleEntry1(7LL, this);
    goto LABEL_14;
  }
  v5 = *((_QWORD *)this + 20);
  v16 = 0LL;
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v6 + 32LL))(v6, 0LL, &v16) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = this;
LABEL_14:
    *a2 = 0LL;
    return 0LL;
  }
  v10 = operator new[](0x30uLL, 0x4D677844u, 256LL, v9);
  v11 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v10;
  if ( !v10 )
  {
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
  v12 = (char *)this + 168;
  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)(v10 + 16) = 0LL;
  *(_OWORD *)(v10 + 32) = 0LL;
  *(_OWORD *)v10 = v16;
  *(_QWORD *)(v10 + 16) = v17;
  *(_DWORD *)(v10 + 24) = DWORD2(v17);
  v13 = (char *)(v10 + 32);
  v14 = (char **)*((_QWORD *)v12 + 1);
  if ( *v14 != v12 )
    __fastfail(3u);
  *(_QWORD *)v13 = v12;
  v11[1].DataSize = (SIZE_T)v14;
  *v14 = v13;
  *((_QWORD *)v12 + 1) = v13;
  *a2 = v11;
  return 0LL;
}
