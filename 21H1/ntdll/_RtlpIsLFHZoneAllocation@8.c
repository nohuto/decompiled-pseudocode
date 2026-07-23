/*
 * XREFs of _RtlpIsLFHZoneAllocation@8 @ 0x4B371060
 * Callers:
 *     _RtlpWalkLFHBlock@12 @ 0x4B371E16 (_RtlpWalkLFHBlock@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

char __fastcall RtlpIsLFHZoneAllocation(PRTL_SRWLOCK SRWLock, unsigned int a2)
{
  _RTL_SRWLOCK *i; // esi
  char v5; // bl

  RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (_RTL_SRWLOCK *)SRWLock[1].Value; ; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( i == &SRWLock[1] )
    {
      v5 = 0;
      goto LABEL_7;
    }
    if ( a2 >= (unsigned int)i && a2 < (unsigned int)&i[254] )
      break;
  }
  v5 = 1;
LABEL_7:
  RtlReleaseSRWLockExclusive(SRWLock);
  return v5;
}
