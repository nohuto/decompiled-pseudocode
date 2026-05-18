/*
 * XREFs of sub_180120BB0 @ 0x180120BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180121674 @ 0x180121674 (sub_180121674.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180120BB0(__int64 a1, int a2)
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
    JUMPOUT(0x180120C0CLL);
  }
  sub_180121674(a1 + 240, &v6);
  result = Mtx_unlock(v3);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_4;
  }
  return result;
}
