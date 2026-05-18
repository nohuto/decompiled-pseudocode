/*
 * XREFs of sub_18002A184 @ 0x18002A184
 * Callers:
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 * Callees:
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18002A184(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rsi
  int v3; // eax
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  int result; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 4168);
  v3 = Mtx_lock((_Mtx_t)(a1 + 4168));
  if ( v3 )
  {
LABEL_14:
    std::_Throw_C_error(v3);
    JUMPOUT(0x18002A250LL);
  }
  v4 = *(__int64 **)(a1 + 4152);
  v5 = (__int64 *)*v4;
  while ( v5 != v4 )
  {
    (**(void (__fastcall ***)(__int64, _QWORD))v5[4])(v5[4], *(unsigned int *)(a1 + 4248));
    v6 = (__int64 **)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  result = Mtx_unlock(v2);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_14;
  }
  return result;
}
