/*
 * XREFs of ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C002E844
 * Callers:
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002D448 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C002E710 (ACPIBuildProcessDelayedDependencyPhase0.c)
 * Callees:
 *     AreDependenciesSatisfied @ 0x1C002E8F4 (AreDependenciesSatisfied.c)
 */

bool __fastcall ACPIBuildProcessDelayedDependencyShouldDelayRequest(__int64 a1)
{
  _QWORD *v1; // rsi
  bool v2; // bl
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v6; // rcx

  if ( (*(_DWORD *)(a1 + 20) & 0x20) == 0 )
    return 0;
  v1 = *(_QWORD **)(a1 + 40);
  v2 = 1;
  if ( (v1[1] & 0xA00000000000LL) == 0 )
  {
    v2 = 0;
    if ( v1[76] )
      v2 = (unsigned __int8)AreDependenciesSatisfied(v1[90]) == 0;
    for ( i = 0LL; !v2 && (unsigned int)i <= 5; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i > 4 )
        v4 = v1[51];
      else
        v4 = v1[i + 46];
      if ( v4 )
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( *(_QWORD *)(v6 + 96) )
          v2 = (unsigned __int8)AreDependenciesSatisfied(*(_QWORD *)(v6 + 32)) == 0;
      }
    }
  }
  return v2;
}
