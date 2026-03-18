/*
 * XREFs of IoVerifyVolume @ 0x140896910
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IopDecrementVpbRefCount @ 0x14020DC10 (IopDecrementVpbRefCount.c)
 *     IopDereferenceVpbAndFree @ 0x14020DE80 (IopDereferenceVpbAndFree.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     IopQueueThreadIrp @ 0x140221360 (IopQueueThreadIrp.c)
 *     IopReferenceVerifyVpb @ 0x1404FF450 (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x14077C4AC (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14077D620 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_DeviceLock; // r12
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rdi
  struct _DEVICE_OBJECT *i; // rax
  __int64 Irp; // rax
  IRP *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+38h]
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+58h] BYREF

  DeviceObjecta = 0LL;
  v18 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v18, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v20 = 0LL,
          (int)IopMountVolume(DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v20) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v20 )
    {
      IopDecrementVpbRefCount(v20, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v8 = i;
  LOBYTE(v7) = v8->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v8, v7, 0LL, retaddr);
  v11 = (IRP *)Irp;
  if ( !Irp )
  {
    IopDereferenceVpbAndFree(v18);
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = &v15;
  v12 = *(_QWORD *)(Irp + 184);
  v13 = v18;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v12 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v12 - 56) = DeviceObjecta;
  *(_WORD *)(v12 - 72) = 525;
  *(_QWORD *)(v12 - 64) = v13;
  IopQueueThreadIrp(Irp);
  v6 = IofCallDriver(v8, v11);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v15;
  }
  IopDereferenceVpbAndFree(v13);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
