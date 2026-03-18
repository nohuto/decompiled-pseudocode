/*
 * XREFs of MiSelectSystemImageAddress @ 0x140758F30
 * Callers:
 *     MiSelectImageBase @ 0x14062B97C (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140757814 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140758F7C (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a2, 0LL, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
