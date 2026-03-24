/*
 * XREFs of ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C02887D0
 * Callers:
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0048E30 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 * Callees:
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C00475C8 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::QueueSignal(struct _EX_RUNDOWN_REF *this)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v10; // rax

  v1 = this + 16;
  if ( ExAcquireRundownProtection(this + 16) )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(this[2].Count + 16) + 216LL));
    if ( !WorkItem )
    {
      v8 = WdLogNewEntry5_WdLowResource(v4, v3, v6, v7);
      *(_QWORD *)(v8 + 24) = 1194LL;
      WdLogEvent5_WdLowResource(v8);
      ExReleaseRundownProtection(v1);
      return 3221225495LL;
    }
    v10 = WdLogNewEntry5_WdEvent(v4, v3);
    *(_QWORD *)(v10 + 24) = 1199LL;
    WdLogEvent5_WdEvent(v10);
    DXGPROTECTEDSESSION::AddReference((DXGPROTECTEDSESSION *)this, 0LL);
    IoQueueWorkItemEx(WorkItem, DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine, DelayedWorkQueue, this);
  }
  else
  {
    LOBYTE(this[17].Count) = 1;
  }
  return 0LL;
}
