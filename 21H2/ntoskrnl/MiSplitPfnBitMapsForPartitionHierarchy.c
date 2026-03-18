/*
 * XREFs of MiSplitPfnBitMapsForPartitionHierarchy @ 0x1405BF6B4
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1405BCBC4 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitPfnBitMaps @ 0x14082AFE0 (MiSplitPfnBitMaps.c)
 */

__int64 __fastcall MiSplitPfnBitMapsForPartitionHierarchy(ULONG_PTR *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = MiSplitPfnBitMaps();
    if ( !(_DWORD)result )
      break;
    if ( a1 == &MiSystemPartition )
      return 1LL;
    a1 = **(ULONG_PTR ***)(a1[22] + 56);
  }
  return result;
}
