/*
 * XREFs of _UsingPenCursors@0 @ 0x7F404
 * Callers:
 *     ?_GetCursorInfo@@YGXPAUtagCURSORINFO@@@Z @ 0x7F38E (-_GetCursorInfo@@YGXPAUtagCURSORINFO@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall UsingPenCursors()
{
  return Feedback::gfUsingPenCursors || Feedback::gfUsingTouchCursors;
}
