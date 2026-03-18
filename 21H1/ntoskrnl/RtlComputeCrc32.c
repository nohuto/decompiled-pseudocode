/*
 * XREFs of RtlComputeCrc32 @ 0x1402F5E90
 * Callers:
 *     SmDecompressBuffer @ 0x1402C3074 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1402C5BA8 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x1405C219C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1405C2224 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1405C2664 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C2938 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopBsdUpdateWorker @ 0x1405C7060 (PopBsdUpdateWorker.c)
 *     PoClearTransitionMarker @ 0x14077A86C (PoClearTransitionMarker.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408DCE14 (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     SmKmStoreFileWriteHeader @ 0x1409285CC (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x140A6537C (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeCrc32(int a1, char *a2, unsigned int a3)
{
  unsigned int v4; // ecx
  __int64 v5; // r10
  char v6; // al

  v4 = ~a1;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = *a2++;
      v4 = (v4 >> 8) ^ *((_DWORD *)RtlCrc32Table + (unsigned __int8)(v6 ^ v4));
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
