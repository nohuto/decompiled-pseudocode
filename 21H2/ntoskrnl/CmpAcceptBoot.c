/*
 * XREFs of CmpAcceptBoot @ 0x14078D730
 * Callers:
 *     NtInitializeRegistry @ 0x14078D6C0 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x1403A642C (KvfCommitFeatureStates.c)
 *     KeCommitSmtState @ 0x1403CDAAC (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407CF0AC (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x140867BE0 (CmpSaveBootControlSet.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int16 v6; // di

  KvfCommitFeatureStates();
  v4 = 0;
  if ( !PsIsCurrentThreadInServerSilo(v3, v2) )
  {
    if ( _InterlockedExchange(&CmBootAcceptFirstTime, 0) )
    {
      v6 = a1 - 4096;
      if ( v6 )
      {
        KeCommitSmtState();
        if ( CmpLKGEnabled )
          v4 = CmpSaveBootControlSet(v6);
        off_140C00AF8[0]();
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
  return v4;
}
