/*
 * XREFs of ?bTurnLeftRandom@@YGHPAVEVECTORFX@@0@Z @ 0x235A9B
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x2356FB (-bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall bTurnLeftRandom(unsigned int *a1, int *a2)
{
  int v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // ecx

  v2 = a2[1];
  v3 = a1[1];
  v4 = *a1;
  if ( ((v3 ^ v2 ^ v4 ^ *a2) & 0x80000000) == 0 )
    return v2 * (__int64)(int)v4 < (int)v3 * (__int64)*a2;
  else
    return (v2 ^ v4) >> 31;
}
