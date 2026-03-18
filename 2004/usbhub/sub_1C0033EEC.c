/*
 * XREFs of sub_1C0033EEC @ 0x1C0033EEC
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

__int64 __fastcall sub_1C0033EEC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x49u, (__int64)&unk_1C0062098, v9, a3);
  }
  sub_1C000FD80(a1, 512, 1346712112, 0LL, *(unsigned __int16 *)(a2 + 4));
  sub_1C0007840(a1, a2, 20, a3, 0LL, 0, 0LL, (__int64)&v10);
  return v10;
}
