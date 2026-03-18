/*
 * XREFs of PopDiagQueryDevicePropertyString @ 0x140990C30
 * Callers:
 *     PopDiagTraceFxDeviceAccounting @ 0x1405D2284 (PopDiagTraceFxDeviceAccounting.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140804CD8 (PopDiagTraceFxComponentAccounting.c)
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x14099E598 (PopDirectedDripsDiagCreateDeviceDescription.c)
 * Callees:
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDiagQueryDevicePropertyString(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int64 a3)
{
  NTSTATUS v6; // ebx
  void *Pool2; // rdi
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF
  ULONG BufferLength; // [rsp+78h] [rbp+20h] BYREF

  BufferLength = 0;
  ResultLength[0] = 0;
  v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, 0, 0LL, &BufferLength);
  if ( v6 == -1073741789 )
  {
    if ( BufferLength <= 0xFFFF )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, BufferLength, 1734960208LL);
      if ( Pool2 )
      {
        v6 = IoGetDeviceProperty(DeviceObject, DeviceProperty, BufferLength, Pool2, ResultLength);
        if ( v6 < 0 )
        {
          ExFreePoolWithTag(Pool2, 0x67696450u);
        }
        else
        {
          *(_WORD *)a3 = ResultLength[0];
          *(_WORD *)(a3 + 2) = BufferLength;
          *(_QWORD *)(a3 + 8) = Pool2;
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v6;
}
