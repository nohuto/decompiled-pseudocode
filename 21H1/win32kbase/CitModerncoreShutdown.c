/*
 * XREFs of CitModerncoreShutdown @ 0x1C02002B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0023C50 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( xmmword_1C0256430 )
    CitpLogoff(xmmword_1C0256430);
}
