/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x1C003BACC
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C000D970 (UsbhSshSuspendHub.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000F880 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001B180 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSetHubRemoteWake @ 0x1C002D554 (UsbhSetHubRemoteWake.c)
 */

void __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1)
{
  _DWORD *v2; // rbx

  v2 = FdoExt(a1);
  UsbhDisarmHubForWakeDetect(a1);
  if ( (v2[640] & 0x80000) != 0 && (int)UsbhSetHubRemoteWake(a1, 0) >= 0 )
    v2[640] &= ~0x80000u;
}
