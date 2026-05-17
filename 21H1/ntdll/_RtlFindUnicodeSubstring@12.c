/*
 * XREFs of _RtlFindUnicodeSubstring@12 @ 0x4B2E61F0
 * Callers:
 *     _RtlpReplaceFirstUnicodeSubstringOfEqualLength@12 @ 0x4B2E61A5 (_RtlpReplaceFirstUnicodeSubstringOfEqualLength@12.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

char *__stdcall RtlFindUnicodeSubstring(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  int v3; // edx
  int v4; // ecx
  char *v5; // edi
  size_t v6; // esi
  char *v7; // ebx
  unsigned __int16 *v8; // eax
  unsigned __int16 *v9; // edx
  int v10; // ecx
  bool v11; // zf
  unsigned __int16 v13; // si
  unsigned __int16 v14; // ax
  const void *v15; // eax
  unsigned __int16 *v16; // [esp+Ch] [ebp-1Ch]
  const void *v17; // [esp+Ch] [ebp-1Ch]
  char *v18; // [esp+10h] [ebp-18h]
  unsigned __int16 v19; // [esp+14h] [ebp-14h]
  unsigned __int16 *v20; // [esp+1Ch] [ebp-Ch]
  int v21; // [esp+20h] [ebp-8h]
  unsigned __int16 *v22; // [esp+24h] [ebp-4h]

  v3 = *a2;
  v4 = *a1;
  if ( (unsigned __int16)v4 >= (unsigned __int16)v3 )
  {
    v5 = (char *)*((_DWORD *)a1 + 1);
    v6 = *a2;
    v7 = &v5[v4 - v3];
    v18 = v7;
    if ( !a3 )
    {
      if ( v5 <= v7 )
      {
        v15 = (const void *)*((_DWORD *)a2 + 1);
        v17 = v15;
        do
        {
          if ( !memcmp(v5, v15, v6) )
            return v5;
          v15 = v17;
          v5 += 2;
        }
        while ( v5 <= v7 );
      }
      return 0;
    }
    v8 = (unsigned __int16 *)*((_DWORD *)a2 + 1);
    v16 = v8;
    v9 = (unsigned __int16 *)((char *)v8 + v3);
    v20 = (unsigned __int16 *)((char *)v8 + v6);
    if ( v5 <= v7 )
    {
      v10 = v5 - (char *)v8;
      v21 = v5 - (char *)v8;
      while ( 1 )
      {
        v22 = v8;
        v11 = v8 == v9;
        if ( v8 >= v9 )
          goto LABEL_9;
        while ( 1 )
        {
          v19 = *(unsigned __int16 *)((char *)v8 + v10);
          if ( v19 != *v8 )
            break;
LABEL_7:
          v22 = ++v8;
          if ( v8 >= v9 )
            goto LABEL_8;
        }
        v13 = NLS_UPCASE(*v8);
        v14 = NLS_UPCASE(v19);
        v9 = v20;
        v11 = v14 == v13;
        v8 = v22;
        if ( v11 )
          break;
LABEL_8:
        v7 = v18;
        v11 = v8 == v9;
        v10 = v21;
LABEL_9:
        if ( v11 )
          return v5;
        v8 = v16;
        v5 += 2;
        v10 += 2;
        v21 = v10;
        if ( v5 > v7 )
          return 0;
      }
      v10 = v21;
      goto LABEL_7;
    }
  }
  return 0;
}
