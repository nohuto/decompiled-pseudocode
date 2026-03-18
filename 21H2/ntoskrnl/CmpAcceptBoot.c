/*
 * XREFs of CmpAcceptBoot @ 0x1406EA1C8
 * Callers:
 *     NtInitializeRegistry @ 0x1406EA120 (NtInitializeRegistry.c)
 * Callees:
 *     KvfCommitFeatureStates @ 0x14025D1A4 (KvfCommitFeatureStates.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KeCommitSmtState @ 0x1403DCFAC (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085ED9C (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v4; // di

  KvfCommitFeatureStates();
  v2 = 0;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( _InterlockedExchange(CmBootAcceptFirstTime, 0) )
    {
      v4 = a1 - 4096;
      if ( v4 )
      {
        KeCommitSmtState();
        if ( CmpLKGEnabled )
          v2 = CmpSaveBootControlSet(v4);
        off_140C02168[0]();
        CmpUpdatePhaseAccessBit();
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return v2;
}
