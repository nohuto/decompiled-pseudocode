/*
 * XREFs of sub_18008A30C @ 0x18008A30C
 * Callers:
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008A30C(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax

  v6 = a2;
  v7 = operator new(0x50uLL);
  v7[6] = 0LL;
  v7[7] = 0LL;
  sub_18001277C(v7 + 4, a3);
  v7[8] = 0LL;
  v7[9] = 0LL;
  v8 = a4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v6 = a2;
  }
  v7[8] = *a4;
  v7[9] = a4[1];
  *v7 = v6;
  v7[1] = v6;
  v7[2] = v6;
  *((_WORD *)v7 + 12) = 0;
  return v7;
}
