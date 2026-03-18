/*
 * XREFs of ?DpiBrightnessNotifyMonitorDimmingForward@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D0110
 * Callers:
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z @ 0x1C02D00A8 (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@KE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiBrightnessNotifyMonitorDimmingForward(struct _DEVICE_OBJECT *a1, int a2, char a3)
{
  char *DeviceExtension; // rsi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  int v6; // ebx
  unsigned int Status; // ebx
  struct _ERESOURCE *v8; // rbp
  _QWORD **v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  struct _DEVICE_OBJECT *v12; // rcx
  IRP *v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  __int64 InputBuffer; // [rsp+A0h] [rbp+8h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  AttachedDeviceReference = 0LL;
  InputBuffer = 0LL;
  v6 = a2;
  if ( a2 == -1 )
  {
    v6 = *((_DWORD *)DeviceExtension + 871);
    if ( v6 == -1 )
      return (unsigned int)-1073741637;
  }
  KeEnterCriticalRegion();
  v8 = (struct _ERESOURCE *)(DeviceExtension + 3304);
  ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3304), 1u);
  v9 = (_QWORD **)(DeviceExtension + 3464);
  v10 = *v9;
  while ( v10 != v9 )
  {
    v11 = v10 - 4;
    v10 = (_QWORD *)*v10;
    if ( *(_DWORD *)v11 == 1 && *((_DWORD *)v11 + 6) == v6 )
    {
      v12 = (struct _DEVICE_OBJECT *)v11[6];
      if ( v12 )
        AttachedDeviceReference = IoGetAttachedDeviceReference(v12);
      break;
    }
  }
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  if ( !AttachedDeviceReference )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    LODWORD(InputBuffer) = InputBuffer | 1;
    BYTE4(InputBuffer) = a3;
    IoStatusBlock = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v13 = IoBuildDeviceIoControlRequest(
            0x2324CFu,
            AttachedDeviceReference,
            &InputBuffer,
            8u,
            0LL,
            0,
            1u,
            &Event,
            &IoStatusBlock);
    if ( v13 )
    {
      Status = IofCallDriver(AttachedDeviceReference, v13);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741801;
    }
    ObfDereferenceObject(AttachedDeviceReference);
  }
  return Status;
}
