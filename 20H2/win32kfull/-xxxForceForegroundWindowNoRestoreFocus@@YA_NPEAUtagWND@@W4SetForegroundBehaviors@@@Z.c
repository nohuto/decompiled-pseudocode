/*
 * XREFs of ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0128F9C
 * Callers:
 *     NtUserNavigateFocus @ 0x1C00077C0 (NtUserNavigateFocus.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0008630 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01D2140 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C02415F8 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 */

bool __fastcall xxxForceForegroundWindowNoRestoreFocus(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v5; // rbx

  v3 = a2;
  v5 = 0LL;
  if ( !(unsigned __int8)IsInputThread(a1, a2, a3) && gptiRit != gptiCurrent )
    v5 = gptiCurrent;
  return (unsigned int)xxxSetForegroundWindow2(a1, v5, v3 | 0x40u) != 0;
}
