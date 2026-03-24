/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x1800DFE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&stru_180347660);
  CurrentThreadId = GetCurrentThreadId();
  byte_180347150 = 1;
  dword_180347668 = CurrentThreadId;
  v3 = *a1;
  dword_180347668 = 0;
  xmmword_180347140 = v3;
  ReleaseSRWLockExclusive(&stru_180347660);
}
