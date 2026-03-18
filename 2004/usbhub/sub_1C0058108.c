/*
 * XREFs of sub_1C0058108 @ 0x1C0058108
 * Callers:
 *     sub_1C0054958 @ 0x1C0054958 (sub_1C0054958.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 */

void __fastcall sub_1C0058108(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  KIRQL v3; // bl
  KIRQL v4; // bp

  v2 = sub_1C0011220((__int64)DeviceObject);
  RtlFreeUnicodeString((PUNICODE_STRING)v2 + 167);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
  sub_1C0050D40((__int64)(v2 + 524));
  sub_1C0050D40((__int64)(v2 + 520));
  sub_1C0050D40((__int64)(v2 + 528));
  sub_1C0050D40((__int64)(v2 + 536));
  sub_1C0050D40((__int64)(v2 + 532));
  sub_1C0050D40((__int64)(v2 + 540));
  sub_1C0050D40((__int64)(v2 + 544));
  sub_1C0050D40((__int64)(v2 + 548));
  sub_1C0050D40((__int64)(v2 + 556));
  sub_1C0050D40((__int64)(v2 + 552));
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 351);
  if ( v2[704] == 1 )
  {
    v2[704] = 0;
    USBD_RemoveDeviceFromGlobalList(DeviceObject);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 351, v4);
  IoDeleteDevice(DeviceObject);
}
