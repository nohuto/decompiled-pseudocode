/*
 * XREFs of CmpTransSilentIgnore @ 0x140205F80
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
