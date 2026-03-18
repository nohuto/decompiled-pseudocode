/*
 * XREFs of IopGetSessionIdFromPDO @ 0x140723A04
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x140500CBC (IopCheckSessionDeviceAccess.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C6ACC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpNotifyTargetDeviceChange @ 0x140684748 (PnpNotifyTargetDeviceChange.c)
 *     PnpStartDeviceNode @ 0x140723644 (PnpStartDeviceNode.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14072388C (IopGetSessionIdFromSymbolicName.c)
 *     PnpInitializeSessionId @ 0x14075A2DC (PnpInitializeSessionId.c)
 *     IoRegisterContainerNotification @ 0x1408904D0 (IoRegisterContainerNotification.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1406EDEC0 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall IopGetSessionIdFromPDO(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  _DWORD *DeviceNode; // rdx
  NTSTATUS DevicePropertyData; // eax
  unsigned int v4; // ecx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  ULONG v7; // [rsp+58h] [rbp+10h] BYREF
  ULONG v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v1 = -1;
  v7 = 0;
  v6 = -1;
  if ( a1 )
  {
    DeviceNode = a1->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        DevicePropertyData = IoGetDevicePropertyData(a1, &DEVPKEY_Device_SessionId, 0, 0, 4u, &v6, &v8, &v7);
        v4 = v6;
        if ( DevicePropertyData < 0 )
          return (unsigned int)-1;
        return v4;
      }
    }
  }
  return v1;
}
