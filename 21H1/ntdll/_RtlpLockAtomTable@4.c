/*
 * XREFs of _RtlpLockAtomTable@4 @ 0x4B2E04D4
 * Callers:
 *     _RtlDeleteAtomFromAtomTable@8 @ 0x4B2A7820 (_RtlDeleteAtomFromAtomTable@8.c)
 *     _RtlQueryAtomInAtomTable@24 @ 0x4B2A9E90 (_RtlQueryAtomInAtomTable@24.c)
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 *     _RtlLookupAtomInAtomTable@12 @ 0x4B2E0270 (_RtlLookupAtomInAtomTable@12.c)
 *     _RtlDestroyAtomTable@4 @ 0x4B34CFA0 (_RtlDestroyAtomTable@4.c)
 *     _RtlEmptyAtomTable@8 @ 0x4B34D050 (_RtlEmptyAtomTable@8.c)
 *     _RtlPinAtomInAtomTable@8 @ 0x4B34D0F0 (_RtlPinAtomInAtomTable@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 */

char __thiscall RtlpLockAtomTable(_RTL_SRWLOCK *this)
{
  if ( !this || this->Value != 1836020801 )
    return 0;
  RtlAcquireSRWLockExclusive(this + 2);
  return 1;
}
