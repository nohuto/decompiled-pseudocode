/*
 * XREFs of strtolX @ 0x1800916F0
 * Callers:
 *     atoi @ 0x18008CB90 (atoi.c)
 *     atol @ 0x18008CBC0 (atol.c)
 * Callees:
 *     strtoxlX @ 0x18009149C (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
