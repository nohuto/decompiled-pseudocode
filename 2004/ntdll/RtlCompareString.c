/*
 * XREFs of RtlCompareString @ 0x18008B090
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180060C60 (RtlUpperChar.c)
 */

__int64 __fastcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r12d
  __int64 v5; // rbp
  char *v6; // rbx
  char *v7; // rbp
  __int64 v8; // rsi
  char v9; // r14
  int v11; // r15d
  unsigned __int8 v12; // al
  __int64 v14; // rax
  int v15; // ecx
  int v16; // edx

  v3 = *a1;
  v4 = *a2;
  v5 = *a1;
  v6 = (char *)*((_QWORD *)a1 + 1);
  if ( v3 > v4 )
    v5 = *a2;
  v7 = &v6[v5];
  if ( v6 >= v7 )
    return v3 - v4;
  if ( a3 )
  {
    v8 = *((_QWORD *)a2 + 1) - (_QWORD)v6;
    while ( 1 )
    {
      v9 = v6[v8];
      if ( *v6 != v9 )
      {
        v11 = (unsigned __int8)RtlUpperChar(*v6);
        v12 = RtlUpperChar(v9);
        if ( (_BYTE)v11 != v12 )
          break;
      }
      if ( ++v6 >= v7 )
        return v3 - v4;
    }
    return (unsigned int)(v11 - v12);
  }
  else
  {
    v14 = *((_QWORD *)a2 + 1) - (_QWORD)v6;
    while ( 1 )
    {
      v15 = (unsigned __int8)*v6;
      v16 = (unsigned __int8)v6[v14];
      if ( (_BYTE)v15 != (_BYTE)v16 )
        break;
      if ( ++v6 >= v7 )
        return v3 - v4;
    }
    return (unsigned int)(v15 - v16);
  }
}
