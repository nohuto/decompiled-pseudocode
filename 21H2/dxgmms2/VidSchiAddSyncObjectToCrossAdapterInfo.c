/*
 * XREFs of VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C002F018
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C0083960 (VidSchCreateSyncObject.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAddSyncObjectToCrossAdapterInfo(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 208) + 8LL), &LockHandle);
  _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 208));
  v2 = (_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 208) + 16LL;
  v4 = *(_QWORD *)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 152) = v3;
  *v2 = v4;
  *(_QWORD *)(v4 + 8) = v2;
  *(_QWORD *)v3 = v2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
