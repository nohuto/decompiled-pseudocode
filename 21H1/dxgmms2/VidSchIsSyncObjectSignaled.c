/*
 * XREFs of VidSchIsSyncObjectSignaled @ 0x1C0035090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectSignaled(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v5; // rax
  unsigned __int64 v7; // rdx
  char v8; // al
  unsigned __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( a1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1712LL), &LockHandle);
    if ( *(_DWORD *)(a1 + 44) == 2 )
    {
      if ( *(_BYTE *)(a1 + 27) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 40LL);
        v8 = *(_BYTE *)(a1 + 27);
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 64);
        v8 = 0;
      }
      if ( v8 )
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 32LL);
      else
        v9 = *(_QWORD *)(a1 + 72);
      if ( v7 <= v9 )
        v3 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v3;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3);
    WdLogEvent5_WdAssertion(v5);
    return 0;
  }
}
