/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00A3BA8
 * Callers:
 *     ndisQueueDpcWorkItem @ 0x1C0066FF0 (ndisQueueDpcWorkItem.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00A36A8 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A3AB0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)qword_1C00E4138 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0.QuadPart = qword_1C00E4128;
    if ( !qword_1C00E4128 )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C00E4130 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v0,
      (PKDPC)qword_1C00E4130 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
}
