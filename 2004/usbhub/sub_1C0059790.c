/*
 * XREFs of sub_1C0059790 @ 0x1C0059790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

void __fastcall sub_1C0059790(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r10

  sub_1C000FD80(a1, 0x10000, 1936933220, 0LL, a2);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x11u, (__int64)&unk_1C0062110);
  v4 = sub_1C000F050(*(_QWORD *)(a2 + 8));
  *((_QWORD *)v4 + 389) = v4 + 776;
  *((_QWORD *)v4 + 388) = v4 + 776;
  KeInitializeEvent((PRKEVENT)v4 + 139, SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)v4 + 140, SynchronizationEvent, 1u);
  sub_1C000FD80(a1, 0x2000, 1768843604, (__int64)(v4 + 800), (__int64)sub_1C001AC00);
  *(_QWORD *)v5 = 1332899156LL;
  *(_QWORD *)(v5 + 48) = v6;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 72) = 1397966964;
  KeInitializeSemaphore((PRKSEMAPHORE)(v4 + 782), 1, 1);
  KeInitializeSemaphore((PRKSEMAPHORE)(v4 + 790), 1, 1);
  KeInitializeEvent((PRKEVENT)v4 + 143, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)v4 + 141, NotificationEvent, 1u);
  v4[820] = 1;
  v4[781] = 1;
}
