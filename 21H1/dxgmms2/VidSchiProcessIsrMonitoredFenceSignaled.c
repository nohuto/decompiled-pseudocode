/*
 * XREFs of VidSchiProcessIsrMonitoredFenceSignaled @ 0x1C003B6A8
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000D330 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall VidSchiProcessIsrMonitoredFenceSignaled(__int64 a1)
{
  union _SLIST_HEADER *v1; // rdi
  PSLIST_ENTRY v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax

  v1 = *(union _SLIST_HEADER **)(a1 + 24);
  v3 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 2912));
  if ( v3 )
  {
    v3[2].Next = (struct _SLIST_ENTRY *)a1;
    LODWORD(v3->Next) = 11;
    return ExpInterlockedPushEntrySList(v1 + 110, v3 + 1);
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = *(unsigned __int16 *)(a1 + 4);
    return (PSLIST_ENTRY)WdLogEvent5_WdAssertion(v8);
  }
}
