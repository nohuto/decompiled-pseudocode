/*
 * XREFs of MiObtainSystemCharges @ 0x14033699C
 * Callers:
 *     MiGetPageTablePages @ 0x140336880 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408CB284 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140344234 (MiChargeResident.c)
 */

__int64 __fastcall MiObtainSystemCharges(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  unsigned __int64 v8; // r8

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1u) )
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
    v8 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 48), a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 40), a2);
  }
  else if ( a3 != 2 )
  {
    if ( a3 == 4 )
      _InterlockedExchangeAdd64(&qword_140C4EE58, a2);
    else
      _InterlockedExchangeAdd64(&qword_140C4EE40, a2);
  }
  return 1LL;
}
