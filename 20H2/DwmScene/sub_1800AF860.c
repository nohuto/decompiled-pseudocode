/*
 * XREFs of sub_1800AF860 @ 0x1800AF860
 * Callers:
 *     sub_18001A5D0 @ 0x18001A5D0 (sub_18001A5D0.c)
 *     sub_1800786DC @ 0x1800786DC (sub_1800786DC.c)
 * Callees:
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x18011FAB6 (_Cnd_signal.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800AF860(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  struct _Mtx_internal_imp_t *v6; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 433) )
  {
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v6 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v3 = Mtx_lock((_Mtx_t)(a1 + 128));
    if ( !v3 )
    {
      if ( *(_DWORD *)(a1 + 36) )
      {
        *(_BYTE *)(a1 + 120) = 1;
        v4 = Cnd_signal((_Cnd_t)(a1 + 208));
        if ( v4 )
        {
LABEL_11:
          std::_Throw_C_error(v4);
          JUMPOUT(0x1800AF8E8LL);
        }
        v2 = v6;
      }
      else
      {
        sub_1800AF8EC(a1);
      }
      v5 = Mtx_unlock(v2);
      if ( !v5 )
        return;
      std::_Throw_C_error(v5);
    }
    std::_Throw_C_error(v3);
    goto LABEL_11;
  }
}
