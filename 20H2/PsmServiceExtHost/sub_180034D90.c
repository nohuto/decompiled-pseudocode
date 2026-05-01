/*
 * XREFs of sub_180034D90 @ 0x180034D90
 * Callers:
 *     sub_180034BB8 @ 0x180034BB8 (sub_180034BB8.c)
 *     sub_180034D68 @ 0x180034D68 (sub_180034D68.c)
 *     sub_18003C450 @ 0x18003C450 (sub_18003C450.c)
 *     sub_18003C690 @ 0x18003C690 (sub_18003C690.c)
 *     sub_1800806D0 @ 0x1800806D0 (sub_1800806D0.c)
 * Callees:
 *     sub_180034DD0 @ 0x180034DD0 (sub_180034DD0.c)
 */

__int64 __fastcall sub_180034D90(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[3] )
    __int2c();
  if ( a1[2] != -1LL )
    result = sub_180034DD0(a1[4] & 0xFFFFFFFFFFFFFFFCuLL, a1);
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
