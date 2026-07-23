/*
 * XREFs of HalpReserveHalPtes @ 0x140A65880
 * Callers:
 *     HalpWheaInitDiscard @ 0x140A64B9C (HalpWheaInitDiscard.c)
 * Callees:
 *     HalpMmGetPteAddressSafe @ 0x1403BBC70 (HalpMmGetPteAddressSafe.c)
 */

unsigned __int64 HalpReserveHalPtes()
{
  unsigned __int64 v0; // rbx
  int v1; // edi
  _BYTE *PteAddressSafe; // rax

  v0 = HalpHeapEnd;
  v1 = 0;
  while ( 1 )
  {
    v0 -= 4096LL;
    PteAddressSafe = (_BYTE *)HalpMmGetPteAddressSafe(v0);
    if ( !PteAddressSafe || (*PteAddressSafe & 1) != 0 )
      break;
    if ( ++v1 )
    {
      HalpHeapEnd = v0;
      return v0;
    }
  }
  return 0LL;
}
