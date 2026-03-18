/*
 * XREFs of PpmCheckReInit @ 0x1407A7B94
 * Callers:
 *     PopIntSteerSetMode @ 0x1403BF350 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x1405785D4 (PpmParkSetLpiCap.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x1407A7AB0 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140296BC0 (PoEnergyEstimationEnabled.c)
 *     PpmCheckArmPeriod @ 0x1403BFC64 (PpmCheckArmPeriod.c)
 *     PpmPerfClearResponsivenessHints @ 0x1403BFCEC (PpmPerfClearResponsivenessHints.c)
 *     PopInterruptSteeringEnabled @ 0x1403BFD48 (PopInterruptSteeringEnabled.c)
 *     PpmPerfCheckRequired @ 0x1403BFD64 (PpmPerfCheckRequired.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1407A7CB8 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x1407A7D90 (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x1407A8D20 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  char v0; // bl
  bool v1; // di
  char v2; // si
  __int64 *v3; // rbp
  char v4; // al
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = &PpmCurrentProfile[342 * dword_140C238AC];
  if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
  {
    v1 = PpmPerfCheckRequired((__int64)(v3 + 5)) != 0;
    v0 = v1;
    if ( PpmCheckPollForFeedback )
      v0 = 1;
    v4 = PoEnergyEstimationEnabled();
    v5 = (_DWORD *)v3 + 31;
    if ( v4 )
      v0 = 1;
    v6 = 2LL;
    do
    {
      if ( *v5 != v5[2] )
      {
        v0 = 1;
        v2 = 1;
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  if ( (unsigned __int8)PpmParkParkingAvailable() )
  {
    v0 = 1;
    v1 = 1;
  }
  if ( PopInterruptSteeringEnabled() )
    v0 = 1;
  if ( v0 && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  if ( !v2 )
    PpmPerfClearResponsivenessHints();
  LOBYTE(v7) = v1;
  PpmParkUpdateConcurrencyTracking(v7);
  if ( v0 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PpmCheckArmed )
  {
    _InterlockedExchange64(&PpmCheckLastExecutionTime, 0LL);
    PpmCheckArmed = 0;
  }
  result = PpmCheckHomogeneousPipelines;
  PpmCheckPipelines = (__int64)PpmCheckHomogeneousPipelines;
  if ( PpmHeteroPolicy )
  {
    if ( v1 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
