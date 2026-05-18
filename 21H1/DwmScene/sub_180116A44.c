/*
 * XREFs of sub_180116A44 @ 0x180116A44
 * Callers:
 *     sub_180061184 @ 0x180061184 (sub_180061184.c)
 * Callees:
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_broadcast @ 0x18011FB62 (_Cnd_broadcast.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180116A44(_Mtx_t *a1)
{
  _Mtx_t v1; // rbx
  int v2; // eax
  int v3; // eax
  int result; // eax

  v1 = *a1;
  v2 = Mtx_lock(*a1);
  if ( v2 )
    goto LABEL_5;
  *((_BYTE *)v1 + 228) = 0;
  v3 = Mtx_unlock(v1);
  if ( v3 )
  {
LABEL_6:
    std::_Throw_C_error(v3);
    JUMPOUT(0x180116A98LL);
  }
  result = Cnd_broadcast((_Mtx_t)((char *)v1 + 152));
  if ( result )
  {
    std::_Throw_C_error(result);
LABEL_5:
    std::_Throw_C_error(v2);
    goto LABEL_6;
  }
  return result;
}
