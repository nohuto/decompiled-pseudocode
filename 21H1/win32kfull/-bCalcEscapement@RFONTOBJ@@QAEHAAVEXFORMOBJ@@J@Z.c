/*
 * XREFs of ?bCalcEscapement@RFONTOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x223E01
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 * Callees:
 *     ?bCalcEscapementP@RFONTOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x20906A (-bCalcEscapementP@RFONTOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 */

int __thiscall RFONTOBJ::bCalcEscapement(RFONTOBJ *this, struct EXFORMOBJ *a2, int a3)
{
  if ( a3 == *(_DWORD *)(*(_DWORD *)this + 468) )
    return 1;
  else
    return RFONTOBJ::bCalcEscapementP(this, a2, a3);
}
