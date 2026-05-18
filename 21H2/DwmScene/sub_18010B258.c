/*
 * XREFs of sub_18010B258 @ 0x18010B258
 * Callers:
 *     sub_1800E231C @ 0x1800E231C (sub_1800E231C.c)
 *     sub_1800E278C @ 0x1800E278C (sub_1800E278C.c)
 * Callees:
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010B258(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v3 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v3 )
  {
LABEL_5:
    std::_Throw_C_error(v3);
    JUMPOUT(0x18010B2A2LL);
  }
  v4 = *(_QWORD *)(a1 + 24);
  v5 = Mtx_unlock(v2);
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_5;
  }
  return v4;
}
