/*
 * XREFs of MiObtainSystemCharges @ 0x14027D190
 * Callers:
 *     MiGetPageTablePages @ 0x14027D03C (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x14096DAE0 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChargeResident @ 0x1402821F4 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 */

__int64 __fastcall MiObtainSystemCharges(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  unsigned __int64 v8; // r8

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1LL) )
    return 0LL;
  v6 = 128LL;
  if ( a3 != 2 )
    v6 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v6) )
  {
    MiReturnCommit(a1, a2);
    return 0LL;
  }
  if ( a3 == 1 || a3 == 11 )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), a2);
  }
  else if ( a3 != 2 )
  {
    if ( a3 == 4 )
      _InterlockedExchangeAdd64(&qword_140C53558, a2);
    else
      _InterlockedExchangeAdd64(&qword_140C53540, a2);
  }
  return 1LL;
}
