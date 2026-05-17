/*
 * XREFs of RtlpFcChangeRegistrationCallback @ 0x180101E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall RtlpFcChangeRegistrationCallback(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  RtlAcquireSRWLockExclusive(a2 + 32, a2, a3, a4);
  (*(void (__fastcall **)(_QWORD))(a2 + 16))(*(_QWORD *)(a2 + 24));
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
}
