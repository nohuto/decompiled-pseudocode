/*
 * XREFs of LdrpFindDelayloadedMethodInDescriptor @ 0x1800CEB44
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CE990 (LdrQueryOptionalDelayLoadedAPI.c)
 *     LdrpFindDelayloadedMethod @ 0x1800CEA98 (LdrpFindDelayloadedMethod.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LdrpFindDelayloadedMethodInDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int8 *v12; // rcx
  __int64 v13; // r11
  int v14; // r9d
  int v15; // r8d

  v4 = *(unsigned int *)(a2 + 16);
  v5 = (_QWORD *)(a1 + *(unsigned int *)(a2 + 12));
  v6 = 0LL;
  v7 = a1 + v4;
  v9 = 0;
  if ( *v5 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 * 8 + v7);
      if ( v11 >= 0 )
      {
        v12 = (unsigned __int8 *)(a1 + v11 + 2);
        v13 = a3 - (_QWORD)v12;
        do
        {
          v14 = v12[v13];
          v15 = *v12 - v14;
          if ( v15 )
            break;
          ++v12;
        }
        while ( v14 );
        if ( !v15 )
          break;
      }
      v10 = (unsigned int)++v9;
      if ( !v5[v10] )
        return (_QWORD *)v6;
    }
    return &v5[v10];
  }
  return (_QWORD *)v6;
}
