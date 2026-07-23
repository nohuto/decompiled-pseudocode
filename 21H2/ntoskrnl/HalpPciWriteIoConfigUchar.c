/*
 * XREFs of HalpPciWriteIoConfigUchar @ 0x1404CC380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciWriteIoConfigUchar(unsigned int *a1, unsigned __int8 *a2, unsigned __int8 a3)
{
  *a1 ^= (a3 ^ (unsigned __int8)*a1) & 0xFC;
  __outdword(0xCF8u, *a1);
  __outbyte((a3 & 3) + 3324, *a2);
  return 1LL;
}
