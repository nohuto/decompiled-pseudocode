/*
 * XREFs of sub_1800B01E4 @ 0x1800B01E4
 * Callers:
 *     sub_18001AF08 @ 0x18001AF08 (sub_18001AF08.c)
 * Callees:
 *     sub_1800AF510 @ 0x1800AF510 (sub_1800AF510.c)
 *     sub_1800AF578 @ 0x1800AF578 (sub_1800AF578.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800B01E4(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v4; // rsi
  int v5; // eax
  char v6; // bl
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  *(_QWORD *)&v8 = a1 + 128;
  BYTE8(v8) = 0;
  v5 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v5 )
  {
LABEL_10:
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  v6 = 1;
  BYTE8(v8) = 1;
  if ( a2 != *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36) = a2;
    if ( a2 == 1 )
    {
      LOBYTE(v5) = (unsigned __int8)sub_1800AF510(a1);
    }
    else
    {
      LOBYTE(v5) = sub_1800AF578(a1, (_Mtx_t *)&v8);
      v6 = BYTE8(v8);
      v4 = (struct _Mtx_internal_imp_t *)v8;
    }
  }
  if ( v6 )
  {
    v5 = Mtx_unlock(v4);
    if ( v5 )
    {
      std::_Throw_C_error(v5);
      goto LABEL_10;
    }
  }
  return v5;
}
