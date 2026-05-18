/*
 * XREFs of sub_1800DCBBC @ 0x1800DCBBC
 * Callers:
 *     sub_1800DCEBC @ 0x1800DCEBC (sub_1800DCEBC.c)
 * Callees:
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_1800DCBBC(__int64 a1, unsigned __int64 a2)
{
  int v4; // eax
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 *v7; // rax
  int v8; // eax

  v4 = Mtx_lock((_Mtx_t)(a1 + 104));
  if ( v4 )
  {
LABEL_15:
    std::_Throw_C_error(v4);
    JUMPOUT(0x1800DCC50LL);
  }
  v5 = *(__int64 **)(a1 + 200);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_9;
  do
  {
    if ( v7[4] >= a2 )
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
  if ( v6 == v5 || a2 < v6[4] )
LABEL_9:
    v6 = *(__int64 **)(a1 + 200);
  if ( v6 != v5 )
    a2 = v6[5];
  v8 = Mtx_unlock((_Mtx_t)(a1 + 104));
  if ( v8 )
  {
    std::_Throw_C_error(v8);
    goto LABEL_15;
  }
  return a2;
}
