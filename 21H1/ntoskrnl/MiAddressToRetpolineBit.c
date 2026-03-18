/*
 * XREFs of MiAddressToRetpolineBit @ 0x14053E4CC
 * Callers:
 *     MiMarkRetpolineBits @ 0x1408CC364 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAddressToRetpolineBit(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x800000000000LL) >> 16;
}
