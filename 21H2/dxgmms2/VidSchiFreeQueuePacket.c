/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C0011100
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007BD0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiCreateContextInternal @ 0x1C00107A8 (VidSchiCreateContextInternal.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0010DD0 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00D1030 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007AC0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C00112D0 (VidSchiInterlockedRemoveEntryList.c)
 */

void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // rsi
  KSPIN_LOCK *v7; // r15
  _QWORD *v8; // rax
  _QWORD **v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 608) || *(_QWORD *)(a2 + 264)) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v13[3] = 281LL;
    v13[4] = 2560LL;
    v13[5] = a2;
    v13[6] = *(_QWORD *)(a2 + 608);
    v13[7] = *(_QWORD *)(a2 + 264);
    WdLogEvent5_WdCriticalError(v13);
    __debugbreak();
    JUMPOUT(0x1C001FCB2LL);
  }
  v5 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = a1;
  WdLogEvent5_WdEvent(v5);
  v6 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v7 = (KSPIN_LOCK *)(v4 + 1720);
  *(_DWORD *)(a2 + 52) = 0;
  VidSchiInterlockedRemoveEntryList(v7, a2 + 8, a1 + 776);
  if ( (*(_DWORD *)(a2 + 64) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v7, a1 + 736, (_QWORD *)(a2 + 8), (_DWORD *)(a1 + 752));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
    v8 = *(_QWORD **)(a1 + 720);
    if ( *v8 != a1 + 712 )
LABEL_21:
      __fastfail(3u);
    *v6 = a1 + 712;
    *(_QWORD *)(a2 + 16) = v8;
    *v8 = v6;
    *(_QWORD *)(a1 + 720) = v6;
    if ( a1 != -728 )
      ++*(_DWORD *)(a1 + 728);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( (*(_DWORD *)(a2 + 64) & 0x40) == 0 )
  {
    v9 = (_QWORD **)(a1 + 712);
    while ( 1 )
    {
      v10 = 0LL;
      KeAcquireInStackQueuedSpinLock(v7, &v15);
      v11 = *v9;
      if ( *v9 != v9 && *(_DWORD *)(a1 + 728) > 0x10u )
      {
        v10 = *v9;
        if ( (_QWORD **)v11[1] != v9 )
          goto LABEL_21;
        v12 = (_QWORD *)*v11;
        if ( (_QWORD *)v12[1] != v10 )
          goto LABEL_21;
        *v9 = v12;
        v12[1] = v9;
        --*(_DWORD *)(a1 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v15);
      if ( !v10 )
        return;
      ExFreePoolWithTag(v10 - 1, 0);
    }
  }
}
