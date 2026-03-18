/*
 * XREFs of _InitializeScripts@0 @ 0x292144
 * Callers:
 *     ?vLookupScript@@YGXKPAGK@Z @ 0x89F72 (-vLookupScript@@YGXKPAGK@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?LOADSTRING@@YGHPAXIPAGH@Z @ 0xE3124 (-LOADSTRING@@YGHPAXIPAGH@Z.c)
 */

int __usercall InitializeScripts@<eax>(int a1@<ebx>, unsigned __int16 *a2@<esi>)
{
  int v2; // edi
  unsigned int v4; // ebx
  unsigned int i; // esi
  int v6; // eax
  char *v7; // eax
  char *v8; // edi
  unsigned int j; // esi
  int v10; // eax
  unsigned __int16 *v11; // edx
  struct _CHSET_SCRIPT *v12; // ecx
  struct _CHSET_SCRIPT *v13; // edi
  __int16 v14; // cx
  int v15; // eax
  unsigned __int16 *v16; // [esp-8h] [ebp-20h]
  int v17; // [esp-4h] [ebp-1Ch]
  struct _CHSET_SCRIPT *v18; // [esp+10h] [ebp-8h]
  char *v19; // [esp+14h] [ebp-4h]
  char *v20; // [esp+14h] [ebp-4h]

  v2 = 1;
  if ( !_hModuleWinKernel )
    return 0;
  if ( !cchDest[0] )
  {
    v17 = a1;
    v4 = 0;
    v19 = 0;
    v16 = a2;
    for ( i = 0; i < 0x13; ++i )
    {
      v6 = LOADSTRING(i, 0, 0, v16, v17);
      if ( !v6 )
        break;
      v4 += v6 + 1;
    }
    if ( i == 19 )
    {
      v7 = (char *)PALLOCMEM2(2 * v4, 1819501383, 1);
      v19 = v7;
    }
    else
    {
      v7 = 0;
    }
    cchDest[0] = 0;
    if ( v7 )
    {
      v8 = v19;
      for ( j = 0; j < 0x13; ++j )
      {
        cchDest[2 * j] = (size_t)v8;
        v10 = LOADSTRING(j, v8, v4, v16, v17);
        v11 = (unsigned __int16 *)cchDest[2 * j];
        ++v10;
        v12 = 0;
        v4 -= v10;
        *(&aScripts + 2 * j) = 0;
        v8 += 2 * v10;
        v20 = v8;
        if ( *v11 )
        {
          v13 = 0;
          v14 = *v11;
          do
          {
            if ( v14 == 58 )
              break;
            *(&aScripts + 2 * j) = (struct _CHSET_SCRIPT *)(10 * (_DWORD)v13);
            v15 = *v11++;
            cchDest[2 * j] = (size_t)v11;
            v13 = (struct _CHSET_SCRIPT *)(v15 + 10 * (_DWORD)v13 - 48);
            *(&aScripts + 2 * j) = v13;
            if ( !j )
              ++gdwOffset;
            v14 = *v11;
          }
          while ( *v11 );
          v18 = v13;
          v8 = v20;
          v12 = v18;
        }
        *(&aScripts + 2 * j) = (struct _CHSET_SCRIPT *)((char *)v12 + 1000);
        cchDest[2 * j] = (size_t)(v11 + 1);
        if ( !j )
          ++gdwOffset;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
