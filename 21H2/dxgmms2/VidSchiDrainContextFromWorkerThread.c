/*
 * XREFs of VidSchiDrainContextFromWorkerThread @ 0x1C002F564
 * Callers:
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C00D45F8 (VidSchiCleanupPacket_PriorityTable.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x1C0013B00 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x1C00306A8 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C00307D4 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D04F0 (VidSchiSubmitQueueCommand.c)
 */

void __fastcall VidSchiDrainContextFromWorkerThread(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rdi
  _VIDSCH_QUEUE_PACKET *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  for ( i = *(_QWORD *)(v1 + 24); ; VidSchiProcessPrimariesTerminationList(i) )
  {
    v4 = (_VIDSCH_QUEUE_PACKET *)VidSchiReadCommandFromContextQueue(a1, 0LL, &v5);
    if ( !v4 )
      break;
    VidSchiSubmitQueueCommand(v4);
  }
  VidSchiSetTransferContextRunningTime(a1, 0LL, 0);
}
