/*
 * XREFs of ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x236568
 * Callers:
 *     ?bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z @ 0x23532D (-bHobbyize@WIDEPENOBJ@@AAEHQAVEVECTORFX@@@Z.c)
 *     ?bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235895 (-bThicken@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z.c)
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@@QAEXAAV1@@Z @ 0x2374F2 (-vReverseConcatenate@WIDEPATHOBJ@@QAEXAAV1@@Z.c)
 * Callees:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x236BF0 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 */

void __thiscall WIDEPATHOBJ::vAddPoint(WIDEPATHOBJ *this, struct _POINTFIX *a2, int a3)
{
  struct _POINTFIX *v3; // esi

  v3 = (struct _POINTFIX *)*((_DWORD *)this + 18);
  if ( (unsigned int)v3 < *((_DWORD *)this + 19) )
  {
    *v3 = *a2;
    *((_DWORD *)this + 18) += 8;
  }
  else
  {
    WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, 0, 0);
  }
}
