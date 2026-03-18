/*
 * XREFs of _GetContainerId@12 @ 0xE6C84
 * Callers:
 *     _IsLegacyTouchPadDevice@4 @ 0xE6B7C (_IsLegacyTouchPadDevice@4.c)
 * Callees:
 *     _GetPointerDevicePDO@8 @ 0xE6F66 (_GetPointerDevicePDO@8.c)
 */

NTSTATUS __fastcall GetContainerId(struct _DEVICE_OBJECT *a1, void *a2, _DWORD *a3)
{
  NTSTATUS PointerDevicePDO; // esi
  ULONG RequiredSize; // [esp+Ch] [ebp-10h] BYREF
  ULONG Type; // [esp+10h] [ebp-Ch] BYREF
  PDEVICE_OBJECT Pdo; // [esp+14h] [ebp-8h]
  char Data; // [esp+1Bh] [ebp-1h] BYREF

  Pdo = 0;
  PointerDevicePDO = GetPointerDevicePDO(a1);
  if ( PointerDevicePDO >= 0 )
  {
    Data = 0;
    Type = 0;
    RequiredSize = 0;
    PointerDevicePDO = IoGetDevicePropertyData(Pdo, &DEVPKEY_Device_ContainerId, 0, 0, 0x10u, a2, &RequiredSize, &Type);
    if ( PointerDevicePDO >= 0 )
    {
      if ( a3 )
      {
        PointerDevicePDO = IoGetDevicePropertyData(
                             Pdo,
                             &DEVPKEY_Device_InLocalMachineContainer,
                             0,
                             0,
                             1u,
                             &Data,
                             &RequiredSize,
                             &Type);
        if ( PointerDevicePDO >= 0 )
          *a3 = Data != -1;
      }
    }
    ObfDereferenceObject(Pdo);
  }
  return PointerDevicePDO;
}
