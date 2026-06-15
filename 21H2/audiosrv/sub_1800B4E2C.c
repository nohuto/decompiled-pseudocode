/*
 * XREFs of sub_1800B4E2C @ 0x1800B4E2C
 * Callers:
 *     sub_180031350 @ 0x180031350 (sub_180031350.c)
 *     sub_1800372D0 @ 0x1800372D0 (sub_1800372D0.c)
 *     sub_180045060 @ 0x180045060 (sub_180045060.c)
 *     sub_180062644 @ 0x180062644 (sub_180062644.c)
 *     sub_1800655F4 @ 0x1800655F4 (sub_1800655F4.c)
 *     sub_180065A0C @ 0x180065A0C (sub_180065A0C.c)
 *     sub_1801071D0 @ 0x1801071D0 (sub_1801071D0.c)
 * Callees:
 *     sub_1800B4DB8 @ 0x1800B4DB8 (sub_1800B4DB8.c)
 */

signed int __fastcall sub_1800B4E2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int result; // eax
  int v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  result = sub_1800B4DB8(0, 0, 0, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
