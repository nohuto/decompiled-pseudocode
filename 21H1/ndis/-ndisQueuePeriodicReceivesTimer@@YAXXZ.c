/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00A36E8
 * Callers:
 *     ndisQueueDpcWorkItem @ 0x1C0066930 (ndisQueueDpcWorkItem.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00A31E8 (ndisMQueueReceiveNetBufferLists.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A35F0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)qword_1C00E3FF8 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0.QuadPart = qword_1C00E3FE8;
    if ( !qword_1C00E3FE8 )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C00E3FF0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v0,
      (PKDPC)qword_1C00E3FF0 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
}
