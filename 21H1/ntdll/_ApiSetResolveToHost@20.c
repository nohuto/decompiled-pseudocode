/*
 * XREFs of _ApiSetResolveToHost@20 @ 0x4B2D012C
 * Callers:
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _ApiSetQueryApiSetPresence@8 @ 0x4B2E6C90 (_ApiSetQueryApiSetPresence@8.c)
 * Callees:
 *     _ApiSetpSearchForApiSetHost@16 @ 0x4B2CD9A9 (_ApiSetpSearchForApiSetHost@16.c)
 *     _ApiSetpSearchForApiSet@12 @ 0x4B2D03B0 (_ApiSetpSearchForApiSet@12.c)
 */

int __fastcall ApiSetResolveToHost(int a1, unsigned __int16 *a2, int a3, char *a4, int a5)
{
  char v5; // bl
  _DWORD *v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  _WORD *v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned int v16; // [esp+Ch] [ebp-4h]

  v5 = 0;
  *(_DWORD *)a5 = 0;
  *(_DWORD *)(a5 + 4) = 0;
  v16 = *a2;
  if ( v16 >= 8 )
  {
    if ( (v7 = (_DWORD *)*((_DWORD *)a2 + 1), v8 = *v7 & 0xFFDFFFDF, v9 = v7[1] & 0xFFFFFFDF, v8 == 5242945)
      && v9 == 2949193
      || v8 == 5767237 && v9 == 2949204 )
    {
      v10 = (unsigned __int16)v16;
      v11 = (_WORD *)((char *)v7 + (unsigned __int16)v16);
      do
      {
        if ( v10 <= 1 )
          break;
        --v11;
        v10 -= 2;
      }
      while ( *v11 != 45 );
      v12 = (unsigned __int16)v10 >> 1;
      if ( (_WORD)v12 )
      {
        v13 = ApiSetpSearchForApiSet(a1, v12);
        if ( v13 )
        {
          if ( a3 && *(_DWORD *)(v13 + 20) > 1u )
          {
            v14 = ApiSetpSearchForApiSetHost(*(const WCHAR **)(a3 + 4), v13, a1, *(_WORD *)a3 >> 1, a1);
            goto LABEL_14;
          }
          if ( *(_DWORD *)(v13 + 20) )
          {
            v14 = a1 + *(_DWORD *)(v13 + 16);
LABEL_14:
            v5 = 1;
            *(_DWORD *)(a5 + 4) = a1 + *(_DWORD *)(v14 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v14 + 16);
            *(_WORD *)a5 = *(_WORD *)(v14 + 16);
          }
        }
      }
    }
  }
  *a4 = v5;
  return 0;
}
