/*
 * XREFs of RtlpLockAtomTable @ 0x18004C8F8
 * Callers:
 *     RtlDeleteAtomFromAtomTable @ 0x18004C120 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x18004C220 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18004C42C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x18004C640 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x18008A630 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008A6F0 (RtlEmptyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1800EADE0 (RtlPinAtomInAtomTable.c)
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
