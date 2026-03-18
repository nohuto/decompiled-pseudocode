/*
 * XREFs of ?vAddLeft@WIDENER@@IAEXAAVEVECTORFX@@H@Z @ 0x2364C6
 * Callers:
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23659C (-vAddPoint@WIDEPATHOBJ@@QAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 */

void __thiscall WIDENER::vAddLeft(WIDENER *this, struct EVECTORFX *a2, int a3)
{
  WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 912), (struct _POINTFIX *)((char *)this + 676), a2, 1);
}
