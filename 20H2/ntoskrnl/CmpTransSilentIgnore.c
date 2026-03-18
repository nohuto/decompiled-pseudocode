/*
 * XREFs of CmpTransSilentIgnore @ 0x140227220
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
