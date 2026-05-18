/*
 * XREFs of sub_1800A7850 @ 0x1800A7850
 * Callers:
 *     sub_1800A7A94 @ 0x1800A7A94 (sub_1800A7A94.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A7850(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rax

  v4 = a2;
  v5 = operator new(0x30uLL);
  v5[4] = 0LL;
  v5[5] = 0LL;
  v6 = a3[1];
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    v4 = a2;
  }
  v5[4] = *a3;
  v5[5] = a3[1];
  *v5 = v4;
  v5[1] = v4;
  v5[2] = v4;
  *((_WORD *)v5 + 12) = 0;
  return v5;
}
