/*
 * XREFs of MonitorGetMonitorDescriptorIDs @ 0x1C0188CC4
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0188BD4 (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C01894CC (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_GENERIC_DESCRIPTOR *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int MonitorInstance; // edi
  struct DXGMONITOR *v15; // rdi
  int MonitorDescriptorIDs; // eax
  struct _ERESOURCE *v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct DXGMONITOR *v26; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || !a3 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v19);
  }
  v10 = *((_QWORD *)this + 337);
  if ( !v10 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v20);
    v10 = *((_QWORD *)this + 337);
  }
  v11 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v11 )
  {
    v21 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  v26 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v11, (unsigned int)v5, 1, &v26);
  if ( MonitorInstance >= 0 )
  {
    v15 = v26;
    if ( !v26 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v13, v12);
      WdLogEvent5_WdAssertion(v22);
      v25 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v25);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
    MonitorDescriptorIDs = DXGMONITOR::_GetMonitorDescriptorIDs(v15, a3);
    v17 = (struct _ERESOURCE *)((char *)v15 + 296);
    MonitorInstance = MonitorDescriptorIDs;
    ExReleaseResourceLite(v17);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)MonitorInstance;
}
