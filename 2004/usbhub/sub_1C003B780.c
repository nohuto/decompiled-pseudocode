/*
 * XREFs of sub_1C003B780 @ 0x1C003B780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001AE8 @ 0x1C0001AE8 (sub_1C0001AE8.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 __fastcall sub_1C003B780(PVOID DeferredContext)
{
  _DWORD *v2; // rdi
  int v3; // eax
  __int64 v4; // rbx

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0062DD8);
  v2 = sub_1C000F050((__int64)DeferredContext);
  sub_1C000FD80((__int64)DeferredContext, 0x2000, 1684886356, 0LL, 0LL);
  *((_QWORD *)v2 + 469) = v2 + 936;
  *((_QWORD *)v2 + 468) = v2 + 936;
  KeInitializeSpinLock((PKSPIN_LOCK)v2 + 466);
  KeInitializeEvent((PRKEVENT)(v2 + 940), NotificationEvent, 0);
  KeInitializeDpc((PRKDPC)(v2 + 946), (PKDEFERRED_ROUTINE)sub_1C0014280, DeferredContext);
  KeInitializeTimer((PKTIMER)(v2 + 962));
  v3 = sub_1C0001AE8((__int64)DeferredContext, (__int64)(v2 + 936), 1836338500);
  v4 = v3;
  if ( (v3 & 0xC0000000) == 0xC0000000 )
  {
    KeSetEvent((PRKEVENT)(v2 + 940), 0, 0);
  }
  else
  {
    v2[640] |= 0x2000000u;
    v2[934] = 2;
  }
  sub_1C000FD80((__int64)DeferredContext, 0x2000, 1098149234, 0LL, v4);
  return (unsigned int)v4;
}
