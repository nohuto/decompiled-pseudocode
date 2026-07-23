/*
 * XREFs of CmpTransSilentIgnore @ 0x14035BE20
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

bool CmpTransSilentIgnore()
{
  return BYTE6(NlsMbCodePageTag) != 0;
}
