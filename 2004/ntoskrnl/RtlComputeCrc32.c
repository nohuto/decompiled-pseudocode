/*
 * XREFs of RtlComputeCrc32 @ 0x140332D30
 * Callers:
 *     SmDecompressBuffer @ 0x140305324 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140307E58 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x1405C28CC (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1405C2954 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1405C2D94 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C3068 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PopBsdUpdateWorker @ 0x1405C7E90 (PopBsdUpdateWorker.c)
 *     PoClearTransitionMarker @ 0x140783274 (PoClearTransitionMarker.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408DE184 (PopUpdateBsdPowerTransitionReferenceTime.c)
 *     SmKmStoreFileWriteHeader @ 0x14092987C (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x140A64D5C (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

ULONG32 __cdecl RtlComputeCrc32(ULONG32 PartialCrc, PVOID Buffer, ULONG Length)
{
  ULONG32 v4; // ecx
  __int64 v5; // r10
  char v6; // al

  v4 = ~PartialCrc;
  if ( Length )
  {
    v5 = Length;
    do
    {
      v6 = *(_BYTE *)Buffer;
      Buffer = (char *)Buffer + 1;
      v4 = (v4 >> 8) ^ *((_DWORD *)RtlCrc32Table + (unsigned __int8)(v6 ^ v4));
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
