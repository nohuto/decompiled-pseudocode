/*
 * XREFs of AlpcpReceiveMessagePort @ 0x14060B9B0
 * Callers:
 *     AlpcpReceiveMessage @ 0x14060AA80 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140611980 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     AlpcpWaitForSingleObject @ 0x1403053E4 (AlpcpWaitForSingleObject.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpQueryHeadLargeQueue @ 0x14060C1C0 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpReferenceBlob @ 0x140610770 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064942C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1406C861C (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpLogReceiveMessage @ 0x1408BF440 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408BF588 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, unsigned __int8 a2, __int64 a3, ULONG_PTR *a4, LONG a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rsi
  volatile signed __int64 *v8; // r14
  int v9; // r12d
  int v10; // eax
  volatile signed __int64 *v11; // rbp
  ULONG_PTR HeadLargeQueue; // rdi
  ULONG_PTR v13; // rax
  signed __int64 BugCheckParameter4; // rax
  int v15; // eax
  __int64 result; // rax
  unsigned int v17; // edx
  int v18; // ecx
  _QWORD **v19; // rcx
  __int64 v20; // rax
  volatile signed __int64 *v21; // rdi
  struct _LIST_ENTRY *v22; // rdx
  LIST_ENTRY *p_WaitListHead; // rcx
  __int64 v24; // r8
  unsigned int v25; // ebp
  unsigned int v26; // edi
  __int64 v27; // rcx
  LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  ULONG_PTR v31; // rdi
  __int64 v32; // r8
  struct _KTHREAD *v33; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  v33 = CurrentThread;
  v8 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    ExAcquirePushLockSharedEx(v6 + 352, 0LL);
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 416);
        if ( (v10 & 0x40) != 0 )
        {
          v26 = -1073740032;
          goto LABEL_56;
        }
        if ( (v10 & 0x10) != 0 )
        {
          v26 = -1073741759;
          goto LABEL_56;
        }
        v11 = (volatile signed __int64 *)(v6 + 136);
        ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
        HeadLargeQueue = AlpcpQueryHeadLargeQueue(v6);
        if ( !HeadLargeQueue )
        {
          HeadLargeQueue = *(_QWORD *)(v6 + 144);
          if ( HeadLargeQueue == v6 + 144 || !HeadLargeQueue )
            break;
        }
        v13 = KeAbPreAcquire(HeadLargeQueue - 16, 0LL, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(HeadLargeQueue - 16), 0LL) )
        {
          if ( v13 )
            *(_BYTE *)(v13 + 26) |= 1u;
          *(_BYTE *)(HeadLargeQueue - 32) |= 1u;
          BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HeadLargeQueue - 24), 0x10000uLL)
                             + 0x10000;
          if ( BugCheckParameter4 <= 0 )
            KeBugCheckEx(0x18u, 0LL, HeadLargeQueue, 0x27uLL, BugCheckParameter4);
LABEL_12:
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 7) == 1 )
            --*(_DWORD *)(v6 + 448);
          else
            --*(_DWORD *)(v6 + 452);
          *(_DWORD *)(HeadLargeQueue + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(HeadLargeQueue + 16) = 0LL;
          **(_QWORD **)(HeadLargeQueue + 8) = *(_QWORD *)HeadLargeQueue;
          *(_QWORD *)(*(_QWORD *)HeadLargeQueue + 8LL) = *(_QWORD *)(HeadLargeQueue + 8);
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 0x200) == 0 )
            goto LABEL_15;
          v17 = (*(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 144) )
            v17 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
          v18 = v17 | 0x10000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 152) )
            v18 = v17;
          if ( (v18 & a5) != 0 )
          {
LABEL_15:
            *(_WORD *)(HeadLargeQueue + 244) |= 0x2000u;
            ExAcquirePushLockExclusiveEx(v6 + 176, 0LL);
            v15 = *(_DWORD *)(HeadLargeQueue + 40);
            *(_QWORD *)(HeadLargeQueue + 16) = v6;
            *(_DWORD *)(HeadLargeQueue + 40) = v15 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v6 + 416) & 6)) | 3;
            *(_QWORD *)(HeadLargeQueue + 8) = *(_QWORD *)(v6 + 192);
            *(_QWORD *)HeadLargeQueue = v6 + 184;
            **(_QWORD **)(v6 + 192) = HeadLargeQueue;
            ++*(_DWORD *)(v6 + 456);
            *(_QWORD *)(v6 + 192) = HeadLargeQueue;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v6 + 176);
            KeAbPostRelease(v6 + 176);
          }
          else
          {
            *(_WORD *)(HeadLargeQueue + 244) &= ~0x2000u;
            --*(_WORD *)(HeadLargeQueue - 30);
          }
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v6 + 136);
          KeAbPostRelease(v6 + 136);
          if ( v9 )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v6 + 352);
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          goto LABEL_24;
        }
        if ( v13 )
          KeAbPostReleaseEx(HeadLargeQueue - 16, v13);
        if ( !*(_QWORD *)(HeadLargeQueue + 96) )
        {
          AlpcpReferenceBlob(HeadLargeQueue);
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v6 + 136);
          KeAbPostRelease(v6 + 136);
          if ( v9 )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v6 + 352);
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          ExAcquirePushLockSharedEx(v6 + 352, 0LL);
          v9 = 0;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              goto LABEL_84;
          }
          else
          {
            ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
            if ( !AlpcpQueryHeadLargeQueue(v6) )
            {
              v27 = *(_QWORD *)(v6 + 144);
              if ( v27 == v6 + 144 || !v27 )
                v27 = 0LL;
              if ( HeadLargeQueue == v27 )
                goto LABEL_12;
            }
            if ( HeadLargeQueue == AlpcpQueryHeadLargeQueue(v6) )
              goto LABEL_12;
            if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v6 + 136);
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
LABEL_84:
              ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpUnlockMessage(HeadLargeQueue);
          CurrentThread = v33;
          goto LABEL_2;
        }
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v6 + 136);
        KeAbPostRelease(v6 + 136);
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v6 + 352);
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        CurrentThread = v33;
        v9 = 1;
      }
      v19 = *(_QWORD ***)(v6 + 384);
      if ( v19 != (_QWORD **)(v6 + 384) )
      {
        v31 = (ULONG_PTR)(v19 - 10);
        *v19[1] = *v19;
        (*v19)[1] = v19[1];
        --*(_DWORD *)(v6 + 464);
        AlpcpReferenceBlob((ULONG_PTR)(v19 - 10));
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v6 + 136);
        KeAbPostRelease(v6 + 136);
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v6 + 352);
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        AlpcpLockForCachedReferenceBlob(v31);
        *(_WORD *)(v31 - 30) -= 2;
        *a4 = v31;
        return 0LL;
      }
      v20 = *(_QWORD *)(v6 + 360);
      if ( v20 && (*(_QWORD *)(*(_QWORD *)(v20 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v6 + 136);
        KeAbPostRelease(v6 + 136);
        v26 = 1073741872;
LABEL_56:
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v6 + 352);
            KeAbPostRelease(v6 + 352);
            return v26;
          }
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        return v26;
      }
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6 + 136);
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_55;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v26 = 258;
        goto LABEL_56;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_55;
      if ( v9 )
      {
        v21 = (volatile signed __int64 *)(v6 + 224);
        CurrentThread[1].Timer.Header.LockNV = a5;
        ExAcquirePushLockExclusiveEx(v6 + 224, 0LL);
        v22 = *(struct _LIST_ENTRY **)(v6 + 240);
        p_WaitListHead = &CurrentThread[1].Timer.Header.WaitListHead;
        if ( v22->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
          goto LABEL_132;
        p_WaitListHead->Flink = (struct _LIST_ENTRY *)(v6 + 232);
        CurrentThread[1].Timer.Header.WaitListHead.Blink = v22;
        v22->Flink = p_WaitListHead;
        *(_QWORD *)(v6 + 240) = p_WaitListHead;
        if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v6 + 224);
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v6 + 352);
        KeAbPostRelease(v6 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v6);
        v25 = AlpcpCompleteDeferSignalRequestAndWait(a1, &CurrentThread[1].KernelStack, v24, a2, a3);
        if ( v25 )
        {
          ExAcquirePushLockExclusiveEx(v6 + 224, 0LL);
          v28 = &v33[1].Timer.Header.WaitListHead;
          Flink = v33[1].Timer.Header.WaitListHead.Flink;
          if ( Flink )
          {
            *(_QWORD *)&v33[1].Timer.Header.Lock = 0LL;
            Blink = v33[1].Timer.Header.WaitListHead.Blink;
            if ( Flink->Blink != v28 || Blink->Flink != v28 )
LABEL_132:
              __fastfail(3u);
            Blink->Flink = Flink;
            Flink->Blink = Blink;
            v28->Flink = 0LL;
            if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v21);
            KeAbPostRelease((ULONG_PTR)v21);
            return v25;
          }
          if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v21);
          KeAbPostRelease((ULONG_PTR)v21);
          AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
          HeadLargeQueue = *(_QWORD *)&v33[1].Timer.Header.Lock;
          *(_QWORD *)&v33[1].Timer.Header.Lock = 0LL;
          if ( !HeadLargeQueue )
            return v25;
LABEL_53:
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          *(_DWORD *)(HeadLargeQueue + 40) &= ~0x2000u;
LABEL_24:
          if ( AlpcpLogEnabled )
            AlpcpLogReceiveMessage(HeadLargeQueue);
          *a4 = HeadLargeQueue;
          return 0LL;
        }
        CurrentThread = v33;
        HeadLargeQueue = *(_QWORD *)&v33[1].Timer.Header.Lock;
        *(_QWORD *)&v33[1].Timer.Header.Lock = 0LL;
        if ( HeadLargeQueue )
          goto LABEL_53;
        goto LABEL_2;
      }
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) == 17 )
      {
        v9 = 1;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        v9 = 1;
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_55:
      v26 = -1073741823;
      goto LABEL_56;
    }
    if ( v9 )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6 + 352);
    }
    else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    }
    KeAbPostRelease(v6 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogWaitForNewMessage(v6);
    result = AlpcpCompleteDeferSignalRequestAndWait(a1, *(_QWORD *)(v6 + 248), v32, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
