/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@MonitorDescriptorState@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C03B7324
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C03B21E0 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::_GetNextMonitorDescriptorEnumerator(
        const struct _D3DKMDT_MONITOR_DESCRIPTOR ****this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3)
{
  const struct _D3DKMDT_MONITOR_DESCRIPTOR **v6; // rbx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v7; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  D3DKMDT_MONITOR_DESCRIPTOR_ID v11; // ebp
  __int64 v12; // r9
  __int64 v14; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v15; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v16; // rax
  const struct _D3DKMDT_MONITOR_DESCRIPTOR ***v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  __int128 v19; // [rsp+30h] [rbp-28h]

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v6 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)(this + 21);
  if ( !a2 || (v7 = *v6, *v6 == (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v6) )
  {
LABEL_22:
    WdLogSingleEntry2(2LL, a2, this);
    return 3223192368LL;
  }
  else
  {
    while ( v7 != &a2[1] )
    {
      if ( v6 == (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)v7 )
        goto LABEL_22;
      v7 = *(const struct _D3DKMDT_MONITOR_DESCRIPTOR **)&v7->Id;
    }
    v8 = this[16];
    if ( !v8
      || (v9 = ((__int64 (__fastcall *)(const struct _D3DKMDT_MONITOR_DESCRIPTOR ***))(*v8)[1])(v8), (v10 = v9) == 0)
      || (v11 = a2->Id + 1, (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) <= v11)
      || (v18 = 0LL,
          v19 = 0LL,
          !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v10 + 32LL))(v10, v11, &v18)) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, a2) + 24) = this;
      *a3 = 0LL;
      return 0LL;
    }
    v14 = operator new[](0x30uLL, 0x4D677844u, 256LL, v12);
    v15 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v14;
    if ( v14 )
    {
      *(_DWORD *)v14 = a2->Id + 1;
      *(_DWORD *)(v14 + 4) = DWORD1(v18);
      *(_QWORD *)(v14 + 8) = *((_QWORD *)&v18 + 1);
      *(_QWORD *)(v14 + 16) = v19;
      *(_DWORD *)(v14 + 24) = DWORD2(v19);
      v16 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR ***)(v14 + 32);
      v17 = this[22];
      if ( *v17 != v6 )
        __fastfail(3u);
      *v16 = v6;
      v15[1].DataSize = (SIZE_T)v17;
      *v17 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR **)v16;
      this[22] = v16;
      *a3 = v15;
      return 0LL;
    }
    WdLogSingleEntry0(2LL);
    return 3221225495LL;
  }
}
