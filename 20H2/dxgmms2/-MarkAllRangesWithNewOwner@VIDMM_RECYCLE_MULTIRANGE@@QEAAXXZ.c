/*
 * XREFs of ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0060A00
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0061E80 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0063530 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0066440 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  _QWORD *v2; // rdi
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = (_QWORD *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 54);
    if ( v4 )
    {
      v6 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 == 1 )
        {
          v2[19] = this;
        }
        else
        {
          v7 = WdLogNewEntry5_WdCriticalError(v6, a2);
          *(_QWORD *)(v7 + 24) = 270LL;
          *(_QWORD *)(v7 + 32) = 52LL;
          *(_QWORD *)(v7 + 40) = 10LL;
          *(_OWORD *)(v7 + 48) = 0LL;
          WdLogEvent5_WdCriticalError(v7);
        }
      }
      else
      {
        v2[18] = this;
      }
    }
    else
    {
      v2[17] = this;
    }
    if ( v2 == *((_QWORD **)this + 9) )
      break;
    a2 = v2[15];
    v5 = v2[9];
    v2 = 0LL;
    if ( a2 != v5 + 72 )
      v2 = (_QWORD *)(a2 - 120);
  }
}
