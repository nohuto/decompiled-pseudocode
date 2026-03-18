/*
 * XREFs of sub_1C004C8A0 @ 0x1C004C8A0
 * Callers:
 *     sub_1C001C7A8 @ 0x1C001C7A8 (sub_1C001C7A8.c)
 *     sub_1C004C428 @ 0x1C004C428 (sub_1C004C428.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C004C8A0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r10d
  int v8; // [rsp+28h] [rbp-10h]

  sub_1C000FD80(a1, 1024, 1884443460, a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != (_WORD)v6 )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, v6 + 1, v6 + 41, (__int64)&unk_1C0062100, v8);
  }
  sub_1C001518C(a1, a3, -1073741810);
  sub_1C0017FEC(a1, a2);
  return *(unsigned int *)(a2 + 400);
}
