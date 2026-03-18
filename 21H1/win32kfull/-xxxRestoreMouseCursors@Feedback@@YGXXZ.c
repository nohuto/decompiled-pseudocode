/*
 * XREFs of ?xxxRestoreMouseCursors@Feedback@@YGXXZ @ 0x148C7F
 * Callers:
 *     ?HandlePointerCursorSideOp@@YGXXZ @ 0xB0048 (-HandlePointerCursorSideOp@@YGXXZ.c)
 * Callees:
 *     _SetPointerMetaVisibility@4 @ 0xB0292 (_SetPointerMetaVisibility@4.c)
 *     ?xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0xD8DF2 (-xxxUpdateSystemCursorFromRegistry@@YGXPAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason.c)
 */

void Feedback::xxxRestoreMouseCursors()
{
  EtwTraceContactVisualizationInfo(3);
  Feedback::gfUsingPenCursors = 0;
  Feedback::gfUsingTouchCursors = 0;
  if ( *(_DWORD *)(_grpWinStaList != 0 ? _grpWinStaList + 112 + 4 : 4) )
  {
    xxxUpdateSystemCursorFromRegistry(_grpWinStaList != 0 ? _grpWinStaList + 112 : 0, 0, 4);
    xxxUpdateSystemCursorFromRegistry(_grpWinStaList != 0 ? _grpWinStaList + 112 : 0, 2, 4);
    xxxUpdateSystemCursorFromRegistry(_grpWinStaList != 0 ? _grpWinStaList + 112 : 0, 11, 4);
    xxxUpdateSystemCursorFromRegistry(_grpWinStaList != 0 ? _grpWinStaList + 112 : 0, 12, 4);
  }
  if ( gCursorSuppressionState != 1 )
    SetPointerMetaVisibility((void *)1);
}
