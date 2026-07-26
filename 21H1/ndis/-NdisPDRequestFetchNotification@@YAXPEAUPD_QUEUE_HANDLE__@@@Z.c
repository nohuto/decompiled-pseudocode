/*
 * XREFs of ?NdisPDRequestFetchNotification@@YAXPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C007CBC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisPDRequestFetchNotification(struct PD_QUEUE_HANDLE__ *a1)
{
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x1Du,
      0x65u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      a1);
  _InterlockedExchange((volatile __int32 *)a1 + 14, 1);
}
