/*
 * XREFs of VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C001C300
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00ABA3C (VidSchiResumeFlipQueues.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00ABA9C (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiMarkFlipQueuesRunningStateOnPresentInfo(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1728), &LockHandle);
  v6 = *(_DWORD *)(a2 + 78584);
  if ( (_BYTE)v3 )
  {
    if ( !v6 )
    {
      WdLogSingleEntry5(0LL, 281LL, 4096LL, a1, a2, v3);
      __debugbreak();
      JUMPOUT(0x1C002C5C9LL);
    }
    v7 = v6 - 1;
    *(_DWORD *)(a2 + 78584) = v7;
    if ( !v7 )
      *(_BYTE *)(a2 + 78580) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 78580) = 0;
    *(_DWORD *)(a2 + 78584) = v6 + 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
