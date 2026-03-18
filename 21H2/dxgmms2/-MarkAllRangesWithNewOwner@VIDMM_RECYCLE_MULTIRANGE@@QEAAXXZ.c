/*
 * XREFs of ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00809B0
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C007EB0C (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C007F900 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00801C0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(VIDMM_RECYCLE_MULTIRANGE *this)
{
  _QWORD *v1; // rdi
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ecx

  v1 = (_QWORD *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 54);
    if ( v3 )
    {
      v6 = v3 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          v1[19] = this;
        else
          WdLogSingleEntry5(0LL, 270LL, 52LL, 10LL, 0LL, 0LL);
      }
      else
      {
        v1[18] = this;
      }
    }
    else
    {
      v1[17] = this;
    }
    if ( v1 == *((_QWORD **)this + 9) )
      break;
    v4 = v1[15];
    v5 = v1[9];
    v1 = 0LL;
    if ( v4 != v5 + 72 )
      v1 = (_QWORD *)(v4 - 120);
  }
}
