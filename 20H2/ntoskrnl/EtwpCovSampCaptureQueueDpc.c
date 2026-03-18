/*
 * XREFs of EtwpCovSampCaptureQueueDpc @ 0x1405AD6D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     RtlpInterlockedFlushSList @ 0x140405340 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampPushListSList @ 0x1405ADD90 (EtwpCovSampPushListSList.c)
 */

void __fastcall EtwpCovSampCaptureQueueDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PSLIST_ENTRY v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)DeferredContext + 44);
  if ( v5 )
  {
    if ( !EtwpCovSampPushListSList(DeferredContext + 720, v5, &v6) )
      KeSetEvent((PRKEVENT)(DeferredContext + 736), *((_DWORD *)DeferredContext + 234), 0);
  }
}
