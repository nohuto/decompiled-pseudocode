/*
 * XREFs of _InitKeyboardState@0 @ 0xD4ED4
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall InitKeyboardState()
{
  int result; // eax

  result = _gfsSASModifiersDown;
  gfsModifiers = 0;
  gfsModOnlyCandidate = 0;
  gfsRawModifiersForHotKey = 0;
  _gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
