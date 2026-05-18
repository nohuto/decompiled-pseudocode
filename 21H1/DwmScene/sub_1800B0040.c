/*
 * XREFs of sub_1800B0040 @ 0x1800B0040
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x18011FAB6 (_Cnd_signal.c)
 *     _Cnd_wait @ 0x18011FB5C (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_1800B0040(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbp
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  char v5; // r14
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int result; // eax
  struct _Mtx_internal_imp_t *v12; // [rsp+20h] [rbp-38h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v12 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  do
  {
    v4 = Mtx_lock(v3);
    if ( v4 )
      goto LABEL_20;
    v5 = *(_BYTE *)(a1 + 425);
    if ( *(_BYTE *)(a1 + 120) )
    {
      *(_BYTE *)(a1 + 120) = 0;
      sub_1800AF8EC(a1);
      v3 = v12;
      v6 = Mtx_unlock(v12);
      if ( v6 )
        goto LABEL_18;
    }
    else
    {
      v7 = Mtx_unlock(v12);
      if ( v7 )
      {
        std::_Throw_C_error(v7);
LABEL_18:
        std::_Throw_C_error(v6);
LABEL_19:
        std::_Throw_C_error(v9);
LABEL_20:
        std::_Throw_C_error(v4);
LABEL_21:
        std::_Throw_C_error(result);
LABEL_22:
        std::_Throw_C_error(v10);
LABEL_23:
        std::_Throw_C_error(v8);
        JUMPOUT(0x1800B0189LL);
      }
      v8 = Mtx_lock(v2);
      if ( v8 )
        goto LABEL_23;
      while ( !*(_BYTE *)(a1 + 120) && *(_BYTE *)(a1 + 425) )
      {
        v9 = Cnd_wait((_Cnd_t)(a1 + 208), v2);
        if ( v9 )
          goto LABEL_19;
      }
      v10 = Mtx_unlock(v2);
      if ( v10 )
        goto LABEL_22;
      v3 = v12;
    }
  }
  while ( v5 );
  *(_BYTE *)(a1 + 426) = 1;
  result = Cnd_signal((_Cnd_t)(a1 + 352));
  if ( result )
    goto LABEL_21;
  return result;
}
