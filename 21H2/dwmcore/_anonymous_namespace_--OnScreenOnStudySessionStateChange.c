/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x1800F7E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&stru_1803D7408);
  CurrentThreadId = GetCurrentThreadId();
  byte_1803D3358 = 1;
  dword_1803D7410 = CurrentThreadId;
  v3 = *a1;
  dword_1803D7410 = 0;
  xmmword_1803D3360 = v3;
  ReleaseSRWLockExclusive(&stru_1803D7408);
}
