/*
 * XREFs of MonitorGetEdidBaseBlockPtr @ 0x1C02F27FC
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AEA58 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C0125A90 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

const void *__fastcall MonitorGetEdidBaseBlockPtr(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGMONITOR *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  const void *EdidBaseBlockPtr; // rax
  struct _ERESOURCE *v23; // rcx
  const void *v24; // rbx
  struct DXGMONITOR *v25; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
    return 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)this + 337);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v11);
    v10 = *((_QWORD *)this + 337);
  }
  v12 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL, v7);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 0LL;
  }
  v25 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v4, 0, &v25) < 0 )
    return 0LL;
  v17 = v25;
  if ( !v25 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v18);
    v21 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v21);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 296), 1u);
  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v17);
  v23 = (struct _ERESOURCE *)((char *)v17 + 296);
  v24 = EdidBaseBlockPtr;
  ExReleaseResourceLite(v23);
  KeLeaveCriticalRegion();
  return v24;
}
