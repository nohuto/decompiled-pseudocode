/*
 * XREFs of ?vEndFigure@WIDEPATHOBJ@@QAEXXZ @ 0x236BBC
 * Callers:
 *     ?bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z @ 0x23532D (-bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235895 (-bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z.c)
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall WIDEPATHOBJ::vEndFigure(WIDEPATHOBJ *this)
{
  int v1; // eax
  int v2; // edx

  v1 = *(_DWORD *)(*((_DWORD *)this + 2) + 24);
  v2 = (*((_DWORD *)this + 18) - v1 - 16) >> 3;
  *(_DWORD *)(v1 + 8) |= 2u;
  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 24) + 12) = v2;
  *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 16) + 4) = *(_DWORD *)(*((_DWORD *)this + 2) + 24)
                                                           + 8
                                                           * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 24) + 12)
                                                           + 16;
}
