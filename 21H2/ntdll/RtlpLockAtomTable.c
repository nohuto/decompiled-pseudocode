/*
 * XREFs of RtlpLockAtomTable @ 0x180059958
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x180059150 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x180059250 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005948C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x1800596A0 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18008AD30 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008ADF0 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB140 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(__int64 a1)
{
  if ( !a1 || *(_DWORD *)a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  return 1;
}
