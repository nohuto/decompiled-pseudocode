/*
 * XREFs of InitializeScripts @ 0x1C0394A4C
 * Callers:
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C000FDCC (-vLookupScript@@YAXKPEAGK@Z.c)
 *     cjCopyFontDataW @ 0x1C009D550 (cjCopyFontDataW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C01160E4 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 */

__int64 InitializeScripts()
{
  unsigned int v0; // ebx
  int v2; // r14d
  unsigned __int16 *v3; // r15
  unsigned int i; // edi
  int v5; // eax
  unsigned int v6; // esi
  __int64 *v7; // rdi
  int v8; // eax
  _WORD *v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax

  v0 = 1;
  if ( !hModuleWinKernel )
    return 0LL;
  if ( !qword_1C033A8B8 )
  {
    v2 = 0;
    v3 = 0LL;
    for ( i = 0; i < 0x13; ++i )
    {
      v5 = LOADSTRING(hModuleWinKernel, i, 0LL, 0);
      if ( !v5 )
        break;
      v2 += v5 + 1;
    }
    if ( i == 19 )
      v3 = (unsigned __int16 *)PALLOCMEM2((unsigned int)(2 * v2), 1819501383LL, 1);
    qword_1C033A8B8 = 0LL;
    if ( v3 )
    {
      v6 = 0;
      v7 = &qword_1C033A8B8;
      do
      {
        *v7 = (__int64)v3;
        v8 = LOADSTRING(hModuleWinKernel, v6, v3, v2);
        v9 = (_WORD *)*v7;
        *((_DWORD *)v7 - 2) = 0;
        v2 -= v8 + 1;
        v10 = 0;
        v3 += v8 + 1;
        while ( *v9 && *v9 != 58 )
        {
          v11 = 10 * v10;
          *((_DWORD *)v7 - 2) = v11;
          v12 = (unsigned __int16)*v9++;
          v10 = v12 + v11 - 48;
          *v7 = (__int64)v9;
          *((_DWORD *)v7 - 2) = v10;
          if ( !v6 )
            ++gdwOffset;
        }
        *((_DWORD *)v7 - 2) = v10 + 1000;
        *v7 = (__int64)(v9 + 1);
        if ( !v6 )
          ++gdwOffset;
        ++v6;
        v7 += 2;
      }
      while ( v6 < 0x13 );
    }
    else
    {
      return 0;
    }
  }
  return v0;
}
