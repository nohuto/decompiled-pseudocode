/*
 * XREFs of CitUserChange @ 0x1C009C920
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009C958 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( xmmword_1C024E4A0 && *((_QWORD *)xmmword_1C024E4A0 + 12) && *((_QWORD *)xmmword_1C024E4A0 + 13) != a1 )
    CitpLogoff(xmmword_1C024E4A0);
}
