/*
 * XREFs of CmpTransSilentIgnore @ 0x14025EEA0
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return CmpMiniNTBoot != 0;
}
