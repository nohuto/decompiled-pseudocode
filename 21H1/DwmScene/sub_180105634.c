/*
 * XREFs of sub_180105634 @ 0x180105634
 * Callers:
 *     sub_1800DC5E8 @ 0x1800DC5E8 (sub_1800DC5E8.c)
 * Callees:
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     sub_18010550C @ 0x18010550C (sub_18010550C.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180105634(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // rsi
  int v5; // eax

  sub_18010550C((_QWORD *)a1, 0x10uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  Mtx_init_in_situ((_Mtx_t)(a1 + 48), 2);
  v2 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v2 )
  {
LABEL_8:
    std::_Throw_C_error(v2);
    JUMPOUT(0x1801056D6LL);
  }
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      unknown_libname_100(v4, 0);
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
