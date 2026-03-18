/*
 * XREFs of HalReadDmaCounterV3 @ 0x1404C8980
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaControllerReadDmaCounter @ 0x1404CD240 (HalpDmaControllerReadDmaCounter.c)
 */

__int64 __fastcall HalReadDmaCounterV3(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 433) )
    return 0xFFFFFFFFLL;
  else
    return HalpDmaControllerReadDmaCounter(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372));
}
