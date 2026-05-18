/*
 * XREFs of sub_18006BBB0 @ 0x18006BBB0
 * Callers:
 *     <none>
 * Callees:
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

__int64 __fastcall sub_18006BBB0(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v2; // rcx
  int v4; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 304);
  *(_BYTE *)(a2 + 8) = 0;
  *(_QWORD *)a2 = v2;
  v4 = Mtx_lock(v2);
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    JUMPOUT(0x18006BBE4LL);
  }
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
