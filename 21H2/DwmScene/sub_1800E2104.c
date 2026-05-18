/*
 * XREFs of sub_1800E2104 @ 0x1800E2104
 * Callers:
 *     sub_18006F208 @ 0x18006F208 (sub_18006F208.c)
 * Callees:
 *     sub_1800E1EB8 @ 0x1800E1EB8 (sub_1800E1EB8.c)
 *     sub_18010B1EC @ 0x18010B1EC (sub_18010B1EC.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800E2104(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  sub_1800E1EB8((__int64 *)a1, 8uLL);
  Mtx_init_in_situ((_Mtx_t)(a1 + 24), 2);
  Mtx_init_in_situ((_Mtx_t)(a1 + 104), 2);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  v2 = operator new(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 184) = v2;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v3 = operator new(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *(_QWORD *)(a1 + 200) = v3;
  *(_DWORD *)(a1 + 216) = 0;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != v4 )
  {
    do
    {
      sub_18010B1EC(v5);
      v5 += 128LL;
    }
    while ( v5 != v4 );
    v5 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v5;
  return a1;
}
