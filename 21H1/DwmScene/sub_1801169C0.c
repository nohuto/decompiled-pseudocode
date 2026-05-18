/*
 * XREFs of sub_1801169C0 @ 0x1801169C0
 * Callers:
 *     sub_1801169B8 @ 0x1801169B8 (sub_1801169B8.c)
 * Callees:
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x18011FB5C (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_1801169C0(char *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax

  v2 = Mtx_lock((_Mtx_t)a1);
  if ( v2 )
    goto LABEL_9;
  while ( 1 )
  {
    if ( !a1[228] )
    {
      v3 = *((_DWORD *)a1 + 56);
      if ( v3 != -1 )
        break;
    }
    v4 = Cnd_wait((_Cnd_t)(a1 + 152), (_Mtx_t)a1);
    if ( v4 )
      goto LABEL_8;
  }
  *((_DWORD *)a1 + 56) = v3 + 1;
  result = Mtx_unlock((_Mtx_t)a1);
  if ( result )
  {
    std::_Throw_C_error(result);
LABEL_8:
    std::_Throw_C_error(v4);
LABEL_9:
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  return result;
}
