/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C000EE3C
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000EA80 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C001270C (VidSchiCreateContextInternal.c)
 *     VidSchEnqueueCpuEvent @ 0x1C007B880 (VidSchEnqueueCpuEvent.c)
 *     VidSchSubmitCommand @ 0x1C0096A70 (VidSchSubmitCommand.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  KSPIN_LOCK *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD **v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+60h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) )
  {
    v13 = *(_QWORD *)(a2 + 616);
    if ( v13 || *(_QWORD *)(a2 + 264) )
    {
      WdLogSingleEntry5(0LL, 281LL, 2560LL, a2, v13, *(_QWORD *)(a2 + 264));
      __debugbreak();
      JUMPOUT(0x1C001E10ALL);
    }
  }
  WdLogSingleEntry2(4LL, a2, a1);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a2 + 52) = 0;
  v5 = (KSPIN_LOCK *)(v4 + 1736);
  v6 = a2 + 8;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v5, &LockHandle);
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 )
    goto LABEL_25;
  v8 = *(_QWORD **)(a2 + 16);
  if ( *v8 != v6 )
    goto LABEL_25;
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( a1 != -776 )
    --*(_DWORD *)(a1 + 776);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (*(_DWORD *)(a2 + 64) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v5, a1 + 736, (_QWORD *)(a2 + 8), (_DWORD *)(a1 + 752));
    goto LABEL_11;
  }
  memset(&v16, 0, sizeof(v16));
  KeAcquireInStackQueuedSpinLock(v5, &v16);
  v9 = *(_QWORD **)(a1 + 720);
  if ( *v9 != a1 + 712 )
LABEL_25:
    __fastfail(3u);
  *(_QWORD *)v6 = a1 + 712;
  *(_QWORD *)(a2 + 16) = v9;
  *v9 = v6;
  *(_QWORD *)(a1 + 720) = v6;
  if ( a1 != -728 )
    ++*(_DWORD *)(a1 + 728);
  KeReleaseInStackQueuedSpinLock(&v16);
LABEL_11:
  if ( (*(_DWORD *)(a2 + 64) & 0x40) == 0 )
  {
    v10 = (_QWORD **)(a1 + 712);
    while ( 1 )
    {
      memset(&v17, 0, sizeof(v17));
      v11 = 0LL;
      KeAcquireInStackQueuedSpinLock(v5, &v17);
      v12 = *v10;
      if ( *v10 != v10 && *(_DWORD *)(a1 + 728) > 0x10u )
      {
        v11 = *v10;
        if ( (_QWORD **)v12[1] != v10 )
          goto LABEL_25;
        v14 = (_QWORD *)*v12;
        if ( (_QWORD *)v14[1] != v11 )
          goto LABEL_25;
        *v10 = v14;
        v14[1] = v10;
        --*(_DWORD *)(a1 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v17);
      if ( !v11 )
        return;
      ExFreePoolWithTag(v11 - 1, 0);
    }
  }
}
