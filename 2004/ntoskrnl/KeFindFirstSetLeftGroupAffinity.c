/*
 * XREFs of KeFindFirstSetLeftGroupAffinity @ 0x140350180
 * Callers:
 *     MiTimeSingleLargePageZero @ 0x1403A7C20 (MiTimeSingleLargePageZero.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1406FBD48 (KeBuildLogicalProcessorSystemInformation.c)
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
