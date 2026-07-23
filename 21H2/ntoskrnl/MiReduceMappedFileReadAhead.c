/*
 * XREFs of MiReduceMappedFileReadAhead @ 0x1402479AC
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402E2620 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     RtlFindLastBackwardRunClear @ 0x1402585E0 (RtlFindLastBackwardRunClear.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
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
