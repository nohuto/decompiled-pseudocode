/*
 * XREFs of MiSelectSystemImageAddress @ 0x140762174
 * Callers:
 *     MiSelectImageBase @ 0x1407092C0 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140761A2C (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x1407621C0 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a2, 0LL, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
