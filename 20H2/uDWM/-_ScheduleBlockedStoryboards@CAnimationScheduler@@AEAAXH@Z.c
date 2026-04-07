/*
 * XREFs of ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800355E4
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x18002FFE0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x1800348B8 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008028 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18002F730 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180034650 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z @ 0x180035694 (-ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z.c)
 */

void __fastcall CAnimationScheduler::_ScheduleBlockedStoryboards(CAnimationScheduler *this, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rbp
  CAnimationScheduler *i; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi

  v2 = *((_DWORD *)this + 10);
  v3 = 0LL;
  for ( i = this; (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)i + 2) + 8 * v3);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v2 = *((_DWORD *)i + 10);
    }
    v7 = 0LL;
    if ( v2 )
    {
      while ( 1 )
      {
        this = *(CAnimationScheduler **)(*((_QWORD *)i + 2) + 8 * v7);
        if ( *((_DWORD *)this + 6) != 4 && CStoryboard::ShouldBlock(this, (struct CStoryboard *)v6) )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)i + 10) )
          goto LABEL_8;
      }
      CStoryboard::Abandon((CStoryboard *)v6);
    }
LABEL_8:
    if ( *(_DWORD *)(v6 + 64) <= a2 && *(_DWORD *)(v6 + 24) == 1 )
      CAnimationScheduler::_ScheduleStoryboard(this, (struct CStoryboard *)v6);
    CStoryboard::Release((CStoryboard *)v6);
    v2 = *((_DWORD *)i + 10);
  }
}
