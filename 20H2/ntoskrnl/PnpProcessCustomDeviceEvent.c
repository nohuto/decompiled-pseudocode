/*
 * XREFs of PnpProcessCustomDeviceEvent @ 0x140648BA0
 * Callers:
 *     PnpDeviceEventWorker @ 0x14064A080 (PnpDeviceEventWorker.c)
 * Callees:
 *     PiDcHandleCustomDeviceEvent @ 0x140648B00 (PiDcHandleCustomDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x14064921C (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x140649A60 (PnpNotifyTargetDeviceChange.c)
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
