/*
 * XREFs of CitUserChange @ 0x1C0023B40
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0023C50 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C0256430 && *((_QWORD *)xmmword_1C0256430 + 12) && *((_QWORD *)xmmword_1C0256430 + 13) != a1 )
    CitpLogoff(xmmword_1C0256430);
}
