/*
 * XREFs of IoGetDmaAdapter @ 0x140764F60
 * Callers:
 *     VfGetDmaAdapter @ 0x1409CCE60 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoGetDeviceProperty @ 0x140634AA0 (IoGetDeviceProperty.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140765058 (PiGetDmaAdapterFromBusInterface.c)
 */

struct _DMA_ADAPTER *__stdcall IoGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  struct _DMA_ADAPTER *DmaAdapterFromBusInterface; // rbx
  _DWORD *DeviceNode; // rcx
  size_t v8; // r8
  NTSTATUS DeviceProperty; // eax
  int v10; // edx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v21[16]; // [rsp+40h] [rbp-78h] BYREF

  memset(v21, 0, sizeof(v21));
  DmaAdapterFromBusInterface = 0LL;
  ResultLength[0] = 0;
  if ( PhysicalDeviceObject )
  {
    DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock((ULONG)PhysicalDeviceObject, (PVOID)PhysicalDeviceObject->Size);
      DriverObject = PhysicalDeviceObject->DriverObject;
      if ( DriverObject )
      {
        IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
        p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
        if ( p_DriverName->Length )
        {
          IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
          IoAddTriageDumpDataBlock(
            (ULONG)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
            (PVOID)PhysicalDeviceObject->DriverObject->DriverName.Length);
        }
      }
      v13 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
      if ( v13 )
      {
        v14 = (unsigned __int16 *)(v13 + 40);
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)0x310);
        if ( *v14 )
        {
          IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
        }
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
        v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
            (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
          DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
        }
        v17 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
        if ( v17 )
        {
          v18 = (_WORD *)(v17 + 56);
          if ( *v18 )
          {
            IoAddTriageDumpDataBlock((ULONG)v18, (PVOID)2);
            v19 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
          }
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
    }
    ((void (__fastcall *)(struct _KTHREAD *, PDEVICE_OBJECT))off_140C00908[0])(
      KeGetCurrentThread(),
      PhysicalDeviceObject);
    if ( ((DeviceDescription->InterfaceType + 1) & 0xFFFFFFEF) == 0 )
    {
      if ( DeviceDescription->Version >= 3 )
      {
        v8 = 0LL;
        if ( DeviceDescription->Version == 3 )
          v8 = 64LL;
      }
      else
      {
        v8 = 40LL;
      }
      memmove(v21, DeviceDescription, v8);
      DeviceProperty = IoGetDeviceProperty(PhysicalDeviceObject, DevicePropertyLegacyBusType, 4u, &v21[5], ResultLength);
      v10 = v21[5];
      if ( DeviceProperty < 0 )
        v10 = 1;
      v21[5] = v10;
    }
    DmaAdapterFromBusInterface = (struct _DMA_ADAPTER *)PiGetDmaAdapterFromBusInterface((ULONG)PhysicalDeviceObject);
    ((void (__fastcall *)(struct _KTHREAD *, _QWORD))off_140C00908[0])(KeGetCurrentThread(), 0LL);
  }
  return DmaAdapterFromBusInterface;
}
