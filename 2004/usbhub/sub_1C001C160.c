/*
 * XREFs of sub_1C001C160 @ 0x1C001C160
 * Callers:
 *     sub_1C00071D0 @ 0x1C00071D0 (sub_1C00071D0.c)
 * Callees:
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

__int64 __fastcall sub_1C001C160(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d

  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E55C(DeviceObject->DeviceExtension, v6, v7, 70, (__int64)&unk_1C0062098, *(_WORD *)(a2 + 4), a3);
  sub_1C000FD80(a1, 512, 1346711864, 0LL, *(unsigned __int16 *)(a2 + 4));
  return sub_1C0007840(a1, a2, 18, a3, 0LL, 0, 0LL, 0LL);
}
