/*
 * XREFs of sub_1C004D820 @ 0x1C004D820
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C004D820(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x22u, (__int64)&unk_1C0062100, v5);
  }
  sub_1C000FD80(a1, 1024, 1884450405, a2, 0LL);
  return 1LL;
}
