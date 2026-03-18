/*
 * XREFs of sub_1C00348FC @ 0x1C00348FC
 * Callers:
 *     sub_1C00071D0 @ 0x1C00071D0 (sub_1C00071D0.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

__int64 __fastcall sub_1C00348FC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-20h]

  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v10, v11, 0x48u, (__int64)&unk_1C0062098, v13, a4);
  }
  sub_1C000FD80(a1, 512, 1346712115, 0LL, *(unsigned __int16 *)(a2 + 4));
  return sub_1C0007840(a1, a2, 23, a4, a3, a5, a6, 0LL);
}
