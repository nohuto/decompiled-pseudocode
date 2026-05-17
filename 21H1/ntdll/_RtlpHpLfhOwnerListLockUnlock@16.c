/*
 * XREFs of _RtlpHpLfhOwnerListLockUnlock@16 @ 0x4B3768D4
 * Callers:
 *     _RtlpHpLfhOwnerLockUnlock@8 @ 0x4B37691E (_RtlpHpLfhOwnerLockUnlock@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

void __fastcall RtlpHpLfhOwnerListLockUnlock(int a1, int **a2, char a3, int a4)
{
  int **v5; // esi

  v5 = (int **)*a2;
  if ( *a2 != (int *)a2 )
  {
    do
    {
      if ( (a3 & 1) != 0 )
      {
        if ( (a3 & 2) != 0 )
          v5[3] = (int *)1;
        RtlReleaseSRWLockExclusive((volatile signed __int32 *)v5 + 3);
      }
      else
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)v5 + 3);
      }
      v5 = (int **)*v5;
    }
    while ( v5 != a2 );
  }
}
