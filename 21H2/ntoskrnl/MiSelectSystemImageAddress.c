/*
 * XREFs of MiSelectSystemImageAddress @ 0x14075FE58
 * Callers:
 *     MiSelectImageBase @ 0x140714524 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x14075E8AC (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x14075FEA4 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a2, 0LL, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
