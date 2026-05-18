/*
 * XREFs of sub_18011C374 @ 0x18011C374
 * Callers:
 *     sub_18011C36C @ 0x18011C36C (sub_18011C36C.c)
 * Callees:
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x180125386 (_Cnd_signal.c)
 *     _Cnd_broadcast @ 0x180125432 (_Cnd_broadcast.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18011C374(char *a1)
{
  int v2; // eax
  int v3; // edi
  char v4; // si
  int result; // eax

  v2 = Mtx_lock((_Mtx_t)a1);
  if ( v2 )
    goto LABEL_12;
  v3 = --*((_DWORD *)a1 + 56);
  v4 = a1[228];
  result = Mtx_unlock((_Mtx_t)a1);
  if ( result )
  {
LABEL_13:
    std::_Throw_C_error(result);
    JUMPOUT(0x18011C40ALL);
  }
  if ( v4 )
  {
    if ( v3 )
      return result;
    result = Cnd_signal((_Cnd_t)(a1 + 80));
    if ( !result )
      return result;
    goto LABEL_11;
  }
  if ( v3 == -2 )
  {
    result = Cnd_broadcast((_Cnd_t)(a1 + 152));
    if ( result )
    {
      std::_Throw_C_error(result);
LABEL_11:
      std::_Throw_C_error(result);
LABEL_12:
      std::_Throw_C_error(v2);
      goto LABEL_13;
    }
  }
  return result;
}
