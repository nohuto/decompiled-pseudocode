/*
 * XREFs of CrmStateMonitorCsAcDcCleanup @ 0x180085454
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180036560 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800366BC (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorCsAcDcCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((char *)qword_1800B3D90, a1 + 64, 0);
  v2 = (_QWORD *)(a1 + 96);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800B3DB0, a1 + 88, 0);
  return (char)v2;
}
