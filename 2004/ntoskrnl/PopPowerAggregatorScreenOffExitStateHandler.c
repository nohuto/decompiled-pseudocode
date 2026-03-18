/*
 * XREFs of PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EB590
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140763BE8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140763A88 (PopPowerAggregatorSetCurrentState.c)
 *     PdcPoPerfOverride @ 0x1408EC4F8 (PdcPoPerfOverride.c)
 *     PopPdcAreAllPhasesDisengaged @ 0x1408EC9C8 (PopPdcAreAllPhasesDisengaged.c)
 *     PopPdcDisengagePhases @ 0x1408ECC10 (PopPdcDisengagePhases.c)
 */

__int64 __fastcall PopPowerAggregatorScreenOffExitStateHandler(__int64 a1)
{
  int v1; // eax
  char v3; // bl
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  if ( !v1 )
    goto LABEL_7;
  if ( v1 == 1 )
  {
LABEL_10:
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[0]) = 3;
    PopPowerAggregatorSetCurrentState(a1, (__int64)v5);
    return 0LL;
  }
  if ( v1 > 1 )
  {
    if ( v1 > 3 )
    {
      if ( v1 != 4 )
        return 0LL;
LABEL_8:
      PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
      PopPdcDisengagePhases();
      v3 = PopPdcAreAllPhasesDisengaged();
      PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
      if ( v3 )
      {
        *(_DWORD *)(a1 + 88) = 1;
        goto LABEL_10;
      }
      return 0LL;
    }
LABEL_7:
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    PdcPoPerfOverride();
    PopPdcDisengagePhases();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
    *(_DWORD *)(a1 + 88) = 4;
    goto LABEL_8;
  }
  return 0LL;
}
