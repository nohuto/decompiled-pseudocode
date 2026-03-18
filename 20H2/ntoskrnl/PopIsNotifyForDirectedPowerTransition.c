/*
 * XREFs of PopIsNotifyForDirectedPowerTransition @ 0x140382E44
 * Callers:
 *     PopWakeDeviceList @ 0x1403829EC (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x140382BCC (PopSleepDeviceList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsNotifyForDirectedPowerTransition(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) != 0 && *(_QWORD *)(a1 - 80) && (*(_DWORD *)(a1 + 600) & 0x10000) != 0 )
    return (*(_DWORD *)(a1 + 600) & 0x20000) == 0;
  return v1;
}
