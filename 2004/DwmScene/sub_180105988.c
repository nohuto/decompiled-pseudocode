/*
 * XREFs of sub_180105988 @ 0x180105988
 * Callers:
 *     sub_1800DCA4C @ 0x1800DCA4C (sub_1800DCA4C.c)
 *     sub_1800DCEBC @ 0x1800DCEBC (sub_1800DCEBC.c)
 * Callees:
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180105988(__int64 a1)
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
    JUMPOUT(0x1801059D2LL);
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
