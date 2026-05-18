/*
 * XREFs of sub_1800662E0 @ 0x1800662E0
 * Callers:
 *     <none>
 * Callees:
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

__int64 __fastcall sub_1800662E0(__int64 a1, __int64 a2)
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
    JUMPOUT(0x180066314LL);
  }
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
