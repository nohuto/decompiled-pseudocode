/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x1403A00F4
 * Callers:
 *     MiEmptyAccessLogs @ 0x14039FF10 (MiEmptyAccessLogs.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x1402A50BC (MiQueuePageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x140318B04 (MiReturnCcAccessLog.c)
 */

void __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  _SLIST_ENTRY *v3; // rcx

  if ( qword_140C4E740 )
  {
    v3 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_140C4E740, 0LL);
    if ( v3 )
    {
      if ( a1 - (unsigned __int64)v3[1].Next > PfKernelGlobals || a2 )
        MiQueuePageAccessLog(v3);
      else
        MiReturnCcAccessLog((signed __int64)v3, 0);
    }
  }
}
