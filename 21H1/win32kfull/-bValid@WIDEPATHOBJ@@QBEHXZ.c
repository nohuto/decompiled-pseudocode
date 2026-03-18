/*
 * XREFs of ?bValid@WIDEPATHOBJ@@QBEHXZ @ 0x235B14
 * Callers:
 *     ?bBeginFigure@WIDEPATHOBJ@@QAEHXZ @ 0x234D6E (-bBeginFigure@WIDEPATHOBJ@@QAEHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x2356FB (-bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 *     ?bValid@WIDENER@@QBEHXZ @ 0x235ADE (-bValid@WIDENER@@QBEHXZ.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x236BF0 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall WIDEPATHOBJ::bValid(WIDEPATHOBJ *this)
{
  BOOL result; // eax

  result = 0;
  if ( *((_DWORD *)this + 2) )
    return *((_DWORD *)this + 17) == 0;
  return result;
}
