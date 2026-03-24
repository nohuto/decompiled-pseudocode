/*
 * XREFs of KeFindFirstSetLeftGroupAffinity @ 0x1402C20D0
 * Callers:
 *     MiTimeSingleLargePageZero @ 0x1403B0510 (MiTimeSingleLargePageZero.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1406AC708 (KeBuildLogicalProcessorSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanReverse64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
