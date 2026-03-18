/*
 * XREFs of DpiGdiAsyncDisplayCallout @ 0x1C0387084
 * Callers:
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1C030CE78 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C030CFCC (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiAsyncDisplayCallout(__int64 a1)
{
  unsigned int v2; // ebx
  struct _IO_WORKITEM *WorkItem; // rdi
  _BYTE *PoolWithTag; // rax

  v2 = 0;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  if ( WorkItem )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = a1;
      PoolWithTag[8] = 1;
      IoQueueWorkItemEx(WorkItem, DpiGdiHandleAsyncDisplayCallout, DelayedWorkQueue, PoolWithTag);
      return v2;
    }
    IoFreeWorkItem(WorkItem);
  }
  v2 = -1073741670;
  WdLogSingleEntry1(6LL, -1073741670LL);
  return v2;
}
