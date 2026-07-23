/*
 * XREFs of MiActOnMirrorBitmap @ 0x1407777F4
 * Callers:
 *     MiUpdateMirrorBitmaps @ 0x1407777B4 (MiUpdateMirrorBitmaps.c)
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 *     MiMirrorBrownPhase @ 0x14099668C (MiMirrorBrownPhase.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x140321750 (RtlSetBitsEx.c)
 *     MiSplitMirrorBitMap @ 0x140777890 (MiSplitMirrorBitMap.c)
 */

__int64 __fastcall MiActOnMirrorBitmap(__int64 a1, int a2)
{
  unsigned int *v2; // rsi
  unsigned int v3; // edi
  unsigned int i; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx

  v2 = (unsigned int *)MmPhysicalMemoryBlock;
  v3 = 0;
  for ( i = 1; v3 < *v2; ++v3 )
  {
    v7 = *(_QWORD *)&v2[4 * v3 + 6];
    v8 = *(_QWORD *)&v2[4 * v3 + 4];
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        RtlSetBitsEx(a1, v8, v7);
      }
      else if ( a2 == 2 )
      {
        RtlClearBitsEx(a1, v8, v7);
      }
    }
    else if ( !(unsigned int)MiSplitMirrorBitMap(a1, v8, v7) )
    {
      return 0;
    }
  }
  return i;
}
