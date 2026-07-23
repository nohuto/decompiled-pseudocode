/*
 * XREFs of _RtlpHpLfhOwnerListLockUnlock@16 @ 0x4B3768D4
 * Callers:
 *     _RtlpHpLfhOwnerLockUnlock@8 @ 0x4B37691E (_RtlpHpLfhOwnerLockUnlock@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpHpLfhOwnerListLockUnlock(int a1, _RTL_SRWLOCK **a2, char a3, int a4)
{
  _RTL_SRWLOCK *i; // esi

  for ( i = *a2; i != (_RTL_SRWLOCK *)a2; i = (_RTL_SRWLOCK *)i->Value )
  {
    if ( (a3 & 1) != 0 )
    {
      if ( (a3 & 2) != 0 )
        i[3].Value = 1;
      RtlReleaseSRWLockExclusive(i + 3);
    }
    else
    {
      RtlAcquireSRWLockExclusive(i + 3);
    }
  }
}
