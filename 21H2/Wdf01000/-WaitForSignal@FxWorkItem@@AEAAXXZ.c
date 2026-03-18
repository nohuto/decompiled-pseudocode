/*
 * XREFs of ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000DE70
 * Callers:
 *     imp_WdfWorkItemFlush @ 0x1C000DE00 (imp_WdfWorkItemFlush.c)
 *     ?Dispose@FxWorkItem@@UEAAEXZ @ 0x1C0018DA0 (-Dispose@FxWorkItem@@UEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

void __fastcall FxWorkItem::WaitForSignal(FxWorkItem *this)
{
  NTSTATUS v2; // ebx
  const void *ObjectHandleUnchecked; // rax
  _LARGE_INTEGER timeOut; // [rsp+40h] [rbp+8h] BYREF

  timeOut.QuadPart = -600000000LL;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    v2 = KeWaitForSingleObject(&this->m_WorkItemCompleted, Executive, 0, 0, &timeOut);
    KeLeaveCriticalRegion();
    if ( v2 != 258 )
      break;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    DbgPrint("Thread 0x%p is waiting on WDFWORKITEM 0x%p\n", KeGetCurrentThread(), ObjectHandleUnchecked);
  }
}
