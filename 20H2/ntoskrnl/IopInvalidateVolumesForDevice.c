/*
 * XREFs of IopInvalidateVolumesForDevice @ 0x140777870
 * Callers:
 *     PiIrpQueryRemoveDevice @ 0x1407302BC (PiIrpQueryRemoveDevice.c)
 *     IopRemoveDevice @ 0x1407417F8 (IopRemoveDevice.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IoBuildDeviceIoControlRequest @ 0x14020A090 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     IoCreateStreamFileObjectLite @ 0x1405D9BA0 (IoCreateStreamFileObjectLite.c)
 *     ObOpenObjectByPointer @ 0x14067EA30 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall IopInvalidateVolumesForDevice(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v1; // rsi
  __int64 result; // rax
  PDEVICE_OBJECT i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // r12
  ULONG DeviceType; // eax
  __int64 *v7; // r14
  int v8; // esi
  __int64 *j; // r15
  struct _DEVICE_OBJECT *k; // r13
  PIRP v11; // rax
  int Status; // eax
  NTSTATUS v13; // [rsp+50h] [rbp-68h]
  PFILE_OBJECT DmaAdapter; // [rsp+58h] [rbp-60h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-48h] BYREF
  HANDLE InputBuffer; // [rsp+C8h] [rbp+10h] BYREF
  PDEVICE_OBJECT v19; // [rsp+D0h] [rbp+18h]

  v1 = DeviceObject;
  result = 0LL;
  memset(&Event, 0, sizeof(Event));
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  for ( i = DeviceObject; ; i = i->AttachedDevice )
  {
    v19 = i;
    if ( !i )
      break;
    if ( i->Vpb )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      KeWaitForSingleObject(&i->DeviceLock, Executive, 0, 0, 0LL);
      InputBuffer = 0LL;
      DmaAdapter = IoCreateStreamFileObjectLite(0LL, i);
      DmaAdapter->Vpb = i->Vpb;
      v13 = ObOpenObjectByPointer(DmaAdapter, 0x200u, 0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &InputBuffer);
      if ( v13 >= 0 )
      {
        v5 = KeGetCurrentThread();
        --v5->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        DeviceType = v1->DeviceType;
        if ( DeviceType == 7 || DeviceType == 36 )
        {
          v7 = &IopDiskFileSystemQueueHead;
        }
        else
        {
          v7 = &IopCdRomFileSystemQueueHead;
          if ( DeviceType != 2 )
            v7 = &IopTapeFileSystemQueueHead;
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v8 = 0;
        for ( j = (__int64 *)*v7; j != v7 && (__int64 *)*j != v7; j = (__int64 *)*j )
        {
          for ( k = (struct _DEVICE_OBJECT *)(j - 10); k->AttachedDevice; k = k->AttachedDevice )
            ;
          KeResetEvent(&Event);
          v11 = IoBuildDeviceIoControlRequest(0x90054u, k, &InputBuffer, 8u, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( !v11 )
          {
            v8 = -1073741670;
            break;
          }
          *(_WORD *)&v11->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 13;
          Status = IofCallDriver(k, v11);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          else
          {
            IoStatusBlock.Status = Status;
            IoStatusBlock.Information = 0LL;
          }
          if ( Status == -1073741808 || Status == -1073741822 )
            Status = 0;
          if ( v8 >= 0 && Status < 0 )
            v8 = Status;
        }
        ExReleaseResourceLite(&IopDatabaseResource);
        KeLeaveCriticalRegionThread((__int64)v5);
        if ( DmaAdapter )
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
          if ( InputBuffer )
            ZwClose(InputBuffer);
        }
        v13 = v8;
      }
      KeSetEvent(&i->DeviceLock, 0, 0);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      result = (unsigned int)v13;
      v1 = DeviceObject;
    }
  }
  return result;
}
