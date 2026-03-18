/*
 * XREFs of sub_1C000C430 @ 0x1C000C430
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 *     sub_1C000C494 @ 0x1C000C494 (sub_1C000C494.c)
 */

__int64 sub_1C000C430()
{
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
    sub_1C00043B8((__int64)off_1C0007000->AttachedDevice, 0x13u, (__int64)&unk_1C00053E8);
  if ( qword_1C0007288 )
  {
    IoDeleteDevice(qword_1C0007288);
    qword_1C0007288 = 0LL;
  }
  return sub_1C000C494();
}
