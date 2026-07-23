/*
 * XREFs of HalpPciReadIoConfigUchar @ 0x1404CC310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciReadIoConfigUchar(unsigned int *a1, _BYTE *a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // al

  *a1 ^= (a3 ^ (unsigned __int8)*a1) & 0xFC;
  __outdword(0xCF8u, *a1);
  v3 = __inbyte((a3 & 3) + 3324);
  *a2 = v3;
  return 1LL;
}
