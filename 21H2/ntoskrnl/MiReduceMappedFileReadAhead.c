/*
 * XREFs of MiReduceMappedFileReadAhead @ 0x1402C90CC
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14023DDD0 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     RtlClearBits @ 0x140206E00 (RtlClearBits.c)
 *     RtlFindLastBackwardRunClear @ 0x14026A640 (RtlFindLastBackwardRunClear.c)
 *     RtlSetBits @ 0x140358F70 (RtlSetBits.c)
 */

void __fastcall MiReduceMappedFileReadAhead(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, unsigned int a3)
{
  ULONG SizeOfBitMap; // ebx
  ULONG v7; // ebx
  ULONG LastBackwardRunClear; // eax
  ULONG v9; // edi
  ULONG StartingRunIndex; // [rsp+40h] [rbp+8h] BYREF

  StartingRunIndex = 0;
  RtlSetBits(BitMapHeader, StartingIndex, 1u);
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  do
  {
    v7 = SizeOfBitMap - 1;
    if ( !v7 )
      break;
    LastBackwardRunClear = RtlFindLastBackwardRunClear(BitMapHeader, v7, &StartingRunIndex);
    SizeOfBitMap = StartingRunIndex;
    v9 = LastBackwardRunClear;
    if ( LastBackwardRunClear > a3 )
    {
      SizeOfBitMap = LastBackwardRunClear - a3 + StartingRunIndex;
      v9 = a3;
      StartingRunIndex = SizeOfBitMap;
    }
    RtlSetBits(BitMapHeader, SizeOfBitMap, v9);
    a3 -= v9;
  }
  while ( a3 );
  RtlClearBits(BitMapHeader, StartingIndex, 1u);
}
