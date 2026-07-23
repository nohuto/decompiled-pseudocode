/*
 * XREFs of IoInitializeTimer @ 0x1407D3FF0
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14021D900 (ExInterlockedInsertTailList.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  char *Timer; // rax

  Timer = (char *)DeviceObject->Timer;
  if ( Timer )
    goto LABEL_4;
  Timer = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69546F49u);
  if ( Timer )
  {
    *(_QWORD *)(Timer + 2) = 0LL;
    *(_QWORD *)(Timer + 10) = 0LL;
    *(_DWORD *)(Timer + 18) = 0;
    *((_WORD *)Timer + 11) = 0;
    *(_WORD *)Timer = 9;
    *((_QWORD *)Timer + 5) = DeviceObject;
    DeviceObject->Timer = (PIO_TIMER)Timer;
LABEL_4:
    *((_QWORD *)Timer + 3) = TimerRoutine;
    *((_QWORD *)Timer + 4) = Context;
    ExInterlockedInsertTailList(&IopTimerQueueHead, (PLIST_ENTRY)(Timer + 8), &IopTimerLock);
    return 0;
  }
  return -1073741670;
}
