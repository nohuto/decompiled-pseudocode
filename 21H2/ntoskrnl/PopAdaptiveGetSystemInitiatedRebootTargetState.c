/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x14099C8F8
 * Callers:
 *     PopAdaptivePrepareForSystemInitiatedReboot @ 0x14099C9CC (PopAdaptivePrepareForSystemInitiatedReboot.c)
 * Callees:
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 *     PopPowerAggregatorGetCurrentTargetState @ 0x140995BB8 (PopPowerAggregatorGetCurrentTargetState.c)
 */

unsigned __int64 PopAdaptiveGetSystemInitiatedRebootTargetState()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  _OWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  v0 = 0LL;
  PopAcquireAdaptiveLock(1);
  v1 = qword_140C1F410;
  if ( (qword_140C1F410 & 7) == 0 )
  {
    v1 = 0LL;
    if ( (_BYTE)PopAdaptiveBootContext )
      v1 = *((_QWORD *)&PopAdaptiveBootContext + 1);
  }
  PopReleaseAdaptiveLock();
  if ( (v1 & 7) == 0 )
  {
    PopPowerAggregatorGetCurrentTargetState((__int64)v4);
    if ( LODWORD(v4[0]) == 1 )
    {
      v2 = v1 & 0xFFFFFFFFFFFFFFF8uLL | 1;
      if ( PopBsdCurrentCsPhase > 0 )
        v0 = 8LL;
      return v0 | v2 & 0xFFFFFFFFFFFFFFF7uLL;
    }
    else if ( LODWORD(v4[0]) == 4 )
    {
      return (PopFullWake == 0 ? 8 : 0) | (((unsigned __int8)v1 ^ (unsigned __int8)PopAdaptiveSystemPowerStateToBootState[(int)v5]) & 7 ^ (unsigned __int64)v1) & 0xFFFFFFFFFFFFFFF7uLL;
    }
    else
    {
      return v1 & 0xFFFFFFFFFFFFFFF8uLL;
    }
  }
  return v1;
}
