/*
 * XREFs of _ApiSetResolveToHost@20 @ 0xF8F9A
 * Callers:
 *     ?ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z @ 0xF8DBA (-ResolveApiSetHost@@YGJPAU_Win32kApiSet@@PAX@Z.c)
 * Callees:
 *     _ApiSetpSearchForApiSet@12 @ 0xF9050 (_ApiSetpSearchForApiSet@12.c)
 */

int __fastcall ApiSetResolveToHost(int a1, unsigned __int16 *a2, int a3, char *a4, int a5)
{
  char v5; // bl
  unsigned int v6; // edi
  _DWORD *v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  _WORD *v11; // ecx
  __int16 v12; // ax
  int v13; // eax
  int v14; // ecx

  v5 = 0;
  *(_DWORD *)a5 = 0;
  *(_DWORD *)(a5 + 4) = 0;
  v6 = *a2;
  if ( v6 >= 8 )
  {
    if ( (v7 = (_DWORD *)*((_DWORD *)a2 + 1), v8 = *v7 & 0xFFDFFFDF, v9 = v7[1] & 0xFFFFFFDF, v8 == 5242945)
      && v9 == 2949193
      || v8 == 5767237 && v9 == 2949204 )
    {
      v10 = v6;
      v11 = (_WORD *)((char *)v7 + v6);
      do
      {
        if ( v10 <= 1 )
          break;
        --v11;
        v10 -= 2;
      }
      while ( *v11 != 45 );
      v12 = (unsigned __int16)v10 >> 1;
      if ( v12 )
      {
        v13 = ApiSetpSearchForApiSet(v12);
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 20) )
          {
            v14 = *(_DWORD *)(v13 + 16);
            v5 = 1;
            *(_DWORD *)(a5 + 4) = a1 + *(_DWORD *)(v14 + a1 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v14 + a1 + 16);
            *(_WORD *)a5 = *(_WORD *)(v14 + a1 + 16);
          }
        }
      }
    }
  }
  *a4 = v5;
  return 0;
}
