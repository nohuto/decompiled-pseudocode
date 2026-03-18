/*
 * XREFs of _SetPointerMetaVisibility@4 @ 0xB0292
 * Callers:
 *     _TransitionCursorSuppressionState@8 @ 0xB0178 (_TransitionCursorSuppressionState@8.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YGXXZ @ 0x148C7F (-xxxRestoreMouseCursors@Feedback@@YGXXZ.c)
 * Callees:
 *     _GreHidePointer@4 @ 0xB02B2 (_GreHidePointer@4.c)
 *     _zzzEnableDwmPointerSupport@8 @ 0xB0B78 (_zzzEnableDwmPointerSupport@8.c)
 */

int __thiscall SetPointerMetaVisibility(void *this)
{
  zzzEnableDwmPointerSupport(this, 1);
  return GreHidePointer(this == 0);
}
