/*
 * XREFs of _sqrtf2_c@8 @ 0xEF21B
 * Callers:
 *     ?lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z @ 0xC330A (-lGetDefaultWorldHeight@@YGJPAVDCOBJ@@@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB (-vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z.c)
 *     ?vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z @ 0x2252AD (-vGenWidths@@YGXPAJ0AAVEFLOAT@@1JJJJ@Z.c)
 *     ?efWorldLength@STYLER@@IAE?AVEFLOAT@@VEVECTORFX@@@Z @ 0x23605B (-efWorldLength@STYLER@@IAE-AVEFLOAT@@VEVECTORFX@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall sqrtf2_c(_DWORD *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // ecx
  unsigned int v6; // esi
  unsigned __int64 v7; // rt0
  unsigned int v8; // edi
  int v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // ett
  int v12; // eax
  signed int v13; // ebx

  v2 = *a2;
  v3 = a2[1];
  v4 = a1;
  if ( (*a2 & 0x80000000) != 0 )
    return v4;
  if ( *a2 && (v3 - 2) | (v2 - 0x40000000) )
  {
    v5 = -(a2[1] & 1);
    a1[1] = (v3 >> 1) + 1;
    LOBYTE(v5) = 2 - (v3 & 1);
    LODWORD(v7) = 0;
    HIDWORD(v7) = v2;
    v6 = v7 >> v5;
    v8 = v2 >> v5;
    v9 = __PAIR64__(v5, v8) >> 16;
    v10 = v9 + 0x4000;
    LOWORD(v11) = v8;
    HIWORD(v11) = v9;
    LOWORD(v10) = ((unsigned __int16)(v11 / (unsigned __int16)(v9 + 0x4000) + v9 + 0x4000) >> 1) | (__CFADD__((unsigned __int16)(v11 / (unsigned __int16)(v9 + 0x4000)), v9 + 0x4000) << 15);
    LOWORD(v11) = v8;
    HIWORD(v11) = v9;
    LOWORD(v10) = ((unsigned __int16)(v11 / (unsigned __int16)v10 + v10) >> 1) | (__CFADD__(
                                                                                    (unsigned __int16)(v11 / (unsigned __int16)v10),
                                                                                    (_WORD)v10) << 15);
    v10 <<= 16;
    v12 = ((v10 >> 1) + __PAIR64__(v8, v6)) / v10;
    v13 = ((v12 + v10) >> 1) | (__CFADD__(v12, v10) << 31);
    v4 = a1;
    if ( v13 < 0 )
    {
      v13 = (unsigned int)v13 >> 1;
      ++a1[1];
    }
    *a1 = v13;
    return v4;
  }
  *a1 = v2;
  a1[1] = v3;
  return a1;
}
