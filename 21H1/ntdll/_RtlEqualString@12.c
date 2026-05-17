/*
 * XREFs of _RtlEqualString@12 @ 0x4B2A93F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUpperChar@4 @ 0x4B2E0B70 (_RtlUpperChar@4.c)
 */

char __stdcall RtlEqualString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  int v3; // edx
  char *v5; // esi
  char *v6; // edx
  int v7; // edi
  char v8; // bl
  int v9; // ecx
  char *v10; // [esp+Ch] [ebp-Ch]
  char v11; // [esp+10h] [ebp-8h]
  char v12; // [esp+14h] [ebp-4h]

  v3 = *a1;
  if ( v3 != *a2 )
    return 0;
  v5 = (char *)*((_DWORD *)a1 + 1);
  v6 = &v5[v3];
  v10 = v6;
  if ( v5 < v6 )
  {
    if ( a3 )
    {
      v7 = *((_DWORD *)a2 + 1) - (_DWORD)v5;
      while ( 1 )
      {
        v11 = *v5;
        v12 = v5[v7];
        if ( *v5 != v12 )
        {
          v8 = RtlUpperChar(v12);
          if ( (unsigned __int8)RtlUpperChar(v11) != v8 )
            return 0;
          v6 = v10;
        }
        if ( ++v5 >= v6 )
          return 1;
      }
    }
    v9 = *((_DWORD *)a2 + 1) - (_DWORD)v5;
    while ( *v5 == v5[v9] )
    {
      if ( ++v5 >= v6 )
        return 1;
    }
    return 0;
  }
  return 1;
}
