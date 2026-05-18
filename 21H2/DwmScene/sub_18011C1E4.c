/*
 * XREFs of sub_18011C1E4 @ 0x18011C1E4
 * Callers:
 *     sub_18011C1DC @ 0x18011C1DC (sub_18011C1DC.c)
 * Callees:
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x18012542C (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18011C1E4(char *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int result; // eax

  v2 = Mtx_lock((_Mtx_t)a1);
  if ( v2 )
  {
LABEL_11:
    std::_Throw_C_error(v2);
LABEL_12:
    std::_Throw_C_error(v3);
    goto LABEL_13;
  }
  while ( a1[228] )
  {
    v3 = Cnd_wait((_Cnd_t)(a1 + 152), (_Mtx_t)a1);
    if ( v3 )
      goto LABEL_12;
  }
  a1[228] = 1;
  while ( *((_DWORD *)a1 + 56) )
  {
    v4 = Cnd_wait((_Cnd_t)(a1 + 80), (_Mtx_t)a1);
    if ( v4 )
    {
      std::_Throw_C_error(v4);
      goto LABEL_11;
    }
  }
  result = Mtx_unlock((_Mtx_t)a1);
  if ( result )
  {
LABEL_13:
    std::_Throw_C_error(result);
    JUMPOUT(0x18011C286LL);
  }
  return result;
}
