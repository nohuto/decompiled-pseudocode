/*
 * XREFs of _RtlpHpLfhOwnerLockUnlock@8 @ 0x4B37691E
 * Callers:
 *     _RtlpHpLfhContextLockUnlock@8 @ 0x4B3766A8 (_RtlpHpLfhContextLockUnlock@8.c)
 *     _RtlpHpLfhOwnerLockUnlock@8 @ 0x4B37691E (_RtlpHpLfhOwnerLockUnlock@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpLfhOwnerListLockUnlock@16 @ 0x4B3768D4 (_RtlpHpLfhOwnerListLockUnlock@16.c)
 *     _RtlpHpLfhOwnerLockUnlock@8 @ 0x4B37691E (_RtlpHpLfhOwnerLockUnlock@8.c)
 */

void __fastcall RtlpHpLfhOwnerLockUnlock(int a1, int a2)
{
  int v4; // edi
  int v5; // ecx
  _RTL_SRWLOCK *v6; // esi

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 8));
  RtlpHpLfhOwnerListLockUnlock(a1, (_RTL_SRWLOCK **)(a1 + 12), a2, a1);
  RtlpHpLfhOwnerListLockUnlock(v5, (_RTL_SRWLOCK **)(a1 + 20), a2, v5);
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    if ( v4 )
    {
      if ( (a2 & 2) != 0 )
        *(_DWORD *)(a1 + 44) = 1;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 44));
    }
    RtlpHpLfhOwnerLockUnlock(**(_DWORD **)(a1 + 52), a2);
  }
  if ( v4 )
  {
    v6 = (_RTL_SRWLOCK *)(a1 + 8);
    if ( (a2 & 2) != 0 )
      v6->Value = 1;
    RtlReleaseSRWLockExclusive(v6);
  }
}
