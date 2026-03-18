/*
 * XREFs of MiAddressToRetpolineBit @ 0x14053EB1C
 * Callers:
 *     MiMarkRetpolineBits @ 0x1408CD6B4 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAddressToRetpolineBit(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x800000000000LL) >> 16;
}
