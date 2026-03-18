/*
 * XREFs of ?RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C02096B0
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C02095AC (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0?$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMonitor@@_N@Z @ 0x1C001CB44 (--0-$RESOURCE_LOCK@VMonitorDescriptorState@DxgMonitor@@@@QEAA@PEAVMonitorDescriptorState@DxgMoni.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::RetrieveIntegratedPanelNativeOverride(struct _ERESOURCE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // edi
  __int64 v5; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  int OwnerTable_high; // ecx
  SHORT *p_ActiveCount; // rcx
  __int64 v11; // xmm1_8
  DxgMonitor::MonitorModes *v12; // rax
  DxgMonitor::MonitorModes **SharedWaiters; // r8
  SHORT *i; // rdx
  SHORT *v15; // rax
  PERESOURCE Resource; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h]
  __int128 v19; // [rsp+48h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-20h]

  RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>::RESOURCE_LOCK<DxgMonitor::MonitorDescriptorState>(
    &Resource,
    this,
    1);
  v2 = *(_QWORD *)&this[2].ActiveCount;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 32LL))(v3, &v17);
  if ( v4 >= 0 )
  {
    v7 = operator new[](0x78uLL, 0x4D677844u, 256LL, v5);
    v8 = v7;
    if ( v7 )
    {
      OwnerTable_high = HIDWORD(this[1].OwnerTable);
      HIDWORD(this[1].OwnerTable) = OwnerTable_high + 1;
      *(_DWORD *)v7 = OwnerTable_high;
      p_ActiveCount = &this[1].ActiveCount;
      *(_OWORD *)(v7 + 8) = v17;
      *(_OWORD *)(v7 + 24) = v18;
      *(_OWORD *)(v7 + 40) = v19;
      v11 = v20;
      *(_DWORD *)(v7 + 68) = 8;
      *(_DWORD *)(v7 + 72) = 8;
      *(_QWORD *)(v7 + 76) = 8LL;
      v12 = (DxgMonitor::MonitorModes *)(v7 + 96);
      *(_QWORD *)(v8 + 56) = v11;
      *(_DWORD *)(v8 + 64) = 2;
      *(_DWORD *)(v8 + 84) = 5;
      *(_DWORD *)(v8 + 88) = 1;
      SharedWaiters = (DxgMonitor::MonitorModes **)this[1].SharedWaiters;
      if ( *SharedWaiters != (DxgMonitor::MonitorModes *)&this[1].ActiveCount )
        __fastfail(3u);
      *(_QWORD *)v12 = p_ActiveCount;
      *(_QWORD *)(v8 + 104) = SharedWaiters;
      *SharedWaiters = v12;
      this[1].SharedWaiters = v12;
      ++LODWORD(this[1].OwnerTable);
      this[1].ExclusiveWaiters = (PVOID)v8;
      for ( i = *(SHORT **)p_ActiveCount; i != p_ActiveCount; i = (SHORT *)*((_QWORD *)v15 + 12) )
      {
        v15 = i - 48;
        if ( !i )
          v15 = 0LL;
        if ( !v15 )
          break;
        if ( *((_DWORD *)v15 + 21) == 2 && *((_DWORD *)v15 + 22) == 1 )
        {
          *((_DWORD *)v15 + 22) = 2;
          break;
        }
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      v4 = -1073741801;
    }
  }
  if ( Resource )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
