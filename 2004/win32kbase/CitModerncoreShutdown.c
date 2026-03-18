/*
 * XREFs of CitModerncoreShutdown @ 0x1C01FA8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0034FE0 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( xmmword_1C02504A0 )
    CitpLogoff(xmmword_1C02504A0);
}
