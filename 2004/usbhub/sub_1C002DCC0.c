/*
 * XREFs of sub_1C002DCC0 @ 0x1C002DCC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001B180 @ 0x1C001B180 (sub_1C001B180.c)
 *     sub_1C001B88C @ 0x1C001B88C (sub_1C001B88C.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C005A09C @ 0x1C005A09C (sub_1C005A09C.c)
 */

void __fastcall sub_1C002DCC0(__int64 a1)
{
  _DWORD *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rsi

  v2 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 8, 1750421065, 0LL, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 43, (__int64)&unk_1C0062088);
  sub_1C001B180(a1);
  sub_1C005A09C(a1);
  v3 = (void *)*((_QWORD *)v2 + 377);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)v2 + 377) = 0LL;
  }
  v4 = (void *)*((_QWORD *)v2 + 378);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)v2 + 378) = 0LL;
  }
  v5 = (void *)_InterlockedExchange64((volatile __int64 *)v2 + 152, 0LL);
  sub_1C000FD80(a1, 8, 1752519238, 0LL, (__int64)v5);
  if ( v5 )
  {
    sub_1C001B88C(a1, (__int64)v5);
    ObfDereferenceObject(v5);
  }
  sub_1C000FD80(a1, 8, 1752525118, 0LL, 0LL);
}
