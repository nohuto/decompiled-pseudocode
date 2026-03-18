/*
 * XREFs of _ClearKeyboardStates@0 @ 0xB22C6
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall ClearKeyboardStates()
{
  int DLT; // eax
  int i; // ecx
  int result; // eax

  DLT = DLT_ASYNCKEYSTATE::getDLT();
  GetDomainLockRef(DLT);
  for ( i = 0; i < 64; ++i )
    *(_BYTE *)(*(_DWORD *)_gafAsyncKeyState + i) &= 0xAAu;
  ClearKeyboardToggleStates();
  result = _gfsSASModifiersDown;
  gfsModifiers = 0;
  gfsModOnlyCandidate = 0;
  gfsRawModifiersForHotKey = 0;
  _gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
