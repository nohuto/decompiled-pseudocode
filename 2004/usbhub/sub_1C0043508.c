/*
 * XREFs of sub_1C0043508 @ 0x1C0043508
 * Callers:
 *     sub_1C0041468 @ 0x1C0041468 (sub_1C0041468.c)
 * Callees:
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 sub_1C0043508()
{
  __int64 result; // rax

  sub_1C001D340((__m128 *)&stru_1C006B480.Queue.Wcb.NumberOfChannels, 0, 0x1B8uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  KeInitializeSpinLock(&qword_1C006B658);
  KeInitializeEvent((PRKEVENT)&stru_1C006B480.Queue.Wcb.DeviceRoutine, SynchronizationEvent, 1u);
  KeInitializeEvent(&stru_1C006B670, SynchronizationEvent, 0);
  stru_1C006B480.Dpc.DeferredContext = (PVOID)0x378425548LL;
  dword_1C006B5D8 = 1734964085;
  LODWORD(stru_1C006B480.DeviceLock.Header.WaitListHead.Blink) = 1734964085;
  stru_1C006B480.DeviceLock.Header.LockNV = 1734964085;
  stru_1C006B480.ActiveThreadCount = 1734964085;
  *(_DWORD *)(&stru_1C006B480.Spare1 + 1) = 1734964085;
  LODWORD(stru_1C006B480.Reserved) = 1734964085;
  *((_DWORD *)&stru_1C006B480.Reserved + 3) = 1734964085;
  dword_1C006B5E0 = 1734964085;
  qword_1C006B620 = (__int64)&qword_1C006B618;
  qword_1C006B618 = (__int64)&qword_1C006B618;
  stru_1C006B480.Queue.Wcb.CurrentIrp = &stru_1C006B480.Queue.Wcb.DeviceObject;
  stru_1C006B480.Queue.Wcb.DeviceObject = &stru_1C006B480.Queue.Wcb.DeviceObject;
  qword_1C006B668 = (__int64)&qword_1C006B660;
  qword_1C006B660 = (__int64)&qword_1C006B660;
  result = 2LL;
  *(&stru_1C006B480.AlignmentRequirement + 1) = 2;
  stru_1C006B480.Dpc.TargetInfoAsUlong = 2;
  stru_1C006B480.Dpc.SystemArgument2 = &stru_1C006B480.Queue.Wcb.NumberOfChannels;
  stru_1C006B480.Dpc.SystemArgument1 = 0LL;
  stru_1C006B480.Queue.Wcb.BufferChainingDpc = (PKDPC)0x8000001F4LL;
  stru_1C006B480.DeviceQueue.DeviceListHead.Flink = (struct _LIST_ENTRY *)32;
  LODWORD(stru_1C006B480.DeviceQueue.DeviceListHead.Blink) = 1;
  LODWORD(stru_1C006B480.DeviceQueue.Lock) = 0;
  *(KSPIN_LOCK *)((char *)&stru_1C006B480.DeviceQueue.Lock + 4) = 10LL;
  HIDWORD(stru_1C006B480.Dpc.DpcListEntry.Next) = 300;
  dword_1C006B628 = 3;
  *((_DWORD *)&stru_1C006B480.DeviceQueue.1 + 1) = 2000;
  dword_1C006B638 = 1;
  dword_1C006B690 = 25;
  return result;
}
