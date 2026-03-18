/*
 * XREFs of _RawInputRequestedForMouse@0 @ 0xACEA0
 * Callers:
 *     _EditionPostRawMouseInputMessage@24 @ 0xACE78 (_EditionPostRawMouseInputMessage@24.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 * Callees:
 *     <none>
 */

int __stdcall RawInputRequestedForMouse()
{
  int v0; // ecx

  v0 = 0;
  if ( _gHidCounters[1] || gForegroundQRawMouseRequested )
    return 1;
  return v0;
}
