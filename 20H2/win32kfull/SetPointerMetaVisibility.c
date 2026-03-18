/*
 * XREFs of SetPointerMetaVisibility @ 0x1C002A16C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C002A050 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DA7A4 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C002AEDC (zzzEnableDwmPointerSupport.c)
 *     GreHidePointer @ 0x1C0097950 (GreHidePointer.c)
 */

__int64 __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  return GreHidePointer(v1 == 0);
}
