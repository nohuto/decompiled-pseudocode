/*
 * XREFs of IoVerifyVolume @ 0x140890E20
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x1402083E0 (IopQueueThreadIrp.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopDecrementVpbRefCount @ 0x140291F80 (IopDecrementVpbRefCount.c)
 *     IopDereferenceVpbAndFree @ 0x14032BD40 (IopDereferenceVpbAndFree.c)
 *     IopReferenceVerifyVpb @ 0x1404FBB7C (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x14076DA7C (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14076EBF0 (IopCreateVpb.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  IRP *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+38h]
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+58h] BYREF

  DeviceObjecta = 0LL;
  v24 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v24, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v26 = 0LL,
          (int)IopMountVolume((ULONG_PTR)DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v26) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v26 )
    {
      IopDecrementVpbRefCount(v26, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v8 = i;
  LOBYTE(v7) = v8->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v8, v7, 0LL, retaddr);
  v14 = (IRP *)Irp;
  if ( !Irp )
  {
    IopDereferenceVpbAndFree(v24, v11, v12, v13);
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = &v21;
  v15 = *(_QWORD *)(Irp + 184);
  v16 = v24;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v15 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v15 - 56) = DeviceObjecta;
  *(_WORD *)(v15 - 72) = 525;
  *(_QWORD *)(v15 - 64) = v16;
  IopQueueThreadIrp(Irp);
  v6 = IofCallDriver(v8, v14);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v21;
  }
  IopDereferenceVpbAndFree(v16, v17, v18, v19);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
