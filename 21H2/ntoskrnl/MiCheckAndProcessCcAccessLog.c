/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x1403760B4
 * Callers:
 *     MiEmptyAccessLogs @ 0x140375ED0 (MiEmptyAccessLogs.c)
 * Callees:
 *     MiReturnCcAccessLog @ 0x140233A4C (MiReturnCcAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140233AA0 (MiQueuePageAccessLog.c)
 */

void __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  struct _SLIST_ENTRY *v3; // rcx

  if ( qword_140C52B40 )
  {
    v3 = (struct _SLIST_ENTRY *)_InterlockedExchange64(&qword_140C52B40, 0LL);
    if ( v3 )
    {
      if ( a1 - (unsigned __int64)v3[1].Next > PfKernelGlobals || a2 )
        MiQueuePageAccessLog(v3);
      else
        MiReturnCcAccessLog(v3, 0);
    }
  }
}
