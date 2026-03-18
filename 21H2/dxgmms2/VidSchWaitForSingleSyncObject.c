/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x1C0004DF0
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00DC7D4 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1C00F5BEC (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiAcquireSyncObject @ 0x1C00051F0 (VidSchiAcquireSyncObject.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0005B60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006900 (VidSchiSubmitCommandPacketToQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0097180 (VidSchiAllocateQueuePacket.c)
 *     ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C00A680C (-GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ.c)
 */

__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  int v7; // eax
  __int64 QueuePacket; // rax
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  int v12; // r13d
  KSPIN_LOCK *v13; // r12
  __int64 v14; // rcx
  _QWORD *v15; // rax
  KSPIN_LOCK *v16; // rcx
  __int64 *v17; // rax
  _QWORD **v18; // rbx
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  VIDMM_PAGING_QUEUE *v22; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v33; // [rsp+68h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v34; // [rsp+80h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+98h] [rbp-40h] BYREF

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 == 5 )
  {
    if ( *(_BYTE *)(a2 + 28) )
      return 3221225760LL;
  }
  else if ( v7 != 4 || *(_BYTE *)(a2 + 28) )
  {
    goto LABEL_5;
  }
  v22 = *(VIDMM_PAGING_QUEUE **)(a2 + 80);
  if ( v22 )
  {
    CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v22);
    v25 = CurrentPagingFenceId;
    if ( *(_BYTE *)(v24 + 29) )
    {
      if ( a3 > CurrentPagingFenceId )
        goto LABEL_40;
    }
    else if ( (int)a3 - (int)CurrentPagingFenceId > 0 )
    {
LABEL_40:
      if ( KdRefreshDebuggerNotPresent() )
      {
        WdLogSingleEntry3(1LL, a3, *(_QWORD *)(v4 + 80), v25);
        ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid monitored fence 0x%I64x for paging queue 0x%p. PagingQueueFence=0x%I64x",
          a3,
          *(_QWORD *)(v4 + 80),
          v25,
          0LL,
          0LL);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "A request was made to wait on monitored fence 0x%I64x on paging queue 0x%p,\n"
          "but the paging queue has not generated that fence. This wait breaks the ordered wait\n"
          "contract imposed on paging queues, and cannot be placed in the queue. The paging\n"
          "queue's most recently generated fence value is 0x%I64x\n",
          a3,
          *(const void **)(v4 + 80),
          v25);
        __debugbreak();
      }
      return 3221225485LL;
    }
  }
LABEL_5:
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 796) == 0);
  v9 = QueuePacket;
  if ( !QueuePacket )
  {
    WdLogSingleEntry2(1LL, -1073741801LL, 10742LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate queue packet, returning 0x%I64x",
      -1073741801LL,
      10742LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  *(_DWORD *)QueuePacket = 895576406;
  *(_DWORD *)(QueuePacket + 48) = 4;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_QWORD *)(QueuePacket + 88) = a1;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(v9 + 272) &= ~1u;
  *(_QWORD *)(v9 + 104) = CurrentThread;
  *(_QWORD *)(v9 + 72) = 0LL;
  v11 = *(_DWORD *)(v4 + 48);
  if ( v11 == 2 )
  {
    *(_QWORD *)(v9 + 304) = a3;
  }
  else if ( (unsigned int)(v11 - 4) <= 1 )
  {
    *(_QWORD *)(v9 + 304) = a3;
    WdLogSingleEntry3(4LL, v4, a3, a1);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1728), &LockHandle);
  *(_QWORD *)(v9 + 280) = v4;
  v12 = VidSchiAcquireSyncObject(a1, v4, v9);
  if ( v12 >= 0 && (*(_DWORD *)(v9 + 272) & 1) == 0 )
  {
    if ( !*(_BYTE *)(v4 + 26) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToQueue(v9);
      return 0LL;
    }
    v26 = MEMORY[0xFFFFF78000000320];
    v27 = *(_QWORD *)(v9 + 88);
    *(_DWORD *)(v9 + 64) |= 0x10u;
    *(_QWORD *)(v9 + 56) = v26;
    *(_DWORD *)(v9 + 52) = 17;
    v28 = (_QWORD *)(v9 + 32);
    v29 = *(_QWORD **)(v27 + 704);
    if ( *v29 == v27 + 696 )
    {
      *v28 = v27 + 696;
      v28[1] = v29;
      *v29 = v28;
      *(_QWORD *)(v27 + 704) = v28;
      ++*(_DWORD *)(v27 + 804);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    goto LABEL_54;
  }
  v13 = *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_DWORD *)(v9 + 48) || (v30 = *(_QWORD *)(v9 + 616)) == 0 && !*(_QWORD *)(v9 + 264) )
  {
    WdLogSingleEntry2(4LL, v9, a1);
    *(_QWORD *)(v9 + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v9 + 52) = 0;
    v13 += 217;
    v4 = v9 + 8;
    memset(&v34, 0, sizeof(v34));
    KeAcquireInStackQueuedSpinLock(v13, &v34);
    v14 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == v4 )
    {
      v15 = *(_QWORD **)(v9 + 16);
      if ( *v15 == v4 )
      {
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        if ( a1 != -776 )
          --*(_DWORD *)(a1 + 776);
        KeReleaseInStackQueuedSpinLock(&v34);
        v16 = v13;
        if ( (*(_DWORD *)(v9 + 64) & 0x40) != 0 )
          goto LABEL_48;
        memset(&v35, 0, sizeof(v35));
        KeAcquireInStackQueuedSpinLock(v13, &v35);
        v17 = *(__int64 **)(a1 + 720);
        if ( *v17 == a1 + 712 )
        {
          *(_QWORD *)v4 = a1 + 712;
          *(_QWORD *)(v9 + 16) = v17;
          *v17 = v4;
          *(_QWORD *)(a1 + 720) = v4;
          if ( a1 != -728 )
            ++*(_DWORD *)(a1 + 728);
          KeReleaseInStackQueuedSpinLock(&v35);
          goto LABEL_21;
        }
      }
    }
LABEL_54:
    __fastfail(3u);
  }
  WdLogSingleEntry5(0LL, 281LL, 2560LL, v9, v30, *(_QWORD *)(v9 + 264));
  __debugbreak();
LABEL_48:
  VidSchiInterlockedInsertTailList(v16, a1 + 736, v4, a1 + 752);
LABEL_21:
  if ( (*(_DWORD *)(v9 + 64) & 0x40) == 0 )
  {
    v18 = (_QWORD **)(a1 + 712);
    while ( 1 )
    {
      memset(&v33, 0, sizeof(v33));
      v19 = 0LL;
      KeAcquireInStackQueuedSpinLock(v13, &v33);
      v20 = *v18;
      if ( *v18 == v18 )
        break;
      if ( *(_DWORD *)(a1 + 728) > 0x10u )
      {
        v19 = *v18;
        if ( (_QWORD **)v20[1] != v18 )
          goto LABEL_54;
        v31 = (_QWORD *)*v20;
        if ( (_QWORD *)v31[1] != v19 )
          goto LABEL_54;
        *v18 = v31;
        v31[1] = v18;
        --*(_DWORD *)(a1 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v33);
      if ( !v19 )
        goto LABEL_26;
      ExFreePoolWithTag(v19 - 1, 0);
    }
    KeReleaseInStackQueuedSpinLock(&v33);
  }
LABEL_26:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v12;
}
