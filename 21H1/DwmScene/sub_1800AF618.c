/*
 * XREFs of sub_1800AF618 @ 0x1800AF618
 * Callers:
 *     sub_1800786DC @ 0x1800786DC (sub_1800786DC.c)
 * Callees:
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AF618(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v3 )
  {
LABEL_5:
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  v4 = *(_DWORD *)(a1 + 32);
  v5 = Mtx_unlock(v2);
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    goto LABEL_5;
  }
  return v4;
}
