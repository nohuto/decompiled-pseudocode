/*
 * XREFs of ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB
 * Callers:
 *     ??0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234B5B (--0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@@QAEHXZ @ 0x234D6E (-bBeginFigure@WIDEPATHOBJ@@QAEHXZ.c)
 *     ?bValid@WIDENER@@QBEHXZ @ 0x235ADE (-bValid@WIDENER@@QBEHXZ.c)
 *     ?vAddEndCap@WIDENER@@IAEXXZ @ 0x2361D5 (-vAddEndCap@WIDENER@@IAEXXZ.c)
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddStartCap@WIDENER@@IAEXXZ @ 0x2368E0 (-vAddStartCap@WIDENER@@IAEXXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QAEXXZ @ 0x236BBC (-vEndFigure@WIDEPATHOBJ@@QAEXXZ.c)
 *     ?vNextStyleEvent@STYLER@@QAEXXZ @ 0x23710F (-vNextStyleEvent@STYLER@@QAEXXZ.c)
 *     ?vPrependBeforeFigure@WIDEPATHOBJ@@QAEXXZ @ 0x2373A5 (-vPrependBeforeFigure@WIDEPATHOBJ@@QAEXXZ.c)
 *     ?vPrependBeforeSubpath@WIDEPATHOBJ@@QAEXXZ @ 0x2373F3 (-vPrependBeforeSubpath@WIDEPATHOBJ@@QAEXXZ.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QAEXAAV1@@Z @ 0x2374F2 (-vReverseConcatenate@WIDEPATHOBJ@@QAEXAAV1@@Z.c)
 */

BOOL __thiscall WIDENER::bWiden(WIDENER *this)
{
  WIDEPATHOBJ *v2; // esi
  WIDEPATHOBJ *v3; // ecx

  while ( 2 )
  {
    STYLER::vNextStyleEvent(this);
    switch ( *((_DWORD *)this + 168) )
    {
      case 0:
        if ( !WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 912))
          || !WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 996)) )
        {
          return 0;
        }
        *((_DWORD *)this + 6) &= ~8u;
        *((_DWORD *)this + 269) = *(_DWORD *)(*((_DWORD *)this + 251) + 24);
        continue;
      case 1:
      case 5:
        WIDENER::vAddEndCap(this);
        WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 912));
        if ( !WIDENER::bValid(this) )
          return 0;
        WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 996), (WIDENER *)((char *)this + 912));
        WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 996));
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 251) + 24) + 8) |= 8u;
        *((_DWORD *)this + 6) |= 8u;
        continue;
      case 2:
        WIDENER::vAddJoin(this, 0);
        WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 912));
        v2 = (WIDENER *)((char *)this + 996);
        v3 = (WIDENER *)((char *)this + 996);
        if ( (*((_BYTE *)this + 24) & 8) == 0 )
        {
          WIDEPATHOBJ::vEndFigure(v3);
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 251) + 24) + 8) |= 8u;
          if ( !WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 996)) )
            return 0;
          WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 996), (WIDENER *)((char *)this + 912));
LABEL_21:
          WIDEPATHOBJ::vEndFigure(v2);
LABEL_24:
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 251) + 24) + 8) |= 8u;
          continue;
        }
        WIDEPATHOBJ::vEndFigure(v3);
        if ( WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 996)) )
        {
          WIDEPATHOBJ::vReverseConcatenate((WIDENER *)((char *)this + 996), (WIDENER *)((char *)this + 912));
          WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 996));
          WIDEPATHOBJ::vPrependBeforeSubpath((WIDENER *)((char *)this + 996));
          WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 996));
          goto LABEL_24;
        }
        return 0;
      case 3:
        WIDENER::vAddJoin(this, 0);
        continue;
      case 4:
        WIDENER::vAddJoin(this, 1);
        continue;
      case 6:
        if ( !WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 912))
          || !WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 996)) )
        {
          return 0;
        }
        WIDENER::vAddStartCap(this);
        continue;
      case 7:
        if ( *((_DWORD *)this + 271) )
          continue;
        v2 = (WIDENER *)((char *)this + 996);
        if ( !WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 996)) )
          return 0;
        WIDENER::vAddStartCap(this);
        WIDENER::vAddEndCap(this);
        goto LABEL_21;
      case 8:
        if ( !WIDEPATHOBJ::bBeginFigure((WIDENER *)((char *)this + 996)) )
          return 0;
        WIDENER::vAddStartCap(this);
        WIDEPATHOBJ::vEndFigure((WIDENER *)((char *)this + 996));
        WIDEPATHOBJ::vPrependBeforeFigure((WIDENER *)((char *)this + 996));
        continue;
      case 9:
        return WIDENER::bValid(this);
      default:
        continue;
    }
  }
}
