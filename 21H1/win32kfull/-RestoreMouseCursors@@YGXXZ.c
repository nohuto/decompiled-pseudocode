/*
 * XREFs of ?RestoreMouseCursors@@YGXXZ @ 0x148B8D
 * Callers:
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 * Callees:
 *     <none>
 */

void __stdcall RestoreMouseCursors()
{
  _InterlockedOr(&Feedback::gdwPointerCursorOps, 1u);
  KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
}
