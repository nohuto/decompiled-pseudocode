/*
 * XREFs of VidSchiInterlockedRemoveEntryList @ 0x1C0012F6C
 * Callers:
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037AC0 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchSubmitCommand @ 0x1C007E4E0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007EB40 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C008067C (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C00806E0 (VidSchWaitForQueuedPresentLimit.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0080AD8 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00B8C88 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C00D2320 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchUnregisterCompletionEvent @ 0x1C00D4500 (VidSchUnregisterCompletionEvent.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00D49BC (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiInterlockedRemoveEntryList(KSPIN_LOCK *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  bool v7; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v5 = (_QWORD *)*a2;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v7 = v6 == v5;
  if ( a3 )
    --*a3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v7;
}
