/*
 * XREFs of PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1408EAD80
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EB3E0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14077ED40 (PopNetSetConnectivityConstraint.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopPowerAggregatorEngageAggressiveStandbyActions(int a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rcx

  PopAcquirePolicyLock(a1);
  v5 = *(_DWORD *)(a2 + 8);
  if ( (v5 & 2) != 0 )
  {
    if ( (v5 & 4) == 0 )
      goto LABEL_6;
    v6 = 7;
  }
  else
  {
    v6 = 1;
  }
  PopNetSetConnectivityConstraint(v6);
LABEL_6:
  if ( (unsigned int)(a1 - 4) <= 1 )
    PopAggressiveStandbyAppliedActions ^= ((unsigned __int8)PopAggressiveStandbyAppliedActions ^ (unsigned __int8)PopAggressiveStandbyEnabledActions) & 1;
  v7 = ((unsigned __int8)PopAggressiveStandbyAppliedActions ^ (unsigned __int8)PopAggressiveStandbyEnabledActions) & 2;
  PopAggressiveStandbyAppliedActions ^= v7;
  return PopReleasePolicyLock(v7, v4);
}
