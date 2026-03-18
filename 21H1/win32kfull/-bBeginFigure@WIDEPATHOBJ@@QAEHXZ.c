/*
 * XREFs of ?bBeginFigure@WIDEPATHOBJ@@QAEHXZ @ 0x234D6E
 * Callers:
 *     ?bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z @ 0x23532D (-bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235895 (-bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z.c)
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@@IAEHXZ @ 0x235295 (-bGrowPath@WIDEPATHOBJ@@IAEHXZ.c)
 *     ?bValid@WIDEPATHOBJ@@QBEHXZ @ 0x235B14 (-bValid@WIDEPATHOBJ@@QBEHXZ.c)
 */

int __thiscall WIDEPATHOBJ::bBeginFigure(WIDEPATHOBJ *this)
{
  WIDEPATHOBJ *v2; // ecx
  int result; // eax

  if ( WIDEPATHOBJ::bValid(this) )
  {
    if ( WIDEPATHOBJ::bGrowPath(v2) )
    {
      result = 1;
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 24) + 8) = 1;
      return result;
    }
    *((_DWORD *)this + 17) = 1;
  }
  return 0;
}
