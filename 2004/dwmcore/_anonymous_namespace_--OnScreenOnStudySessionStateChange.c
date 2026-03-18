/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x1800DB830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&stru_180345790);
  CurrentThreadId = GetCurrentThreadId();
  byte_180345140 = 1;
  dword_180345798 = CurrentThreadId;
  v3 = *a1;
  dword_180345798 = 0;
  xmmword_180345130 = v3;
  ReleaseSRWLockExclusive(&stru_180345790);
}
