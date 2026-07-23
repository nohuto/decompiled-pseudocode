/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x1403A3764
 * Callers:
 *     MiEmptyAccessLogs @ 0x1403A3580 (MiEmptyAccessLogs.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x14024697C (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x14027D59C (MiQueuePageAccessLog.c)
 */

void __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  _SLIST_ENTRY *v3; // rcx

  if ( qword_140C4E840 )
  {
    v3 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_140C4E840, 0LL);
    if ( v3 )
    {
      if ( a1 - (unsigned __int64)v3[1].Next > PfKernelGlobals || a2 )
        MiQueuePageAccessLog(v3);
      else
        MiReturnCcAccessLog((signed __int64)v3, 0);
    }
  }
}
