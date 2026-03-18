/*
 * XREFs of _anonymous_namespace_::OnScreenOnStudySessionStateChange @ 0x1800DB250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&stru_180344770);
  CurrentThreadId = GetCurrentThreadId();
  byte_180344128 = 1;
  dword_180344778 = CurrentThreadId;
  v3 = *a1;
  dword_180344778 = 0;
  xmmword_180344140 = v3;
  ReleaseSRWLockExclusive(&stru_180344770);
}
