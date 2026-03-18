/*
 * XREFs of IopGetSessionIdFromPDO @ 0x14073B300
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x140504BDC (IopCheckSessionDeviceAccess.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CCCDC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpNotifyTargetDeviceChange @ 0x140649A60 (PnpNotifyTargetDeviceChange.c)
 *     PnpStartDeviceNode @ 0x14073AFA8 (PnpStartDeviceNode.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14073B188 (IopGetSessionIdFromSymbolicName.c)
 *     PnpInitializeSessionId @ 0x14076A7D4 (PnpInitializeSessionId.c)
 *     IoRegisterContainerNotification @ 0x140897470 (IoRegisterContainerNotification.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x14070F920 (IoGetDevicePropertyData.c)
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
