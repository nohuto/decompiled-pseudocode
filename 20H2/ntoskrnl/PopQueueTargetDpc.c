/*
 * XREFs of PopQueueTargetDpc @ 0x14033E800
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x14033E6D0 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x14033E7B0 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140287E80 (KeEnumerateNextProcessor.c)
 */

BOOLEAN __fastcall PopQueueTargetDpc(PRKDPC Dpc, __int64 a2)
{
  unsigned __int16 **v4; // rdx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 ***)(a2 + 32);
  v6 = 0;
  if ( (int)KeEnumerateNextProcessor(&v6, v4) < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  Dpc->TargetInfoAsUlong = 787;
  Dpc->DeferredRoutine = (PKDEFERRED_ROUTINE)PopExecuteProcessorCallback;
  Dpc->DeferredContext = (PVOID)a2;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  if ( !Dpc->DpcData )
    Dpc->Number = v6 + 1280;
  return KeInsertQueueDpc(Dpc, 0LL, 0LL);
}
