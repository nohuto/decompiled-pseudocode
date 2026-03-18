/*
 * XREFs of IoVerifyVolume @ 0x14088FB00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopDecrementVpbRefCount @ 0x140255700 (IopDecrementVpbRefCount.c)
 *     IopQueueThreadIrp @ 0x140261300 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IopDereferenceVpbAndFree @ 0x1402F01C0 (IopDereferenceVpbAndFree.c)
 *     IopReferenceVerifyVpb @ 0x1404FB52C (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x14076B2DC (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14076C450 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_DeviceLock; // r12
  NTSTATUS v6; // edi
  struct _DEVICE_OBJECT *v7; // rdi
  struct _DEVICE_OBJECT *i; // rax
  __int64 Irp; // rax
  __int64 v10; // r8
  IRP *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  DeviceObjecta = 0LL;
  v20 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v20, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v22 = 0LL,
          (int)IopMountVolume(DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v22) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v22 )
    {
      IopDecrementVpbRefCount(v22, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v7 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v7 = i;
  Irp = IopAllocateIrpExReturn();
  v11 = (IRP *)Irp;
  if ( !Irp )
  {
    IopDereferenceVpbAndFree(v20);
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = &v18;
  v12 = *(_QWORD *)(Irp + 184);
  v13 = v20;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v12 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v12 - 56) = DeviceObjecta;
  *(_WORD *)(v12 - 72) = 525;
  *(_QWORD *)(v12 - 64) = v13;
  IopQueueThreadIrp(Irp, v12, v10);
  v6 = IofCallDriver(v7, v11);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v18;
  }
  IopDereferenceVpbAndFree(v13);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
  return v6;
}
