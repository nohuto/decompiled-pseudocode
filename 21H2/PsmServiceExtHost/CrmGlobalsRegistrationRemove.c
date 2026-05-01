/*
 * XREFs of CrmGlobalsRegistrationRemove @ 0x180036300
 * Callers:
 *     CrmRegistrationCleanup @ 0x180036274 (CrmRegistrationCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsRegistrationRemove(__int64 a1)
{
  RtlAcquireSRWLockExclusive(&unk_1800B3E98);
  dword_1800B3EA0 = GetCurrentThreadId();
  RtlRbRemoveNode(&xmmword_1800B3EA8, a1 + 32);
  *(_QWORD *)(a1 + 48) = -1LL;
  dword_1800B3EA0 = 0;
  return RtlReleaseSRWLockExclusive(&unk_1800B3E98);
}
