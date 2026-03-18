/*
 * XREFs of ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C0236144
 * Callers:
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0233CBC (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C02AE53C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

__int64 __fastcall EnsureServerVmBusInterface(__int64 a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *v6; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  PIRP v13; // rax
  __int64 v14; // rcx
  IRP *v15; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v17; // rcx
  NTSTATUS Status; // edi
  PFILE_OBJECT v19; // rcx
  struct DXGGLOBAL *v20; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+30h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+38h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 656));
  v3 = 0;
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    ((void (__fastcall *)(__int64))qword_1C00B0F10)(qword_1C00B0F08);
    ++g_VgpuVmBusInterfaceRefCount;
    v6 = DXGGLOBAL::GetGlobal(v5, v4);
    *((_QWORD *)v6 + 83) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v6 + 656, 0LL);
    goto LABEL_17;
  }
  memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  DeviceObject = 0LL;
  FileObject = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\RootVMBus\\kmcl_interface");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  v10 = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    IoStatusBlock = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v13 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v15 = v13;
    if ( v13 )
    {
      CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MinorFunction = 8;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&KMCL_PRIVATE_SERVER_INTERFACE_TYPE;
      CurrentStackLocation[-1].Parameters.Create.Options = 66328;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)&g_VgpuVmBusInterface;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      v15->IoStatus.Status = -1073741637;
      Status = IofCallDriver(DeviceObject, v15);
      if ( Status == 259 )
      {
        Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( !Status )
          Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        g_VgpuVmBusInterfaceRefCount = 1;
        goto LABEL_14;
      }
      v11 = WdLogNewEntry5_WdError(v17, v12);
      *(_QWORD *)(v11 + 24) = Status;
      *(_QWORD *)(v11 + 32) = 13863LL;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v14, 0LL);
      *(_QWORD *)(v11 + 24) = -1073741670LL;
      *(_QWORD *)(v11 + 32) = 13835LL;
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = v10;
  }
  WdLogEvent5_WdError(v11);
LABEL_14:
  v19 = FileObject;
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  v20 = DXGGLOBAL::GetGlobal((__int64)v19, v12);
  *((_QWORD *)v20 + 83) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v20 + 656, 0LL);
  v3 = v10;
LABEL_17:
  KeLeaveCriticalRegion();
  return v3;
}
