/*
 * XREFs of MiObtainSystemCharges @ 0x1402E5ABC
 * Callers:
 *     MiGetPageTablePages @ 0x1402E59A0 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C8A44 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14025A658 (MiChargeResident.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainSystemCharges(ULONG_PTR *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v9; // r8

  if ( !(unsigned int)MiChargeCommit((__int64)a1, a2, 1u) )
    return 0LL;
  v7 = 128LL;
  if ( a3 != 2 )
    v7 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v7, v6) )
  {
    MiReturnCommit(a1, a2);
    return 0LL;
  }
  if ( a3 == 1 || a3 == 11 )
  {
    v9 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 48), a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 40), a2);
  }
  else if ( a3 != 2 )
  {
    if ( a3 == 4 )
      _InterlockedExchangeAdd64(&qword_140C4EFD8, a2);
    else
      _InterlockedExchangeAdd64(&qword_140C4EFC0, a2);
  }
  return 1LL;
}
