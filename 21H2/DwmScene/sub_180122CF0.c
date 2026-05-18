/*
 * XREFs of sub_180122CF0 @ 0x180122CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801215D0 @ 0x1801215D0 (sub_1801215D0.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180122CF0(__int64 a1, int a2)
{
  int v4; // eax
  __int64 **v5; // rcx
  __int64 *v6; // r8
  __int64 *v7; // rax
  int result; // eax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v4 )
  {
LABEL_14:
    std::_Throw_C_error(v4);
    JUMPOUT(0x180122D83LL);
  }
  v5 = (__int64 **)(a1 + 96);
  v6 = *(__int64 **)(a1 + 96);
  v7 = (__int64 *)v6[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_9;
  do
  {
    if ( *((_DWORD *)v7 + 8) >= a2 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == *v5 || a2 < *((_DWORD *)v6 + 8) )
LABEL_9:
    v6 = *v5;
  if ( v6 != *v5 )
    sub_1801215D0(v5, v9, v6);
  result = Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_14;
  }
  return result;
}
