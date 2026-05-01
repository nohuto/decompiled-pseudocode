/*
 * XREFs of CrmStateMonitorPostShellReadySetAndReset @ 0x180036900
 * Callers:
 *     CrmStateMonitorPostShellReadyTimerCallback @ 0x180036470 (CrmStateMonitorPostShellReadyTimerCallback.c)
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x180036490 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B824 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x1800366BC (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadySetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((char *)qword_1800B3E30, a1 + 88, 0);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    CrmStateMonitorListenerRemove((char *)qword_1800B3E38, a1 + 112, 0);
  return CrmStateMonitorStateSet((void **)a1, &v4, 4uLL, 0);
}
