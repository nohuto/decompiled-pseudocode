/*
 * XREFs of PiUEventIsDeviceEventVetoable @ 0x1406FE7F0
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1406FDB3C (PiUEventNotifyUserMode.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiUEventIsDeviceEventVetoable(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v1 )
    v1 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_KERNEL_INITIATED_EJECT.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_KERNEL_INITIATED_EJECT.Data4;
  return !v2;
}
