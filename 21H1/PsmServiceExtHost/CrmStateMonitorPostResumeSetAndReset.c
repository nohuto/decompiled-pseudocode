/*
 * XREFs of CrmStateMonitorPostResumeSetAndReset @ 0x18003C4E4
 * Callers:
 *     CrmStateMonitorPostResumeTimerCallback @ 0x18003C4D0 (CrmStateMonitorPostResumeTimerCallback.c)
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x18003E1F0 (CrmStateMonitorPostResumeSuspendCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002B6B4 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x1800364BC (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeSetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((char *)qword_1800B3E30, a1 + 96, 0);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((char *)qword_1800B3E38, a1 + 120, 0);
  return CrmStateMonitorStateSet((void **)a1, &v4, 4uLL, 0);
}
