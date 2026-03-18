/*
 * XREFs of PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408E9EF0
 * Callers:
 *     PopPowerAggregatorInvokeStateMachine @ 0x140762308 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408E99BC (PopPowerAggregatorDisengageModernStandby.c)
 *     PdcPoPerfOverride @ 0x1408EB278 (PdcPoPerfOverride.c)
 *     PopPdcDisengagePhases @ 0x1408EB990 (PopPdcDisengagePhases.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyExitStateHandler(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 88);
  if ( !v1 )
    goto LABEL_7;
  if ( v1 == 1 )
  {
LABEL_10:
    PopPowerAggregatorDisengageModernStandby(a1);
    return 0LL;
  }
  if ( v1 > 1 )
  {
    if ( v1 > 3 )
    {
      if ( v1 != 4 )
        return 0LL;
LABEL_8:
      if ( *(_BYTE *)(a1 + 96) )
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
