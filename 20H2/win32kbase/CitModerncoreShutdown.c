/*
 * XREFs of CitModerncoreShutdown @ 0x1C01F8F70
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009C958 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitModerncoreShutdown()
{
  if ( xmmword_1C024E4A0 )
    CitpLogoff(xmmword_1C024E4A0);
}
