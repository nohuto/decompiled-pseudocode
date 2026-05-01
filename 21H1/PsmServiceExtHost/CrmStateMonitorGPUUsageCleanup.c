/*
 * XREFs of CrmStateMonitorGPUUsageCleanup @ 0x180036448
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180036360 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800364BC (CrmStateMonitorListenerRemove.c)
 */

_QWORD *__fastcall CrmStateMonitorGPUUsageCleanup(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  result = (_QWORD *)(a1 + 72);
  if ( (_QWORD *)*result != result )
    result = (_QWORD *)CrmStateMonitorListenerRemove(qword_1800B3DB0);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    TpSetTimer(v3, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 88), 1LL);
    return (_QWORD *)TpReleaseTimer(*(_QWORD *)(a1 + 88));
  }
  return result;
}
