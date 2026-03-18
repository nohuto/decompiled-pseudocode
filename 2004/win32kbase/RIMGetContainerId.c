/*
 * XREFs of RIMGetContainerId @ 0x1C016016C
 * Callers:
 *     RIMGetDeviceLocationInfo @ 0x1C016056C (RIMGetDeviceLocationInfo.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0167AE8 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C000C2C8 (RIMGetPointerDevicePDO.c)
 */

__int64 __fastcall RIMGetContainerId(struct _DEVICE_OBJECT *a1, void *a2, _DWORD *a3, __int64 a4)
{
  int v5; // ebx
  int DevicePropertyData; // edi
  struct _DEVICE_OBJECT *v8; // r14
  PVOID Data; // [rsp+28h] [rbp-28h]
  ULONG Type; // [rsp+40h] [rbp-10h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-Ch] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+48h] [rbp-8h] BYREF
  char v14; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  Pdo = 0LL;
  DevicePropertyData = RIMGetPointerDevicePDO(a1, &Pdo, (__int64)a3, a4);
  if ( DevicePropertyData >= 0 )
  {
    v14 = 0;
    Type = 0;
    Data = a2;
    v8 = Pdo;
    RequiredSize = 0;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &DEVPKEY_Device_ContainerId,
                           0,
                           0,
                           0x10u,
                           Data,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData >= 0 )
    {
      if ( a3 )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               v8,
                               &DEVPKEY_Device_InLocalMachineContainer,
                               0,
                               0,
                               1u,
                               &v14,
                               &RequiredSize,
                               &Type);
        if ( DevicePropertyData >= 0 )
        {
          LOBYTE(v5) = v14 != -1;
          *a3 = v5;
        }
      }
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)DevicePropertyData;
}
