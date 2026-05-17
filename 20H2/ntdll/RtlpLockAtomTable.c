/*
 * XREFs of RtlpLockAtomTable @ 0x18004C948
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18004C170 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x18004C270 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18004C47C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x18004C690 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18008A730 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008A7F0 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800EB2F0 (RtlPinAtomInAtomTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( !a1 || *a1 != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)(a1 + 2), a2, a3, a4);
  return 1;
}
