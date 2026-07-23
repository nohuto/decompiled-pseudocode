/*
 * XREFs of _RtlpFcChangeRegistrationCallback@12 @ 0x4B369880
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __stdcall RtlpFcChangeRegistrationCallback(PTP_CALLBACK_INSTANCE a1, _RTL_SRWLOCK *a2, PTP_WORK a3)
{
  RtlAcquireSRWLockExclusive(a2 + 4);
  ((void (__thiscall *)(unsigned int, unsigned int))a2[2].Value)(a2[2].Value, a2[3].Value);
  RtlReleaseSRWLockExclusive(a2 + 4);
}
