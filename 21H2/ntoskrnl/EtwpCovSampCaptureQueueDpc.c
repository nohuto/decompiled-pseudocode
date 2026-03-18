/*
 * XREFs of EtwpCovSampCaptureQueueDpc @ 0x140460D60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlpInterlockedFlushSList @ 0x140429900 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampPushListSList @ 0x140460ED0 (EtwpCovSampPushListSList.c)
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
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)DeferredContext + 51);
  if ( v5 )
  {
    if ( !EtwpCovSampPushListSList(DeferredContext + 832, v5, &v6) )
      KeSetEvent((PRKEVENT)(DeferredContext + 848), *((_DWORD *)DeferredContext + 262), 0);
  }
}
