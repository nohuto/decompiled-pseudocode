/*
 * XREFs of ?UpdateOutstandingDecommit@VIDMM_RECYCLE_HEAP_MGR@@SAX_JPEAVVIDMM_RECYCLE_BLOCK@@@Z @ 0x1C00025D4
 * Callers:
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0077FD4 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UpdateOutstandingDecommit(unsigned __int64 a1, struct VIDMM_RECYCLE_BLOCK *a2)
{
  _QWORD *v2; // rax

  if ( (__int64)(a1 + _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, a1)) < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
      v2[5] = 0LL;
      v2[6] = 0LL;
      v2[7] = 0LL;
      v2[3] = 270LL;
      v2[4] = 9LL;
      WdLogEvent5_WdCriticalError(v2);
    }
  }
}
