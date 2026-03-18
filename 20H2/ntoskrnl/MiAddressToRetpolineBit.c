/*
 * XREFs of MiAddressToRetpolineBit @ 0x1405424EC
 * Callers:
 *     MiMarkRetpolineBits @ 0x1408D34F4 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAddressToRetpolineBit(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x800000000000LL) >> 16;
}
