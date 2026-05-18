/*
 * XREFs of sub_1800B02F8 @ 0x1800B02F8
 * Callers:
 *     sub_18007B340 @ 0x18007B340 (sub_18007B340.c)
 * Callees:
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x18011FB5C (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1800B02F8(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  struct _Mtx_internal_imp_t *v5; // [rsp+20h] [rbp-18h]

  v5 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v2 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v2 )
    goto LABEL_8;
  while ( *(_BYTE *)(a1 + 424) )
  {
    v3 = Cnd_wait((_Cnd_t)(a1 + 280), v5);
    if ( v3 )
      goto LABEL_7;
  }
  result = Mtx_unlock(v5);
  if ( result )
  {
    std::_Throw_C_error(result);
LABEL_7:
    std::_Throw_C_error(v3);
LABEL_8:
    std::_Throw_C_error(v2);
    JUMPOUT(0x1800B0371LL);
  }
  return result;
}
