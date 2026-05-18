/*
 * XREFs of sub_1800B5130 @ 0x1800B5130
 * Callers:
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_18007DFAC @ 0x18007DFAC (sub_18007DFAC.c)
 * Callees:
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x180125386 (_Cnd_signal.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800B5130(__int64 a1)
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
          JUMPOUT(0x1800B51B8LL);
        }
        v2 = v6;
      }
      else
      {
        sub_1800B51BC(a1);
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
