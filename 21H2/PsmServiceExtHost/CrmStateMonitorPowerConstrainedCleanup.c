/*
 * XREFs of CrmStateMonitorPowerConstrainedCleanup @ 0x1800857AC
 * Callers:
 *     CrmStateMonitorCleanup @ 0x180036560 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800366BC (CrmStateMonitorListenerRemove.c)
 */

char __fastcall CrmStateMonitorPowerConstrainedCleanup(__int64 a1)
{
  _QWORD *v2; // rax

  if ( *(_QWORD *)(a1 + 80) != a1 + 80 )
    CrmStateMonitorListenerRemove((char *)qword_1800B3D90, a1 + 72, 0);
  v2 = (_QWORD *)(a1 + 104);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = CrmStateMonitorListenerRemove((char *)qword_1800B3E28, a1 + 96, 0);
  return (char)v2;
}
