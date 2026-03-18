/*
 * XREFs of CmpTransGetTransPtr @ 0x1409196DC
 * Callers:
 *     CmpTransIsTransActive @ 0x14053F16C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
