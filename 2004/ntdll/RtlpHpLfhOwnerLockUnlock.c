/*
 * XREFs of RtlpHpLfhOwnerLockUnlock @ 0x18010DF54
 * Callers:
 *     RtlpHpLfhContextLockUnlock @ 0x18010DE60 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010DF54 (RtlpHpLfhOwnerLockUnlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhOwnerListLockUnlock @ 0x18010DEE0 (RtlpHpLfhOwnerListLockUnlock.c)
 *     RtlpHpLfhOwnerLockUnlock @ 0x18010DF54 (RtlpHpLfhOwnerLockUnlock.c)
 */

void __fastcall RtlpHpLfhOwnerLockUnlock(__int64 a1, unsigned int a2)
{
  int v4; // esi
  __int64 v5; // rcx
  _RTL_SRWLOCK *v6; // rcx
  _RTL_SRWLOCK *v7; // rcx

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 16));
  RtlpHpLfhOwnerListLockUnlock(a1, (_RTL_SRWLOCK **)(a1 + 24), a2);
  RtlpHpLfhOwnerListLockUnlock(v5, (_RTL_SRWLOCK **)(a1 + 40), a2);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v6 = (_RTL_SRWLOCK *)(a1 + 80);
    if ( v4 )
    {
      if ( (a2 & 2) != 0 )
        v6->Value = 1LL;
      RtlReleaseSRWLockExclusive(v6);
    }
    else
    {
      RtlAcquireSRWLockExclusive(v6);
    }
    RtlpHpLfhOwnerLockUnlock(**(_QWORD **)(a1 + 96), a2);
  }
  if ( v4 )
  {
    v7 = (_RTL_SRWLOCK *)(a1 + 16);
    if ( (a2 & 2) != 0 )
      v7->Value = 1LL;
    RtlReleaseSRWLockExclusive(v7);
  }
}
