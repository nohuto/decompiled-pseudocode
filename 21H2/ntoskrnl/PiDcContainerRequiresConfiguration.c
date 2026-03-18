/*
 * XREFs of PiDcContainerRequiresConfiguration @ 0x14076DAF0
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x14076C764 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcHandleDeviceEvent @ 0x14076D824 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x14076D9FC (PiDcHandleInterfaceEvent.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14078C2F8 (PiDcHandleCustomDeviceEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x140949450 (PiDcHandleSystemFirmwareUpdate.c)
 * Callees:
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     _PnpSetObjectProperty @ 0x14077198C (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDcContainerRequiresConfiguration(wchar_t *Str2)
{
  int ObjectProperty; // ebx
  int v2; // edi
  int v4; // [rsp+88h] [rbp+10h] BYREF
  int v5; // [rsp+90h] [rbp+18h] BYREF
  int v6; // [rsp+98h] [rbp+20h] BYREF

  ObjectProperty = 0;
  v2 = (int)Str2;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
  {
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       v2,
                       5,
                       0,
                       0LL,
                       (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                       (__int64)&v4,
                       (__int64)&v5,
                       4,
                       (__int64)&v6,
                       0);
    if ( ObjectProperty < 0 || v5 != -1 || v4 != 7 )
    {
      ObjectProperty = PnpSetObjectProperty(
                         PiPnpRtlCtx,
                         v2,
                         5,
                         0LL,
                         (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                         7,
                         (__int64)&unconfiguredConfigFlags,
                         4,
                         0);
      if ( ObjectProperty >= 0 )
        ZwUpdateWnfStateData((__int64)&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL);
    }
  }
  return (unsigned int)ObjectProperty;
}
