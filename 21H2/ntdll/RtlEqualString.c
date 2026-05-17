/*
 * XREFs of RtlEqualString @ 0x180061F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180062260 (RtlUpperChar.c)
 */

char __fastcall RtlEqualString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _BYTE *v5; // rdi
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r14
  char v9; // al
  __int64 v10; // rcx

  v3 = *a1;
  if ( (_WORD)v3 != *(_WORD *)a2 )
    return 0;
  v5 = (_BYTE *)*((_QWORD *)a1 + 1);
  v6 = &v5[v3];
  if ( v5 < &v5[v3] )
  {
    if ( a3 )
    {
      v8 = *(_QWORD *)(a2 + 8) - (_QWORD)v5;
      while ( 1 )
      {
        if ( *v5 != v5[v8] )
        {
          v9 = ((__int64 (*)(void))RtlUpperChar)();
          LOBYTE(v10) = *v5;
          if ( (unsigned __int8)RtlUpperChar(v10) != v9 )
            break;
        }
        if ( ++v5 >= v6 )
          return 1;
      }
    }
    else
    {
      v7 = *(_QWORD *)(a2 + 8) - (_QWORD)v5;
      while ( *v5 == v5[v7] )
      {
        if ( ++v5 >= v6 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
