/*
 * XREFs of RtlpHpLfhOwnerListLockUnlock @ 0x18010E250
 * Callers:
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010E2C4 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpLfhOwnerListLockUnlock(__int64 a1, _RTL_SRWLOCK **a2, char a3)
{
  _RTL_SRWLOCK *Value; // rbx
  int v6; // edi

  Value = *a2;
  if ( *a2 != (_RTL_SRWLOCK *)a2 )
  {
    v6 = a3 & 1;
    do
    {
      if ( v6 )
      {
        if ( (a3 & 2) != 0 )
          Value[3].Value = 1LL;
        RtlReleaseSRWLockExclusive(Value + 3);
      }
      else
      {
        RtlAcquireSRWLockExclusive(Value + 3);
      }
      Value = (_RTL_SRWLOCK *)Value->Value;
    }
    while ( Value != (_RTL_SRWLOCK *)a2 );
  }
}
