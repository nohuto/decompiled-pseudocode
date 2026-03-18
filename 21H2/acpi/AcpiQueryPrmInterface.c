/*
 * XREFs of AcpiQueryPrmInterface @ 0x1C00B1848
 * Callers:
 *     AcpiAcquirePrmInterface @ 0x1C00B14C8 (AcpiAcquirePrmInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiQueryPrmInterface(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  *(_OWORD *)&Object.Header.Lock = 0LL;
  *(_OWORD *)a5 = 0LL;
  Object.Header.WaitListHead.Blink = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  *(_DWORD *)a5 = 65592;
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v7 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  if ( v7 )
  {
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    v7->RequestorMode = 0;
    v7->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_PRM_DRIVER_INTERFACE_STANDARD;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65592;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
    Status = IofCallDriver(AttachedDeviceReference, v7);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
