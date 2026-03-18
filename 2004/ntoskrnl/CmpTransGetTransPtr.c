/*
 * XREFs of CmpTransGetTransPtr @ 0x14086F9B8
 * Callers:
 *     CmpTransIsTransActive @ 0x1404E78FC (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
