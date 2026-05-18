/*
 * XREFs of sub_1800B5A5C @ 0x1800B5A5C
 * Callers:
 *     sub_18001E0C4 @ 0x18001E0C4 (sub_18001E0C4.c)
 * Callees:
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800B5A5C(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  int result; // eax

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v5 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v5 )
  {
LABEL_4:
    std::_Throw_C_error(v5);
    JUMPOUT(0x1800B5AB1LL);
  }
  *(_DWORD *)(a1 + 32) = a2;
  result = Mtx_unlock(v4);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_4;
  }
  return result;
}
