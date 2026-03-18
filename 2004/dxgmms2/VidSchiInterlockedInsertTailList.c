/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x1C0007330
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005D70 (VidSchWaitForSingleSyncObject.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009640 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCreateContextInternal @ 0x1C000FF50 (VidSchiCreateContextInternal.c)
 *     VidSchiFreeQueuePacket @ 0x1C00108A8 (VidSchiFreeQueuePacket.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C002A3C4 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002FFE4 (VidSchiProcessDpcDmaPacket.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037AC0 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0039C00 (VidSchCreateHwQueue.c)
 *     VidSchSubmitCommand @ 0x1C007E4E0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007EB40 (VidSchiAllocateQueuePacket.c)
 *     VidSchiCreateDeviceInternal @ 0x1C007FCA0 (VidSchiCreateDeviceInternal.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0080D40 (VidSchRegisterCompletionEvent.c)
 *     VidSchiCreateNode @ 0x1C008E35C (VidSchiCreateNode.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D49BC (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *a3 = a2;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
