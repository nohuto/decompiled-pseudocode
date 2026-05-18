/*
 * XREFs of sub_18010D0EC @ 0x18010D0EC
 * Callers:
 *     sub_18010D060 @ 0x18010D060 (sub_18010D060.c)
 * Callees:
 *     sub_180018D48 @ 0x180018D48 (sub_180018D48.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010D0EC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 64LL )
  {
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    sub_180020B7C((_QWORD *)a3, i);
    *(_DWORD *)(a3 + 32) = *(_DWORD *)(i + 32);
    sub_180018D48((_QWORD *)(a3 + 40), i + 40);
    a3 += 64LL;
  }
  return a3;
}
