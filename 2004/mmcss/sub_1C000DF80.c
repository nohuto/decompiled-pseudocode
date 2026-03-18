/*
 * XREFs of sub_1C000DF80 @ 0x1C000DF80
 * Callers:
 *     sub_1C000D150 @ 0x1C000D150 (sub_1C000D150.c)
 * Callees:
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 */

__int64 sub_1C000DF80()
{
  NTSTATUS v0; // ebx
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  void *ThreadHandle; // [rsp+70h] [rbp+8h] BYREF

  memset(&Event, 0, sizeof(Event));
  ThreadHandle = 0LL;
  HIDWORD(DeviceObject.SecurityDescriptor) = *(&DeviceObject.ActiveThreadCount + 1) * dword_1C0007280 / 0x64;
  LODWORD(DeviceObject.SecurityDescriptor) = *(&DeviceObject.ActiveThreadCount + 1)
                                           - *(&DeviceObject.ActiveThreadCount + 1) * dword_1C0007280 / 0x64;
  *(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels = ExAllocateTimer(0LL, 0LL, 4LL);
  if ( *(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels )
  {
    DeviceObject.Queue.Wcb.DeviceContext = 0LL;
    *(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfMapRegisters = -1LL;
    dword_1C0007220 = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v0 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, (PKSTART_ROUTINE)StartRoutine, &Event);
    if ( v0 < 0 )
    {
      if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
        sub_1C00043B8((__int64)off_1C0007000->AttachedDevice, 0xBu, (__int64)&unk_1C0005448);
    }
    else
    {
      ZwClose(ThreadHandle);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    return (unsigned int)v0;
  }
  else
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C00043B8((__int64)off_1C0007000->AttachedDevice, 0xAu, (__int64)&unk_1C0005448);
    return 3221225495LL;
  }
}
