/*
 * XREFs of ClearKeyboardStates @ 0x1C0050AF8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ClearKeyboardStates()
{
  unsigned int DLT; // eax
  __m128i *v1; // rax
  __int64 v2; // rcx
  __int64 result; // rax

  DLT = DLT_ASYNCKEYSTATE::getDLT();
  GetDomainLockRef(DLT);
  v1 = *(__m128i **)gafAsyncKeyState;
  v2 = 4LL;
  do
  {
    *v1 = _mm_and_si128(_mm_loadu_si128(v1), (__m128i)_xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
    ++v1;
    --v2;
  }
  while ( v2 );
  ClearKeyboardToggleStates();
  result = gfsSASModifiersDown;
  gfsModifiers = 0;
  gfsModOnlyCandidate = 0;
  gfsRawModifiersForHotKey = 0;
  gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
