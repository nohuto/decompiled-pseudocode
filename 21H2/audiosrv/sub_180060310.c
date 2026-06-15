/*
 * XREFs of sub_180060310 @ 0x180060310
 * Callers:
 *     sub_1800602AC @ 0x1800602AC (sub_1800602AC.c)
 *     sub_1801343FC @ 0x1801343FC (sub_1801343FC.c)
 *     sub_180134458 @ 0x180134458 (sub_180134458.c)
 *     sub_180134610 @ 0x180134610 (sub_180134610.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

_QWORD *__fastcall sub_180060310(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rdx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (void *)v3[6];
      v5 = (_QWORD *)*v3;
      v3[6] = 0LL;
      if ( v4 )
        sub_180033A70(v4);
      v6 = v3[5];
      if ( v6 >= 8 )
        sub_1800472E0(v3[2], 2 * v6 + 2);
      v3[4] = 0LL;
      v3[5] = 7LL;
      *((_WORD *)v3 + 8) = 0;
      result = (_QWORD *)sub_1800472E0((__int64)v3, 0x38uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  return result;
}
