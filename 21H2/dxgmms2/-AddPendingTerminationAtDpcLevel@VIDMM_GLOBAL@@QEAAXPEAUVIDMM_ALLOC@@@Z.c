/*
 * XREFs of ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0017E80
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00097D0 (VidSchiCheckPendingDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C002D814 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_GLOBAL *v4; // rbx
  VIDMM_GLOBAL **v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 5545, &LockHandle);
  v4 = (struct VIDMM_ALLOC *)((char *)a2 + 200);
  v5 = (VIDMM_GLOBAL **)*((_QWORD *)this + 5547);
  if ( *v5 != (VIDMM_GLOBAL *)((char *)this + 44368) )
    __fastfail(3u);
  *(_QWORD *)v4 = (char *)this + 44368;
  *((_QWORD *)v4 + 1) = v5;
  *v5 = v4;
  *((_QWORD *)this + 5547) = v4;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeSetEvent(*((PRKEVENT *)this + 5544), 0, 0);
}
