/*
 * XREFs of KeFindFirstSetLeftAffinityEx @ 0x14056C170
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405C94E0 (PpmUpdatePlatformIdleVeto.c)
 *     PnpReplacePartitionUnit @ 0x140950E30 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftAffinityEx(unsigned __int16 *a1)
{
  unsigned __int16 v1; // ax
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx

  v1 = *a1;
  do
  {
    if ( (--v1 & 0x8000u) != 0 )
      return 0xFFFFFFFFLL;
    v2 = *(_QWORD *)&a1[4 * v1 + 4];
  }
  while ( !v2 );
  _BitScanReverse64(&v4, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v1 + (unsigned int)v4];
}
