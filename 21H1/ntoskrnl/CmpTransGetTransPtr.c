/*
 * XREFs of CmpTransGetTransPtr @ 0x14086DEF8
 * Callers:
 *     CmpTransIsTransActive @ 0x1404E72CC (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
