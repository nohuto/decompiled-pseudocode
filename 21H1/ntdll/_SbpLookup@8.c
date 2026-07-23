/*
 * XREFs of _SbpLookup@8 @ 0x4B385EE1
 * Callers:
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 * Callees:
 *     __strnicmp @ 0x4B2F74A0 (__strnicmp.c)
 */

int __fastcall SbpLookup(int a1, const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v4; // eax
  int v5; // edi
  unsigned int v6; // esi
  int v7; // edi
  char *v9; // eax
  unsigned int v10; // ecx
  char *v11; // ebx
  _DWORD *v12; // ecx
  unsigned int v13; // edx
  const unsigned __int16 **v14; // edi
  int v15; // ecx
  size_t v16; // [esp-4h] [ebp-1Ch]
  char *v17; // [esp+Ch] [ebp-Ch]
  unsigned int v20; // [esp+14h] [ebp-4h]

  v2 = 0;
  v3 = a1 + *(_DWORD *)(a1 + 60);
  v4 = *(unsigned __int16 *)(v3 + 20);
  v5 = v3 + 24;
  v6 = *(unsigned __int16 *)(v3 + 6);
  v7 = v4 + v5;
  if ( v6 )
  {
    while ( 1 )
    {
      LODWORD(v16) = 8;
      if ( !_strnicmp(".sb_data", (const char *)v7, v16) )
        break;
      ++v2;
      v7 += 40;
      if ( v2 >= v6 )
        return 0;
    }
    v9 = (char *)(a1 + *(_DWORD *)(v7 + 12));
    v10 = *(_DWORD *)(v7 + 16);
    if ( *(_DWORD *)(v7 + 8) <= v10 )
      v10 = *(_DWORD *)(v7 + 8);
    v11 = &v9[v10];
    v17 = &v9[v10];
    while ( v9 < v11 )
    {
      if ( *(_DWORD *)v9 == 1165184107 )
      {
        v12 = (_DWORD *)*((_DWORD *)v9 + 3);
        if ( v12 )
        {
          v13 = 0;
          v20 = *v12;
          if ( *v12 )
          {
            v14 = (const unsigned __int16 **)(v12 + 1);
            while ( 1 )
            {
              v15 = wcscmp(a2, *v14);
              if ( v15 )
                v15 = v15 < 0 ? -1 : 1;
              if ( !v15 )
                return *(_DWORD *)(*((_DWORD *)v9 + 3) + 8 * v13 + 8);
              ++v13;
              v14 += 2;
              if ( v13 >= v20 )
              {
                v11 = v17;
                break;
              }
            }
          }
        }
      }
      v9 += 24;
    }
  }
  return 0;
}
