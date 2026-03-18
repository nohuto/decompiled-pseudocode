/*
 * XREFs of CmpAcceptBoot @ 0x140778D80
 * Callers:
 *     NtInitializeRegistry @ 0x140778D10 (NtInitializeRegistry.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     KvfCommitFeatureStates @ 0x1403A2EBC (KvfCommitFeatureStates.c)
 *     KeCommitSmtState @ 0x1403C955C (KeCommitSmtState.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpUpdatePhaseAccessBit @ 0x1407B927C (CmpUpdatePhaseAccessBit.c)
 *     CmpSaveBootControlSet @ 0x140863130 (CmpSaveBootControlSet.c)
 */

__int64 __fastcall CmpAcceptBoot(__int16 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v4; // di

  KvfCommitFeatureStates();
  v2 = 0;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( _InterlockedExchange(&CmBootAcceptFirstTime, 0) )
    {
      v4 = a1 - 4096;
      if ( v4 )
      {
        KeCommitSmtState();
        if ( CmpLKGEnabled )
          v2 = CmpSaveBootControlSet(v4);
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
  return v2;
}
