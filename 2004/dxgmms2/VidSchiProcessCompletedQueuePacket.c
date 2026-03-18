/*
 * XREFs of VidSchiProcessCompletedQueuePacket @ 0x1C001510C
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008D290 (VidSchiRun_PriorityTable.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00D0EEC (VidSchiDiscardQueuePacket.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D1920 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  struct _VIDSCH_QUEUE_PACKET *result; // rax

  result = a1;
  do
    result = VidSchiProcessCompletedQueuePacketInternal(result, a2, a3);
  while ( result );
  return result;
}
