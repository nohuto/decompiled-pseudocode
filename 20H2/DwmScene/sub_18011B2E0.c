/*
 * XREFs of sub_18011B2E0 @ 0x18011B2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011BDA4 @ 0x18011BDA4 (sub_18011BDA4.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18011B2E0(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  int result; // eax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v4 = Mtx_lock((_Mtx_t)(a1 + 160));
  if ( v4 )
  {
LABEL_4:
    std::_Throw_C_error(v4);
    JUMPOUT(0x18011B33CLL);
  }
  sub_18011BDA4(a1 + 240, &v6);
  result = Mtx_unlock(v3);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_4;
  }
  return result;
}
