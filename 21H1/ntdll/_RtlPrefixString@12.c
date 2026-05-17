/*
 * XREFs of _RtlPrefixString@12 @ 0x4B2E0A70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpperChar@4 @ 0x4B2E0B70 (_RtlUpperChar@4.c)
 */

char __stdcall RtlPrefixString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // edx
  char *v4; // esi
  char *v5; // edx
  int v6; // edi
  char v8; // bl
  int v9; // ecx
  char *v10; // [esp+Ch] [ebp-Ch]
  char v11; // [esp+10h] [ebp-8h]
  char v12; // [esp+14h] [ebp-4h]

  v3 = *a1;
  v4 = (char *)*((_DWORD *)a1 + 1);
  if ( *a2 >= v3 )
  {
    v5 = &v4[v3];
    v10 = v5;
    if ( v4 >= v5 )
      return 1;
    if ( a3 )
    {
      v6 = *((_DWORD *)a2 + 1) - (_DWORD)v4;
      while ( 1 )
      {
        v11 = *v4;
        v12 = v4[v6];
        if ( *v4 != v12 )
        {
          v8 = RtlUpperChar(v12);
          if ( (unsigned __int8)RtlUpperChar(v11) != v8 )
            return 0;
          v5 = v10;
        }
        if ( ++v4 >= v5 )
          return 1;
      }
    }
    v9 = *((_DWORD *)a2 + 1) - (_DWORD)v4;
    while ( *v4 == v4[v9] )
    {
      if ( ++v4 >= v5 )
        return 1;
    }
  }
  return 0;
}
