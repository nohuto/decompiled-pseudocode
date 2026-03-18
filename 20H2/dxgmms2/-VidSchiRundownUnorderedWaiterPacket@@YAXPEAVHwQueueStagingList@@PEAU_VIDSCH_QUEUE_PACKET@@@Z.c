/*
 * XREFs of ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002BB64
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0010888 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C00313A8 (VidSchiRundownUnorderedWaiterContext.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C00313F4 (VidSchiRundownUnorderedWaiterDevice.c)
 *     ?VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0032F8C (-VidSchiRundownUnorderedWaiterHwQueue@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000FC44 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0016464 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterPacket(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        __int64 a3)
{
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *((_DWORD *)a2 + 12) == 4 )
  {
    v3 = *((_DWORD *)a2 + 68);
    LOBYTE(a3) = 1;
    if ( (v3 & 1) == 0 )
    {
      if ( (v3 & 4) != 0 )
      {
        VidSchiUnblockUnorderedWaitQueuePacket((__int64)a1, (__int64)a2, 1);
      }
      else if ( (v3 & 8) != 0 )
      {
        v4 = *((_QWORD *)a2 + 11);
        if ( v4 )
          v5 = *(_QWORD *)(v4 + 104);
        else
          v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 40LL) + 8LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + 32) + 2940LL) & 1) != 0 )
          VidSchiUnwaitWaitQueuePacket((__int64)a1, (__int64)a2, a3, 0LL);
      }
    }
  }
}
