/*
 * XREFs of ACPIInternalSendSynchronousIrp @ 0x1C009DDBC
 * Callers:
 *     ACPIWakeInitializePmeRouting @ 0x1C000C798 (ACPIWakeInitializePmeRouting.c)
 *     ACPIBusIrpQueryInterface @ 0x1C00109F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002D140 (ACPIInternalQueryExtendedAddress.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00566FC (ACPIQueryGedDeviceInterface.c)
 *     PcisuppInitializePciRouting @ 0x1C00904A0 (PcisuppInitializePciRouting.c)
 *     AcpiQueryPciBusInterface @ 0x1C00987F0 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C00989DC (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009DA84 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIMatchHardwareId @ 0x1C00A10FC (ACPIMatchHardwareId.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C00A1F4C (ACPIInternalGetDeviceCapabilities.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C00A2170 (ACPIBusIrpDeviceUsageNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0019748 (WPP_RECORDER_SF_qD.c)
 */

__int64 __fastcall ACPIInternalSendSynchronousIrp(PDEVICE_OBJECT DeviceObject, __int64 a2, unsigned __int64 *a3)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  PIRP v7; // rax
  IRP *v8; // rdx
  __int64 v9; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ebx
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h]
  struct _IO_STATUS_BLOCK v14; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  v14 = 0LL;
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v7 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Object, &v14);
  v8 = v7;
  if ( v7 )
  {
    v7->IoStatus.Information = 0LL;
    v7->IoStatus.Status = -1073741637;
    v9 = (__int64)&v7->Tail.Overlay.CurrentStackLocation[-1];
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)a2;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(v9 + 64) = *(_QWORD *)(a2 + 64);
      CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = 0LL;
      CurrentStackLocation[-1].Context = 0LL;
      CurrentStackLocation[-1].Control = 0;
      Status = IofCallDriver(AttachedDeviceReference, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = v14.Status;
      }
      if ( Status >= 0 && a3 )
        *a3 = v14.Information;
    }
    else
    {
      Status = -1073741811;
    }
  }
  else
  {
    Status = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(IoStatusBlock) = Status;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_93e06651ed773e0c6f8a5613c80b6645_Traceguids,
      DeviceObject,
      IoStatusBlock);
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
