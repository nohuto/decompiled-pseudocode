/*
 * XREFs of SetPointerMetaVisibility @ 0x1C004A88C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C004A770 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DB464 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     GreHidePointer @ 0x1C004A8C0 (GreHidePointer.c)
 *     zzzEnableDwmPointerSupport @ 0x1C004CCD0 (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return GreHidePointer(v1 == 0);
}
