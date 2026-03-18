/*
 * XREFs of sub_1C000DAA0 @ 0x1C000DAA0
 * Callers:
 *     sub_1C000D7E0 @ 0x1C000D7E0 (sub_1C000D7E0.c)
 * Callees:
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 *     sub_1C0004738 @ 0x1C0004738 (sub_1C0004738.c)
 *     sub_1C000478C @ 0x1C000478C (sub_1C000478C.c)
 */

__int64 __fastcall sub_1C000DAA0(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
    sub_1C000478C((__int64)off_1C0007000->AttachedDevice, a2, a3, *((const wchar_t **)a1 + 3));
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 5u )
    sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xCu, (__int64)&unk_1C00053F8, *((_DWORD *)a1 + 1));
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 5u )
    sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xDu, (__int64)&unk_1C00053F8, *a1);
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 5u )
    sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xEu, (__int64)&unk_1C00053F8, a1[1]);
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 5u )
    sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xFu, (__int64)&unk_1C00053F8, (a1[3] >> 2) & 1);
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 5u )
    sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x10u, (__int64)&unk_1C00053F8, (a1[3] >> 4) & 7);
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 5u )
    sub_1C0004738((__int64)off_1C0007000->AttachedDevice, a2, a3, *((_QWORD *)a1 + 4));
  result = HIDWORD(off_1C0007000->Timer);
  if ( (result & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 5u )
    return sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x12u, (__int64)&unk_1C00053F8, (a1[3] >> 1) & 1);
  return result;
}
