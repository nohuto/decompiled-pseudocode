/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x1800D3C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&stru_180349770);
  CurrentThreadId = GetCurrentThreadId();
  byte_180349140 = 1;
  dword_180349778 = CurrentThreadId;
  v3 = *a1;
  dword_180349778 = 0;
  xmmword_180349130 = v3;
  ReleaseSRWLockExclusive(&stru_180349770);
}
