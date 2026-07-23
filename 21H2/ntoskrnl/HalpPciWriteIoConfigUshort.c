/*
 * XREFs of HalpPciWriteIoConfigUshort @ 0x1404CC3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciWriteIoConfigUshort(unsigned int *a1, unsigned __int16 *a2, unsigned __int8 a3)
{
  *a1 ^= (a3 ^ (unsigned __int8)*a1) & 0xFC;
  __outdword(0xCF8u, *a1);
  __outword((a3 & 3) + 3324, *a2);
  return 2LL;
}
