/*
 * XREFs of PcisuppInitializePciRouting @ 0x1C00904A0
 * Callers:
 *     PcisuppAcquirePciInterfaces @ 0x1C00903EC (PcisuppAcquirePciInterfaces.c)
 * Callees:
 *     memset @ 0x1C0032180 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009DDBC (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall PcisuppInitializePciRouting(PDEVICE_OBJECT DeviceObject)
{
  PVOID PoolWithTag; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rax
  struct _DEVICE_OBJECT *v4; // rsi
  int v5; // ebx
  _QWORD v7[9]; // [rsp+20h] [rbp-58h] BYREF

  if ( InterruptRouting )
  {
    return 0;
  }
  else
  {
    memset(v7, 0, sizeof(v7));
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x41706341u);
    if ( PoolWithTag )
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
      v7[4] = 0LL;
      v4 = AttachedDeviceReference;
      LOWORD(v7[0]) = 2075;
      LODWORD(v7[2]) = 131128;
      v7[1] = &GUID_INT_ROUTE_INTERFACE_STANDARD;
      v7[3] = PoolWithTag;
      v5 = ACPIInternalSendSynchronousIrp(AttachedDeviceReference);
      if ( v5 < 0 )
        ExFreePoolWithTag(PoolWithTag, 0);
      else
        InterruptRouting = PoolWithTag;
      if ( v4 )
        ObfDereferenceObject(v4);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
