/*
 * XREFs of MonitorGetDeviceObject @ 0x1C01286E8
 * Callers:
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01287F0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0009A2C (-_GetDeviceObject@DXGMONITOR@@QEBAJPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetDeviceObject(
        DXGADAPTER *this,
        __int64 a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGMONITOR *v17; // rbx
  unsigned int DeviceObject; // eax
  struct _ERESOURCE *v19; // rcx
  unsigned int v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  DXGMONITOR *v30; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
  {
    v24 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v22);
  }
  v13 = *((_QWORD *)this + 337);
  if ( !v13 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v23);
    v13 = *((_QWORD *)this + 337);
  }
  v14 = *(struct _FAST_MUTEX **)(v13 + 96);
  if ( !v14 )
  {
    v24 = WdLogNewEntry5_WdError(0LL, v11);
    *(_QWORD *)(v24 + 24) = this;
LABEL_16:
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  v30 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v14, (unsigned int)v5, 1, &v30) < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v25[4] = this;
    v20 = -1073741275;
    v25[5] = -1073741275LL;
    v25[3] = v5;
    WdLogEvent5_WdError(v25);
  }
  else
  {
    v17 = v30;
    if ( !v30 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v26);
      v29 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v29);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 296), 1u);
    DeviceObject = DXGMONITOR::_GetDeviceObject(v17, a3, a4);
    v19 = (struct _ERESOURCE *)((char *)v17 + 296);
    v20 = DeviceObject;
    ExReleaseResourceLite(v19);
    KeLeaveCriticalRegion();
  }
  return v20;
}
