/*
 * XREFs of sub_1C000D150 @ 0x1C000D150
 * Callers:
 *     sub_1C000D120 @ 0x1C000D120 (sub_1C000D120.c)
 * Callees:
 *     sub_1C0004364 @ 0x1C0004364 (sub_1C0004364.c)
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 *     sub_1C000BA40 @ 0x1C000BA40 (sub_1C000BA40.c)
 *     sub_1C000BB90 @ 0x1C000BB90 (sub_1C000BB90.c)
 *     sub_1C000BC00 @ 0x1C000BC00 (sub_1C000BC00.c)
 *     sub_1C000D310 @ 0x1C000D310 (sub_1C000D310.c)
 *     sub_1C000DED0 @ 0x1C000DED0 (sub_1C000DED0.c)
 *     sub_1C000DF80 @ 0x1C000DF80 (sub_1C000DF80.c)
 *     sub_1C000E0B0 @ 0x1C000E0B0 (sub_1C000E0B0.c)
 */

__int64 __fastcall sub_1C000D150(__int64 a1)
{
  __int64 v2; // rdx
  NTSTATUS ThreadNotifyRoutine; // ebx
  __int64 v4; // r8
  _DWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall **v7)(); // [rsp+28h] [rbp-20h]
  __int64 *v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  DeviceObject.Timer = (PIO_TIMER)1;
  *(_QWORD *)&DeviceObject.Type = 0LL;
  DeviceObject.DriverObject = (struct _DRIVER_OBJECT *)&unk_1C0005220;
  DeviceObject.NextDevice = 0LL;
  DeviceObject.CurrentIrp = 0LL;
  sub_1C000BA40();
  DeviceObject.CurrentIrp = 0LL;
  sub_1C000BB90();
  DeviceObject.DeviceLock.Header.WaitListHead.Blink = &DeviceObject.DeviceLock.Header.WaitListHead;
  DeviceObject.DeviceLock.Header.WaitListHead.Flink = &DeviceObject.DeviceLock.Header.WaitListHead;
  DeviceObject.Dpc.DeferredContext = &DeviceObject.Dpc.DeferredRoutine;
  DeviceObject.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&DeviceObject.Dpc.DeferredRoutine;
  DeviceObject.Dpc.SystemArgument2 = &DeviceObject.Dpc.SystemArgument1;
  DeviceObject.Dpc.SystemArgument1 = &DeviceObject.Dpc.SystemArgument1;
  ThreadNotifyRoutine = EtwRegister(&ProviderId, (PETWENABLECALLBACK)EnableCallback, 0LL, &qword_1C0007348);
  if ( ThreadNotifyRoutine < 0 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C0004364((__int64)off_1C0007000->AttachedDevice, v2, v4, ThreadNotifyRoutine);
  }
  else
  {
    ThreadNotifyRoutine = sub_1C000E0B0();
    if ( ThreadNotifyRoutine >= 0 )
    {
      ThreadNotifyRoutine = sub_1C000D310();
      if ( ThreadNotifyRoutine >= 0 )
      {
        ThreadNotifyRoutine = PsSetCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)NotifyRoutine);
        if ( ThreadNotifyRoutine < 0 )
        {
          if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
            sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xAu, (__int64)&unk_1C0005418, ThreadNotifyRoutine);
        }
        else
        {
          byte_1C000704C = 1;
        }
        if ( ThreadNotifyRoutine >= 0 )
        {
          v6[1] = 1;
          v7 = &off_1C0005000;
          v6[0] = 65545;
          v8 = &qword_1C0007278;
          v9 = a1;
          ThreadNotifyRoutine = ExRegisterExtension(&qword_1C0007270, 0x10000LL, v6);
          if ( ThreadNotifyRoutine >= 0 )
          {
            ThreadNotifyRoutine = sub_1C000DF80();
            if ( ThreadNotifyRoutine >= 0 )
              ThreadNotifyRoutine = sub_1C000DED0(a1);
          }
        }
      }
    }
  }
  if ( LODWORD(DeviceObject.Dpc.DpcData) != -1 && dword_1C0007280 != 100 )
  {
    IoWorkItem = IoAllocateWorkItem(qword_1C0007288);
    if ( IoWorkItem )
      sub_1C000BC00();
  }
  return (unsigned int)ThreadNotifyRoutine;
}
