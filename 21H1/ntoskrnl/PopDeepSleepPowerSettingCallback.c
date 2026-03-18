/*
 * XREFs of PopDeepSleepPowerSettingCallback @ 0x1407BD770
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x14070E4E0 (PopCheckResiliencyScenarios.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopDeepSleepPowerSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = -1073741811;
  v5 = *(_QWORD *)&GUID_DEEP_SLEEP_ENABLED.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DEEP_SLEEP_ENABLED.Data1 == *a1 )
    v5 = *(_QWORD *)GUID_DEEP_SLEEP_ENABLED.Data4 - a1[1];
  if ( !v5 && a3 == 4 && a2 )
  {
    PopAcquirePolicyLock((_DWORD)a1);
    PopDeepSleepIsEnabled = *a2 != 0;
    PopCheckResiliencyScenarios();
    PopReleasePolicyLock(v7, v6);
    return 0;
  }
  return v4;
}
