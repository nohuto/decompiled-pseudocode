/*
 * XREFs of sub_1C0034728 @ 0x1C0034728
 * Callers:
 *     sub_1C0035BB0 @ 0x1C0035BB0 (sub_1C0035BB0.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

__int64 __fastcall sub_1C0034728(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-20h]

  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x45u, (__int64)&unk_1C0062098, v9, a3);
  }
  sub_1C000FD80(a1, 512, 1346711859, 0LL, *(unsigned __int16 *)(a2 + 4));
  return sub_1C0007840(a1, a2, 13, a3, 0LL, 0, 0LL, 0LL);
}
