/*
 * XREFs of HalpIommuInitInterrupts @ 0x1409A1898
 * Callers:
 *     HalpIommuInitSystem @ 0x1409A16B0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpInterruptSetIdtEntry @ 0x1403A1DEC (HalpInterruptSetIdtEntry.c)
 */

__int64 __fastcall HalpIommuInitInterrupts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !HalpHvIommu )
    HalpInterruptSetIdtEntry(0xCEu, (int)HalpIommuInterruptRoutine, 12, a4, -1LL);
  return 0LL;
}
