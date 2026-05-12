/*
 * XREFs of RaDriverAddDevice @ 0x1C0032B60
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterHack @ 0x1C002B77C (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C002F5B8 (RaidCreateAdapter.c)
 *     RaidDeleteAdapter @ 0x1C002F794 (RaidDeleteAdapter.c)
 *     WPP_SF_qq @ 0x1C00320D0 (WPP_SF_qq.c)
 *     RaidCreateDeviceName @ 0x1C004363C (RaidCreateDeviceName.c)
 *     RaidInitializeAdapter @ 0x1C0078154 (RaidInitializeAdapter.c)
 */

__int64 __fastcall RaDriverAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT DeviceObject)
{
  NTSTATUS v4; // esi
  _QWORD *DeviceExtension; // rbx
  KSPIN_LOCK *DriverObjectExtension; // r14
  PDEVICE_OBJECT v7; // rax
  struct _DEVICE_OBJECT *v8; // rdi
  int v10; // eax
  KSPIN_LOCK **v11; // rax
  KSPIN_LOCK v12; // rdx
  KSPIN_LOCK *v13; // rcx
  struct _UNICODE_STRING DeviceName; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+B0h] [rbp+40h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+B8h] [rbp+48h] BYREF

  v16 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xBu,
      (__int64)&WPP_c75ef678420536b919220fd58d40bf93_Traceguids,
      DriverObject,
      DeviceObject);
  }
  SourceDevice = 0LL;
  DeviceName = 0LL;
  RaidCreateDeviceName(DeviceObject, &DeviceName, &v16);
  v4 = IoCreateDevice(DriverObject, 48 * (RaidLogListSize + 124), &DeviceName, 4u, 0x100u, 0, &SourceDevice);
  if ( v4 >= 0 )
  {
    DeviceExtension = SourceDevice->DeviceExtension;
    RaidCreateAdapter((__int64)DeviceExtension);
    DriverObjectExtension = (KSPIN_LOCK *)IoGetDriverObjectExtension(DriverObject, DriverEntry);
    v7 = IoAttachDeviceToDeviceStack(SourceDevice, DeviceObject);
    v8 = v7;
    if ( !v7 )
    {
      v4 = -1073741823;
      goto LABEL_8;
    }
    v10 = RaidInitializeAdapter(
            (int)DeviceExtension,
            (int)SourceDevice,
            (int)DriverObjectExtension,
            (int)v7,
            DeviceObject,
            (__int64)&DeviceName,
            v16);
    DeviceName.Buffer = 0LL;
    v4 = v10;
    if ( v10 < 0 )
    {
LABEL_8:
      if ( DeviceExtension )
      {
        if ( v8 )
          IoDetachDevice(v8);
        RaidDeleteAdapter((__int64)DeviceExtension);
        IoDeleteDevice(SourceDevice);
      }
      goto LABEL_12;
    }
    KeAcquireInStackQueuedSpinLock(DriverObjectExtension + 10, &LockHandle);
    v11 = (KSPIN_LOCK **)(DriverObjectExtension + 7);
    v12 = DriverObjectExtension[7];
    v13 = DeviceExtension + 8;
    if ( *(KSPIN_LOCK **)(v12 + 8) != DriverObjectExtension + 7 )
      __fastfail(3u);
    *v13 = v12;
    DeviceExtension[9] = v11;
    *(_QWORD *)(v12 + 8) = v13;
    *v11 = v13;
    ++*((_DWORD *)DriverObjectExtension + 18);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidAdapterHack((__int64)DeviceExtension);
    SourceDevice->Flags |= 0x10u;
    SourceDevice->Flags &= ~0x80u;
  }
LABEL_12:
  if ( DeviceName.Buffer )
    ExFreePoolWithTag(DeviceName.Buffer, 0);
  return (unsigned int)v4;
}
