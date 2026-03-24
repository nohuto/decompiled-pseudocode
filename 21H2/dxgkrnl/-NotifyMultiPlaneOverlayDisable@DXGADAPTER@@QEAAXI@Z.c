/*
 * XREFs of ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0037C5C
 * Callers:
 *     DxgkMultiPlaneOverlayDisabledCB @ 0x1C0043100 (DxgkMultiPlaneOverlayDisabledCB.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013FB1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020D490 (-HandleAdapterMultiPlaneDisableEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyMultiPlaneOverlayDisable(DXGADAPTER *this, int a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rbx
  __int64 v10; // rax
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x4B677844u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v10 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = 2451LL;
LABEL_3:
    WdLogEvent5_WdLowResource(v10);
    return;
  }
  *PoolWithTag = this;
  *((_DWORD *)PoolWithTag + 2) = a2;
  *((_DWORD *)PoolWithTag + 3) = PsGetCurrentProcessSessionId();
  v11 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
  if ( KeGetCurrentIrql() >= 2u )
  {
    WorkItem = IoAllocateWorkItem(v11);
    if ( !WorkItem )
    {
      v10 = WdLogNewEntry5_WdLowResource(v13, v12, v15, v16);
      *(_QWORD *)(v10 + 24) = 2471LL;
      goto LABEL_3;
    }
    v17 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v17 + 24) = 2475LL;
    WdLogEvent5_WdEvent(v17);
    IoQueueWorkItemEx(WorkItem, HandleAdapterMultiPlaneDisableEvent, DelayedWorkQueue, v9);
  }
  else
  {
    HandleAdapterMultiPlaneDisableEvent(v11, v9, 0LL);
  }
}
