/*
 * XREFs of ?GetLinkedRfontOnIndex@ESTROBJ@@QAEPAVRFONT@@JAAVRFONTOBJ@@@Z @ 0x223A80
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x223E25 (-bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@JJPAX@Z @ 0x225464 (-vInitSimple@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@JJPAX@Z.c)
 * Callees:
 *     <none>
 */

struct RFONT *__thiscall ESTROBJ::GetLinkedRfontOnIndex(ESTROBJ *this, int a2, struct RFONTOBJ *a3)
{
  int v3; // esi
  _DWORD *v4; // ecx

  if ( (*((_DWORD *)this + 48) & 0x1400) == 0 )
    return *(struct RFONT **)a3;
  v3 = *(_DWORD *)(*((_DWORD *)this + 45) + 4 * a2);
  v4 = *(_DWORD **)a3;
  if ( v3 )
  {
    switch ( v3 )
    {
      case 1:
        return (struct RFONT *)v4[179];
      case 2:
        return (struct RFONT *)v4[180];
      case 3:
        return (struct RFONT *)v4[181];
      default:
        return *(struct RFONT **)(v4[182] + 4 * v3 - 16);
    }
  }
  return (struct RFONT *)v4;
}
