/*
 * XREFs of HalpPciWriteIoConfigUlong @ 0x1404CC3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciWriteIoConfigUlong(unsigned int *a1, unsigned int *a2, unsigned __int8 a3)
{
  *a1 ^= (a3 ^ (unsigned __int8)*a1) & 0xFC;
  __outdword(0xCF8u, *a1);
  __outdword(0xCFCu, *a2);
  return 4LL;
}
