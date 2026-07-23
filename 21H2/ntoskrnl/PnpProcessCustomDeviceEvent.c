/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x1406FD4C0
 * Callers:
 *     PnpDeviceEventWorker @ 0x1406FECB0 (PnpDeviceEventWorker.c)
 * Callees:
 *     PiDcHandleCustomDeviceEvent @ 0x1406FD420 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x1406FDB3C (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 */

__int64 __fastcall PnpProcessCustomDeviceEvent(__int64 *a1)
{
  __int64 v1; // rbx
  void *v2; // rsi
  __int64 v3; // rdi

  v1 = *a1;
  v2 = *(void **)(*a1 + 152);
  v3 = *(_QWORD *)(*a1 + 160);
  PiDcHandleCustomDeviceEvent(*a1);
  PiUEventNotifyUserMode(v1);
  PnpNotifyTargetDeviceChange((void *)(v3 + 4), v2);
  return 0LL;
}
