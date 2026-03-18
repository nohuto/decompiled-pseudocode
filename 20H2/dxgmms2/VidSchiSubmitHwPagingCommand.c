/*
 * XREFs of VidSchiSubmitHwPagingCommand @ 0x1C00D47E8
 * Callers:
 *     VidSchSubmitPagingCommand @ 0x1C007780C (VidSchSubmitPagingCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012118 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003BE54 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D43BC (VidSchiAllocateHwQueuePacket.c)
 */

void __fastcall VidSchiSubmitHwPagingCommand(__int64 a1, __int128 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *HwQueuePacket; // rax
  __int128 v7; // xmm0
  _QWORD *v8; // r8
  __int128 v9; // xmm1
  __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0

  v3 = VidSchiSchedulerNodeToDriverEngine(a1, *((_DWORD *)a2 + 19));
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 272) + 8LL * v3);
  HwQueuePacket = VidSchiAllocateHwQueuePacket(v5, 1);
  v7 = *a2;
  v8 = HwQueuePacket;
  v9 = a2[1];
  *(_DWORD *)HwQueuePacket = 895576406;
  *((_DWORD *)HwQueuePacket + 12) = 8;
  HwQueuePacket[7] = MEMORY[0xFFFFF78000000320];
  v10 = *(_QWORD *)a2;
  *((_DWORD *)v8 + 13) = 2;
  v8[12] = v5;
  CurrentThread = KeGetCurrentThread();
  *((_OWORD *)v8 + 17) = v7;
  v8[13] = CurrentThread;
  v12 = a2[2];
  *((_OWORD *)v8 + 18) = v9;
  v8[9] = v10;
  v13 = a2[3];
  *((_OWORD *)v8 + 19) = v12;
  v14 = a2[4];
  *((_OWORD *)v8 + 20) = v13;
  *(_QWORD *)&v13 = *((_QWORD *)a2 + 10);
  *((_OWORD *)v8 + 21) = v14;
  v8[44] = v13;
  VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v8);
}
