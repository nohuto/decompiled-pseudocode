/*
 * XREFs of sub_180122D90 @ 0x180122D90
 * Callers:
 *     <none>
 * Callees:
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

int __fastcall sub_180122D90(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  unsigned __int8 v4; // di
  int v5; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v3 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v3 )
  {
LABEL_5:
    std::_Throw_C_error(v3);
    JUMPOUT(0x180122DDALL);
  }
  v4 = *(_BYTE *)(a1 + 112);
  v5 = Mtx_unlock(v2);
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_5;
  }
  return v4;
}
