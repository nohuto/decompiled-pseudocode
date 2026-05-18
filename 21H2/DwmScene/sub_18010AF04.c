/*
 * XREFs of sub_18010AF04 @ 0x18010AF04
 * Callers:
 *     sub_1800E1EB8 @ 0x1800E1EB8 (sub_1800E1EB8.c)
 * Callees:
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     sub_18010ADDC @ 0x18010ADDC (sub_18010ADDC.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18010AF04(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // rsi
  int v5; // eax

  sub_18010ADDC((_QWORD *)a1, 0x10uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v2 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v2 )
  {
LABEL_8:
    std::_Throw_C_error(v2);
    JUMPOUT(0x18010AFA6LL);
  }
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      unknown_libname_102(v4, 0);
      v4 += 16LL;
    }
    while ( v4 != v3 );
    v4 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v4;
  v5 = Mtx_unlock((_Mtx_t)(a1 + 48));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_8;
  }
  return a1;
}
