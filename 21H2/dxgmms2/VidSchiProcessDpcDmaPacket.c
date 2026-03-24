/*
 * XREFs of VidSchiProcessDpcDmaPacket @ 0x1C002FF94
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x1C002EE08 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007AC0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00095B0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C0012F8C (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0013370 (VidSchiProcessDpcSystemRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiProcessDpcDmaPacket(struct _VIDSCH_DMA_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  KSPIN_LOCK *v7; // rdi
  __int64 v8; // rax
  int v9; // ecx
  void (__fastcall *v10)(KSPIN_LOCK); // rax
  void (__fastcall *v11)(KSPIN_LOCK); // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 6);
  v5 = *(_QWORD *)(v3 + 96);
  v6 = *(unsigned int *)(v5 + 1408);
  v7 = *(KSPIN_LOCK **)(*(_QWORD *)(v3 + 104) + 32LL);
  if ( a1 != (struct _VIDSCH_DMA_PACKET *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)(v5 + 8 * v6 + 1416),
                                            0LL,
                                            (signed __int64)a1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v8 + 24) = v7;
    *(_QWORD *)(v8 + 32) = a1;
    WdLogEvent5_WdAssertion(v8);
  }
  _InterlockedExchange((volatile __int32 *)(v5 + 1408), ((_BYTE)v6 + 1) & 0xF);
  *(_DWORD *)(v5 + 496) = ((unsigned __int8)*(_DWORD *)(v5 + 496) + 1) & 0xF;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v7 + 214, &LockHandle);
  v9 = *((_DWORD *)a1 + 23);
  if ( (v9 & 0x400) != 0 )
  {
    v9 &= ~0x400u;
    *((_DWORD *)a1 + 23) = v9;
    if ( *(_DWORD *)(v5 + 11224) != -1 )
    {
      v10 = (void (__fastcall *)(KSPIN_LOCK))v7[374];
      if ( v10 )
      {
        v10(v7[378]);
        v9 = *((_DWORD *)a1 + 23);
      }
    }
  }
  if ( (v9 & 0x800) != 0 )
  {
    if ( *(_DWORD *)(v7[*(unsigned int *)(*((_QWORD *)a1 + 7) + 388LL) + 388] + 33288) != -1 )
    {
      v11 = (void (__fastcall *)(KSPIN_LOCK))v7[372];
      if ( v11 )
      {
        v11(v7[378]);
        v9 = *((_DWORD *)a1 + 23);
      }
    }
    *((_DWORD *)a1 + 23) = v9 & 0xFFFFF7FF;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_DWORD *)a1 + 22) == 3 )
  {
    VidSchiProcessDpcSystemRequest((__int64)a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 10 || *((_DWORD *)a1 + 18) == 18 )
  {
    VidSchiProcessDpcCompletedPacket(a1);
  }
  else if ( *((_DWORD *)a1 + 18) == 11 )
  {
    VidSchiProcessDpcPreemptedPacket((__int64)a1);
  }
  VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(*(_QWORD *)(v5 + 24) + 1720LL), v5 + 11232, (_QWORD *)a1 + 2, 0LL);
}
