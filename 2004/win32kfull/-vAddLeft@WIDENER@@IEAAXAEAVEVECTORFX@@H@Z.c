/*
 * XREFs of ?vAddLeft@WIDENER@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1C013391C
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C01337D8 (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IEAAXH@Z @ 0x1C02CF3FC (-vAddRoundJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1C0133948 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

void __fastcall WIDENER::vAddLeft(WIDENER *this, struct EVECTORFX *a2)
{
  WIDEPATHOBJ::vAddPoint((WIDENER *)((char *)this + 984), (struct _POINTFIX *)((char *)this + 692), a2, 1);
}
