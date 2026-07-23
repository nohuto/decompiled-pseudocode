/*
 * XREFs of _RtlpTpWaitCheckReset@8 @ 0x4B2A8A69
 * Callers:
 *     _RtlpTpWaitCallback@16 @ 0x4B2A8970 (_RtlpTpWaitCallback@16.c)
 * Callees:
 *     _RtlpTpWaitCheckReset@8 @ 0x4B2A8A69 (_RtlpTpWaitCheckReset@8.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

void __fastcall RtlpTpWaitCheckReset(int a1, int a2)
{
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  if ( (*(_BYTE *)(a1 + 4) & 8) == 0 && (!a2 || a2 == 258) )
    TpSetWaitEx(*(PTP_WAIT *)(a1 + 24), *(HANDLE *)(a1 + 28), *(PLARGE_INTEGER *)(a1 + 40), 0);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
}
