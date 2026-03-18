/*
 * XREFs of ?AccessZeroTransition@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0063F58
 * Callers:
 *     ?MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0060B90 (-MarkNoZeroNeed@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0063D08 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0063D80 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_RANGE::AccessZeroTransition(VIDMM_RECYCLE_RANGE *this)
{
  __int64 v1; // rdx
  int v2; // edx
  _QWORD *v3; // rax

  v1 = *((unsigned int *)this + 20);
  if ( (_DWORD)v1 )
  {
    v2 = v1 - 1;
    if ( !v2 || v2 == 2 )
      *((_DWORD *)this + 20) = 2;
  }
  else if ( dword_1C00513E0 && g_IsInternalRelease )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v1);
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    v3[3] = 270LL;
    v3[4] = 9LL;
    WdLogEvent5_WdCriticalError(v3);
  }
}
