/*
 * XREFs of MiSelectSystemImageAddress @ 0x14074A350
 * Callers:
 *     MiSelectImageBase @ 0x140605F18 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140748C34 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x14074A39C (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a2, 0LL, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
