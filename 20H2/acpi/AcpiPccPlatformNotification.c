/*
 * XREFs of AcpiPccPlatformNotification @ 0x1C0059EA4
 * Callers:
 *     ACPIPccProcessSci @ 0x1C00596BC (ACPIPccProcessSci.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccPlatformNotification(char *Context)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // si
  struct _IO_WORKITEM *WorkItem; // rax

  v1 = (KSPIN_LOCK *)(Context + 640);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 80);
  _InterlockedAnd16(*((volatile signed __int16 **)Context + 7), 0xFFF7u);
  if ( *((_QWORD *)Context + 33) )
  {
    WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 35));
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, AcpiPccPlatformNotificationWorker, DelayedWorkQueue, Context);
  }
  KeReleaseSpinLock(v1, v3);
}
