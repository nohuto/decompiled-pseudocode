/*
 * XREFs of HalpPciReadIoConfigUlong @ 0x1404CC350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPciReadIoConfigUlong(unsigned int *a1, _DWORD *a2, unsigned __int8 a3)
{
  unsigned __int32 v3; // eax

  *a1 ^= (a3 ^ (unsigned __int8)*a1) & 0xFC;
  __outdword(0xCF8u, *a1);
  v3 = __indword(0xCFCu);
  *a2 = v3;
  return 4LL;
}
