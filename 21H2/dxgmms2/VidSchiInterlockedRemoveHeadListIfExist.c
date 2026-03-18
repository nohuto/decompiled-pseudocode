/*
 * XREFs of VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0005BF0
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000AEB0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C0013610 (VidSchiDecrementContextReference.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C001C0F8 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     ?VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z @ 0x1C003FE50 (-VidSchiDecrementHwQueueReference@@YAXPEAUVIDSCH_HW_QUEUE@@_N@Z.c)
 *     VidSchiSubmitPagingCommand @ 0x1C00959B0 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0096600 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSubmitCommand @ 0x1C0096A70 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0097180 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateDmaPacket @ 0x1C009AA58 (VidSchiAllocateDmaPacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00B8D3A (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VidSchiInterlockedRemoveHeadListIfExist(KSPIN_LOCK *a1, _QWORD **a2, _DWORD *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v6 = *a2;
  if ( *a2 != a2 )
  {
    v5 = *a2;
    if ( (_QWORD **)v6[1] != a2 || (v7 = (_QWORD *)*v6, (_QWORD *)v7[1] != v5) )
      __fastfail(3u);
    *a2 = v7;
    v7[1] = a2;
    if ( a3 )
      --*a3;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
