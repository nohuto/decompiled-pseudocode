/*
 * XREFs of ExAddPrivateDataToCrashDump @ 0x1405B3780
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14050B9D8 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409AD988 (IopLiveDumpMarkImportantDumpData.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall ExAddPrivateDataToCrashDump(__int64 (__fastcall **a1)(_QWORD, __int64, __int64))
{
  unsigned int v1; // ebx
  unsigned __int64 *v2; // rsi
  unsigned int v3; // edi
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v2 = (unsigned __int64 *)&ExPoolTagTables;
  v3 = 0;
  while ( 1 )
  {
    if ( *v2 )
    {
      v5 = MmAddRangeToCrashDump(a1, *v2, 56 * PoolTrackTableSize);
      if ( v5 < 0 )
      {
        v1 = v5;
        if ( v5 == -1073741789 )
          break;
      }
    }
    ++v3;
    ++v2;
    if ( v3 >= 0x500 )
    {
      v6 = MmAddRangeToCrashDump(a1, ExpSessionPoolTrackTable, 56 * ExpSessionPoolTrackTableSize);
      if ( v6 < 0 )
        return (unsigned int)v6;
      return v1;
    }
  }
  return v1;
}
