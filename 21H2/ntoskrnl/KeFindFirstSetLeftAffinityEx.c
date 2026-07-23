/*
 * XREFs of KeFindFirstSetLeftAffinityEx @ 0x140513790
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140568470 (PpmUpdatePlatformIdleVeto.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftAffinityEx(__int16 *a1)
{
  __int16 v1; // dx
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx

  v1 = *a1;
  do
  {
    if ( --v1 < 0 )
      return 0xFFFFFFFFLL;
    v2 = *(_QWORD *)&a1[4 * v1 + 4];
  }
  while ( !v2 );
  _BitScanReverse64(&v4, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[(unsigned int)(v4 + (v1 << 6))];
}
