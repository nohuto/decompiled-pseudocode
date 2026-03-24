/*
 * XREFs of CmpTransGetTransPtr @ 0x140872D9C
 * Callers:
 *     CmpTransIsTransActive @ 0x1404ECA5C (CmpTransIsTransActive.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpTransGetTransPtr(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFEuLL;
}
