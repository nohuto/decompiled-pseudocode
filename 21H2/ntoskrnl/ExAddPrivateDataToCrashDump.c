/*
 * XREFs of ExAddPrivateDataToCrashDump @ 0x14063A4B0
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14055CF88 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140A66EB4 (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140593218 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall ExAddPrivateDataToCrashDump(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v2; // rsi
  unsigned int v3; // edi
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v2 = (__int64 *)&ExPoolTagTables;
  v3 = 0;
  while ( 1 )
  {
    if ( *v2 )
    {
      v5 = MmAddRangeToCrashDump(a1, *v2, 80 * PoolTrackTableSize);
      if ( v5 < 0 )
      {
        v1 = v5;
        if ( v5 == -1073741789 )
          break;
      }
    }
    ++v3;
    ++v2;
    if ( v3 >= 0x800 )
    {
      if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] )
      {
        v6 = MmAddRangeToCrashDump(
               a1,
               *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 896),
               80 * ExpSessionPoolTrackTableSize);
        if ( v6 < 0 )
          return (unsigned int)v6;
      }
      return v1;
    }
  }
  return v1;
}
