/*
 * XREFs of ?OnPointerInfoFrame@DragGestureTracker@@QEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180144CF8
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800F9FA0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FE000 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 * Callees:
 *     ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x180144D38 (-ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ.c)
 */

__int64 __fastcall DragGestureTracker::OnPointerInfoFrame(
        DragGestureTracker *this,
        __int64 a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  if ( (int)ProcessPointerFramesInteractionContext(*((_QWORD *)this + 2), 1LL, 1LL, a3) < 0 )
    DragGestureTracker::ResetAndInitializeInteractionContext(this);
  return 0LL;
}
