/*
 * XREFs of ?EnsureClientVmBusInterface@@YAJXZ @ 0x1C0238FC4
 * Callers:
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0236A64 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C02B1A9C (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

__int64 __fastcall EnsureClientVmBusInterface(__int64 a1, __int64 a2)
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
  __int64 v13; // rcx
  PIRP v14; // rax
  __int64 v15; // rcx
  IRP *v16; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // edi
  struct DXGGLOBAL *v19; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+20h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp+28h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 768));
  v3 = 0;
  if ( !g_VgpuVmBusInterfaceRefCount )
  {
    memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
    DeviceObject = 0LL;
    FileObject = 0LL;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Device\\VMBus\\kmcl_interface");
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
    v10 = DeviceObjectPointer;
    if ( DeviceObjectPointer >= 0 )
    {
      IoStatusBlock = 0LL;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v14 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
      v16 = v14;
      if ( v14 )
      {
        CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MinorFunction = 8;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&KMCL_CLIENT_INTERFACE_TYPE;
        CurrentStackLocation[-1].Parameters.Create.Options = 65896;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)&g_VgpuVmBusInterface;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        v16->IoStatus.Status = -1073741637;
        Status = IofCallDriver(DeviceObject, v16);
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
        v11 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v11 + 24) = Status;
        *(_QWORD *)(v11 + 32) = 14094LL;
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(v15, 0LL);
        *(_QWORD *)(v11 + 24) = -1073741670LL;
        *(_QWORD *)(v11 + 32) = 14066LL;
      }
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v11 + 24) = v10;
    }
    WdLogEvent5_WdError(v11);
LABEL_14:
    v19 = DXGGLOBAL::GetGlobal(v13, v12);
    *((_QWORD *)v19 + 97) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v19 + 768, 0LL);
    v3 = v10;
    goto LABEL_15;
  }
  ((void (__fastcall *)(__int64))qword_1C00B2040)(qword_1C00B2038);
  ++g_VgpuVmBusInterfaceRefCount;
  v6 = DXGGLOBAL::GetGlobal(v5, v4);
  *((_QWORD *)v6 + 97) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v6 + 768, 0LL);
LABEL_15:
  KeLeaveCriticalRegion();
  return v3;
}
