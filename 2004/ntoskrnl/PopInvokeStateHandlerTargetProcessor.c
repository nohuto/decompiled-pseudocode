/*
 * XREFs of PopInvokeStateHandlerTargetProcessor @ 0x140990090
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopHandleNextState @ 0x140990110 (PopHandleNextState.c)
 */

void __fastcall PopInvokeStateHandlerTargetProcessor(
        struct _KDPC *Dpc,
        _SLIST_HEADER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // r8
  _SLIST_ENTRY v6[9]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v6, 0, sizeof(v6));
  RtlpInterlockedPushEntrySList(DeferredContext + 4, &v6[8]);
  do
    PopHandleNextState(DeferredContext, v6, v5);
  while ( LODWORD(v6[0].Next) != 16 );
}
