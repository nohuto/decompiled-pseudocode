/*
 * XREFs of sub_180072094 @ 0x180072094
 * Callers:
 *     sub_180076CC8 @ 0x180076CC8 (sub_180076CC8.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180072094(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // [rsp+28h] [rbp-10h]

  v6 = operator new(0x48uLL);
  v6[6] = 0LL;
  v6[7] = 0LL;
  sub_180020B7C(v6 + 4, a3);
  *((_DWORD *)v6 + 16) = *(_DWORD *)(a3 + 32);
  *v6 = a2;
  v6[1] = a2;
  v6[2] = a2;
  *((_WORD *)v6 + 12) = 0;
  return v6;
}
