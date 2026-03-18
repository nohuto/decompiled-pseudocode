/*
 * XREFs of ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1C007E930
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C007E450 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_RANGE::AccumulateZeroingState(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  v3 = *((_DWORD *)this + 20);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          if ( dword_1C006E450 && !*(_DWORD *)a2 && g_IsInternalRelease )
            WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          if ( *(_DWORD *)a2 == 1 || *(_DWORD *)a2 == 2 )
            *(_DWORD *)a2 = 3;
        }
      }
      else
      {
        if ( dword_1C006E450 && !*(_DWORD *)a2 && g_IsInternalRelease )
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
        if ( *(_DWORD *)a2 == 1 )
          *(_DWORD *)a2 = 2;
      }
      return;
    }
    if ( !dword_1C006E450 || *(_DWORD *)a2 )
      return;
  }
  else if ( !dword_1C006E450 || !*(_DWORD *)a2 )
  {
    return;
  }
  if ( g_IsInternalRelease )
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
}
