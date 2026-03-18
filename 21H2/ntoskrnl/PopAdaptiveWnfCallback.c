/*
 * XREFs of PopAdaptiveWnfCallback @ 0x14099CB50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueryWnfStateData @ 0x1407EEE10 (ExQueryWnfStateData.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x14099C794 (PopAdaptiveConsoleSessionOverrideTrigger.c)
 */

__int64 __fastcall PopAdaptiveWnfCallback(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( *a2 != WNF_HPM_GLOBAL_HUMAN_PRESENCE_STATE )
    return 3221225659LL;
  v4[0] = 4;
  result = ExQueryWnfStateData(a1, &v5, &v3, v4);
  if ( (int)result >= 0 )
  {
    if ( v3 == 1 && PopConsoleSession )
    {
      PopAcquireAdaptiveLock(0);
      if ( PopAdaptiveSensorDisplayTimeout )
        PopAdaptiveConsoleSessionOverrideTrigger(0, PopAdaptiveSensorDisplayTimeout);
      PopReleaseAdaptiveLock();
    }
    return 0LL;
  }
  return result;
}
