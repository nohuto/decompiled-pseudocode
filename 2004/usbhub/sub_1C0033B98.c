/*
 * XREFs of sub_1C0033B98 @ 0x1C0033B98
 * Callers:
 *     sub_1C0036430 @ 0x1C0036430 (sub_1C0036430.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0033B98(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-10h]

  sub_1C000FD80(a1, 512, 1768837187, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x34u, (__int64)&unk_1C0062098, v5);
  }
  sub_1C000F050(a1);
  KeInitializeEvent((PRKEVENT)(a2 + 520), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 2464), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 472), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 496), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a2 + 800), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 712), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 744), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 824), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(a2 + 2888), SynchronizationEvent, 1u);
  *(_DWORD *)(a2 + 696) = 0;
  *(_DWORD *)(a2 + 860) = 32;
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 440));
  result = a2 + 456;
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
  *(_DWORD *)(a2 + 12) = 1;
  *(_QWORD *)(a2 + 464) = a2 + 456;
  *(_QWORD *)(a2 + 456) = a2 + 456;
  return result;
}
