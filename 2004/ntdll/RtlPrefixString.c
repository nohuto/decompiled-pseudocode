/*
 * XREFs of RtlPrefixString @ 0x180060B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180060C60 (RtlUpperChar.c)
 */

char __fastcall RtlPrefixString(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _BYTE *v4; // rdi
  _BYTE *v5; // rsi
  __int64 v6; // r14
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rdx

  v3 = *a1;
  v4 = (_BYTE *)*((_QWORD *)a1 + 1);
  if ( *(_WORD *)a2 >= (unsigned __int16)v3 )
  {
    v5 = &v4[v3];
    if ( v4 >= &v4[v3] )
      return 1;
    if ( a3 )
    {
      v6 = *(_QWORD *)(a2 + 8) - (_QWORD)v4;
      while ( 1 )
      {
        LOBYTE(a1) = v4[v6];
        if ( *v4 != (_BYTE)a1 )
        {
          v8 = RtlUpperChar(a1);
          LOBYTE(v9) = *v4;
          if ( (unsigned __int8)RtlUpperChar(v9) != v8 )
            break;
        }
        if ( ++v4 >= v5 )
          return 1;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a2 + 8) - (_QWORD)v4;
      while ( *v4 == v4[v10] )
      {
        if ( ++v4 >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
