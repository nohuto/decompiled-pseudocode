/*
 * XREFs of HalpReserveHalPtes @ 0x140AF9C84
 * Callers:
 *     HalpWheaInitDiscard @ 0x140AF9508 (HalpWheaInitDiscard.c)
 * Callees:
 *     HalpMmGetPteAddressSafe @ 0x1403BF580 (HalpMmGetPteAddressSafe.c)
 */

__int64 HalpReserveHalPtes()
{
  __int64 v0; // rbx
  _BYTE *PteAddressSafe; // rax

  v0 = HalpHeapEnd - 4096;
  PteAddressSafe = (_BYTE *)HalpMmGetPteAddressSafe(HalpHeapEnd - 4096);
  if ( !PteAddressSafe || (*PteAddressSafe & 1) != 0 )
    return 0LL;
  HalpHeapEnd = v0;
  return v0;
}
