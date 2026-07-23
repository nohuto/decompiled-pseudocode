/*
 * XREFs of MiObtainSystemCharges @ 0x140296E0C
 * Callers:
 *     MiGetPageTablePages @ 0x140296CF0 (MiGetPageTablePages.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408C8BA4 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     MiChargeResident @ 0x14027BBC8 (MiChargeResident.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainSystemCharges(ULONG_PTR *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v10; // r8

  if ( !(unsigned int)MiChargeCommit(a1, a2, 1LL) )
    return 0LL;
  v6 = 128LL;
  if ( a3 != 2 )
    v6 = 0LL;
  if ( !(unsigned int)MiChargeResident(a1, a2, v6) )
  {
    MiReturnCommit(a1, a2, v7, v8);
    return 0LL;
  }
  if ( a3 == 1 || a3 == 11 )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 48), a2);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 40), a2);
  }
  else if ( a3 != 2 )
  {
    if ( a3 == 4 )
      _InterlockedExchangeAdd64(&qword_140C4F018, a2);
    else
      _InterlockedExchangeAdd64(&qword_140C4F000, a2);
  }
  return 1LL;
}
