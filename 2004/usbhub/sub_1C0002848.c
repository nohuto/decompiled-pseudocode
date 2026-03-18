/*
 * XREFs of sub_1C0002848 @ 0x1C0002848
 * Callers:
 *     sub_1C00038F0 @ 0x1C00038F0 (sub_1C00038F0.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

LONG __fastcall sub_1C0002848(__int64 a1, int a2, __int64 a3)
{
  int v5; // esi

  v5 = a1;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 57, (__int64)&unk_1C0062098, *(_WORD *)(a3 + 4));
  sub_1C0007840(v5, a3, 5, a2, 0LL, 0, 0LL, 0LL);
  return KeSetEvent((PRKEVENT)(a3 + 2464), 0, 0);
}
