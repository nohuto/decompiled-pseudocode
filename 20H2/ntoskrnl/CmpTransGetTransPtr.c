/*
 * XREFs of CmpTransGetTransPtr @ 0x140875508
 * Callers:
 *     CmpTransIsTransActive @ 0x1404EB18C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
