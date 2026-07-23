/*
 * XREFs of CmpTransGetTransPtr @ 0x140872EFC
 * Callers:
 *     CmpTransIsTransActive @ 0x1404ECC9C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
