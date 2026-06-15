/*
 * XREFs of sub_1800FBE30 @ 0x1800FBE30
 * Callers:
 *     sub_1800FED10 @ 0x1800FED10 (sub_1800FED10.c)
 *     sub_1800FEDC8 @ 0x1800FEDC8 (sub_1800FEDC8.c)
 * Callees:
 *     sub_1800FA0E0 @ 0x1800FA0E0 (sub_1800FA0E0.c)
 *     sub_1800FED10 @ 0x1800FED10 (sub_1800FED10.c)
 */

__int64 __fastcall sub_1800FBE30(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  bool v6; // zf

  v4 = (_QWORD *)a2[2];
  if ( v4 )
    sub_1800FA0E0(v4);
  a2[2] = 0LL;
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v6 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v6 )
    return sub_1800FED10(a1);
  return result;
}
