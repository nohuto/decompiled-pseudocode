/*
 * XREFs of sub_1800F06D4 @ 0x1800F06D4
 * Callers:
 *     sub_18008FC98 @ 0x18008FC98 (sub_18008FC98.c)
 *     sub_180099E70 @ 0x180099E70 (sub_180099E70.c)
 *     sub_18009DD34 @ 0x18009DD34 (sub_18009DD34.c)
 *     sub_1800ACBBC @ 0x1800ACBBC (sub_1800ACBBC.c)
 *     sub_1800B86C4 @ 0x1800B86C4 (sub_1800B86C4.c)
 *     sub_18010143C @ 0x18010143C (sub_18010143C.c)
 *     sub_180103458 @ 0x180103458 (sub_180103458.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F06D4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  v5 = (_QWORD *)(a1 + 24);
  v5[2] = 0LL;
  v5[3] = 0LL;
  sub_180020B7C(v5, a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
  *(_QWORD *)(a1 + 56) = *a3;
  *(_QWORD *)(a1 + 64) = a3[1];
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
