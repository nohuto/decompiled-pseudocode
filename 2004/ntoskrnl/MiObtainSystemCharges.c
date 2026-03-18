/*
 * XREFs of MiObtainSystemCharges @ 0x1402E2E8C
 * Callers:
 *     MiGetPageTablePages @ 0x1402E2D70 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C5444 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1402F90CC (MiChargeResident.c)
 */

__int64 __fastcall MiObtainSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v9; // r8

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1u) )
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
      _InterlockedExchangeAdd64(&qword_140C4EDD8, a2);
    else
      _InterlockedExchangeAdd64(&qword_140C4EDC0, a2);
  }
  return 1LL;
}
