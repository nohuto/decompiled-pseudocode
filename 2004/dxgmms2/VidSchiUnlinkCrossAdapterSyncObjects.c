/*
 * XREFs of VidSchiUnlinkCrossAdapterSyncObjects @ 0x1C00320CC
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00D2940 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUnlinkCrossAdapterSyncObjects(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  struct _KLOCK_QUEUE_HANDLE v6; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  v1 = (_QWORD *)(a1 + 1688);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 3088), &LockHandle);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v3 = i - 6;
    if ( *(i - 6) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(i[2] + 8LL), &v6);
      v4 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v6);
      *v3 = 0LL;
      *(i - 5) = 0LL;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
