/*
 * XREFs of sub_1C000C494 @ 0x1C000C494
 * Callers:
 *     sub_1C000C430 @ 0x1C000C430 (sub_1C000C430.c)
 *     sub_1C000D120 @ 0x1C000D120 (sub_1C000D120.c)
 * Callees:
 *     sub_1C0004AFC @ 0x1C0004AFC (sub_1C0004AFC.c)
 *     sub_1C000C5A8 @ 0x1C000C5A8 (sub_1C000C5A8.c)
 *     sub_1C000C8B4 @ 0x1C000C8B4 (sub_1C000C8B4.c)
 */

__int64 sub_1C000C494()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rax

  if ( byte_1C000704C )
  {
    PsRemoveCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)NotifyRoutine);
    byte_1C000704C = 0;
  }
  sub_1C000C8B4();
  if ( qword_1C0007270 )
    ExUnregisterExtension();
  while ( 1 )
  {
    Flink = DeviceObject.DeviceLock.Header.WaitListHead.Flink;
    if ( DeviceObject.DeviceLock.Header.WaitListHead.Flink == &DeviceObject.DeviceLock.Header.WaitListHead )
      break;
    if ( DeviceObject.DeviceLock.Header.WaitListHead.Flink->Blink != &DeviceObject.DeviceLock.Header.WaitListHead
      || (v1 = DeviceObject.DeviceLock.Header.WaitListHead.Flink->Flink,
          DeviceObject.DeviceLock.Header.WaitListHead.Flink->Flink->Blink != DeviceObject.DeviceLock.Header.WaitListHead.Flink) )
    {
      __fastfail(3u);
    }
    DeviceObject.DeviceLock.Header.WaitListHead.Flink = DeviceObject.DeviceLock.Header.WaitListHead.Flink->Flink;
    v1->Blink = &DeviceObject.DeviceLock.Header.WaitListHead;
    sub_1C0004AFC(Flink[1].Flink);
    sub_1C0004AFC(&Flink[-1].Blink);
  }
  if ( qword_1C0007238 )
  {
    sub_1C0004AFC((void *)qword_1C0007238);
    qword_1C0007238 = 0LL;
  }
  if ( IoWorkItem )
  {
    IoFreeWorkItem(IoWorkItem);
    if ( Handle )
      ZwClose(Handle);
  }
  if ( qword_1C0007348 )
  {
    EtwUnregister(qword_1C0007348);
    qword_1C0007348 = 0LL;
  }
  return sub_1C000C5A8();
}
