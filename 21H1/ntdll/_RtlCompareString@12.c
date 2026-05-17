/*
 * XREFs of _RtlCompareString@12 @ 0x4B34E130
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpperChar@4 @ 0x4B2E0B70 (_RtlUpperChar@4.c)
 */

unsigned int __stdcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  char *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v6; // ebx
  int v7; // ebx
  int v8; // eax
  unsigned __int8 v9; // cl
  int v11; // eax
  unsigned __int8 v12; // dl
  unsigned int v13; // [esp+Ch] [ebp-14h]
  char *v14; // [esp+10h] [ebp-10h]
  char v15; // [esp+17h] [ebp-9h]
  char v16; // [esp+1Fh] [ebp-1h]

  v3 = (char *)*((_DWORD *)a1 + 1);
  v4 = *a1;
  v5 = *a2;
  v13 = v5;
  if ( v4 <= v5 )
    v5 = *a1;
  v6 = &v3[v5];
  v14 = &v3[v5];
  if ( v3 >= &v3[v5] )
    return v4 - v13;
  if ( a3 )
  {
    v7 = *((_DWORD *)a2 + 1) - (_DWORD)v3;
    while ( 1 )
    {
      v15 = v3[v7];
      if ( *v3 != v15 )
      {
        v16 = RtlUpperChar(*v3);
        LOBYTE(v8) = RtlUpperChar(v15);
        v9 = v16;
        if ( v16 != (_BYTE)v8 )
          break;
      }
      if ( ++v3 >= v14 )
        return v4 - v13;
    }
    v8 = (unsigned __int8)v8;
  }
  else
  {
    v11 = *((_DWORD *)a2 + 1) - (_DWORD)v3;
    while ( 1 )
    {
      v9 = *v3;
      v12 = v3[v11];
      if ( *v3 != v12 )
        break;
      if ( ++v3 >= v6 )
        return v4 - v13;
    }
    v8 = v12;
  }
  return v9 - v8;
}
