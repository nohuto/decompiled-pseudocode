/*
 * XREFs of _RtlFindLongestRunClear@8 @ 0x4B34ED10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFindClearRuns@16 @ 0x4B34E950 (_RtlFindClearRuns@16.c)
 */

ULONG __cdecl RtlFindLongestRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  _RTL_BITMAP_RUN RunArray; // [esp+0h] [ebp-8h] BYREF

  if ( RtlFindClearRuns(BitMapHeader, &RunArray, 1u, 1u) == 1 )
  {
    *StartingIndex = RunArray.StartingIndex;
    return RunArray.NumberOfBits;
  }
  else
  {
    *StartingIndex = 0;
    return 0;
  }
}
