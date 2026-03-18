/*
 * XREFs of CitUserChange @ 0x1C0034ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0034FE0 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C02504A0 && *((_QWORD *)xmmword_1C02504A0 + 12) && *((_QWORD *)xmmword_1C02504A0 + 13) != a1 )
    CitpLogoff(xmmword_1C02504A0);
}
