/*
 * XREFs of VidSchIsSyncObjectSignaled @ 0x1C003D5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall VidSchIsSyncObjectSignaled(__int64 a1)
{
  KSPIN_LOCK *v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  bool v6; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 )
  {
    v3 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 8) + 1728LL);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(v3, &LockHandle);
    v6 = 0;
    if ( *(_DWORD *)(a1 + 48) == 2 )
    {
      if ( *(_BYTE *)(a1 + 27) )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 40LL);
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 32LL);
      }
      else
      {
        v4 = *(_QWORD *)(a1 + 64);
        v5 = *(_QWORD *)(a1 + 72);
      }
      if ( v4 <= v5 )
        v6 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v6;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL VIDSCH_SYNC_OBJECT pointer, returning FALSE",
      11691LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
