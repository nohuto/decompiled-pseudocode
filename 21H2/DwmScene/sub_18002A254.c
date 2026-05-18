/*
 * XREFs of sub_18002A254 @ 0x18002A254
 * Callers:
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 * Callees:
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18002A254(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  int v3; // eax
  unsigned __int8 v4; // bp
  __int64 *v5; // rsi
  __int64 *v6; // rbx
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  int v10; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 4168);
  v3 = Mtx_lock((_Mtx_t)(a1 + 4168));
  if ( v3 )
  {
LABEL_18:
    std::_Throw_C_error(v3);
    JUMPOUT(0x18002A32CLL);
  }
  v4 = 0;
  v5 = *(__int64 **)(a1 + 4136);
  v6 = (__int64 *)*v5;
  while ( v6 != v5 )
  {
    if ( v4 || (**(unsigned __int8 (__fastcall ***)(__int64))v6[4])(v6[4]) )
      v4 = 1;
    v7 = (__int64 **)v6[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v6 = i;
      v6 = i;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  v10 = Mtx_unlock(v2);
  if ( v10 )
  {
    std::_Throw_C_error(v10);
    goto LABEL_18;
  }
  return v4;
}
