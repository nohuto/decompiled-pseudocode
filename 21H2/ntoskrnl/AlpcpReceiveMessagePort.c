/*
 * XREFs of AlpcpReceiveMessagePort @ 0x1406D8320
 * Callers:
 *     AlpcpReceiveMessage @ 0x1406D73D0 (AlpcpReceiveMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1406D9F00 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     AlpcpWaitForSingleObject @ 0x140234DD8 (AlpcpWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     AlpcpQueryHeadCanceledQueue @ 0x1405CF074 (AlpcpQueryHeadCanceledQueue.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1405F8A60 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpReferenceBlob @ 0x140655834 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1406D0224 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpQueryHeadLargeQueue @ 0x1406D89A0 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406D89C0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     AlpcpUnlockPortShared @ 0x1408C2650 (AlpcpUnlockPortShared.c)
 *     AlpcpLockPortExclusive @ 0x1408C306C (AlpcpLockPortExclusive.c)
 *     AlpcpUnlockIncomingQueue @ 0x1408C30C0 (AlpcpUnlockIncomingQueue.c)
 *     AlpcpUnlockPortExclusive @ 0x1408C30FC (AlpcpUnlockPortExclusive.c)
 *     AlpcpLogReceiveMessage @ 0x1408C3EF0 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x1408C4038 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(__int64 *a1, unsigned __int8 a2, LARGE_INTEGER *a3, ULONG_PTR *a4, LONG a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // eax
  ULONG_PTR HeadLargeQueue; // rsi
  _QWORD *HeadCanceledQueue; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rax
  volatile signed __int64 *v14; // rsi
  struct _LIST_ENTRY *v15; // rdx
  LIST_ENTRY *p_WaitListHead; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebp
  __int64 v19; // r8
  __int64 result; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  unsigned int v26; // edx
  int v27; // ecx
  int v28; // eax

  CurrentThread = KeGetCurrentThread();
  v7 = *a1;
LABEL_2:
  while ( 2 )
  {
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v7 + 416);
      if ( (v9 & 0x40) != 0 )
      {
        v22 = -1073740032;
        goto LABEL_94;
      }
      if ( (v9 & 0x10) != 0 )
      {
        v22 = -1073741759;
        goto LABEL_94;
      }
      ExAcquirePushLockExclusiveEx(v7 + 136, 0LL);
      HeadLargeQueue = AlpcpQueryHeadLargeQueue(v7);
      if ( HeadLargeQueue )
        break;
      HeadLargeQueue = *(_QWORD *)(v7 + 144);
      if ( HeadLargeQueue != v7 + 144 )
      {
        if ( HeadLargeQueue )
          break;
      }
      HeadCanceledQueue = AlpcpQueryHeadCanceledQueue(v7);
      v12 = HeadCanceledQueue;
      if ( HeadCanceledQueue )
      {
        if ( (unsigned __int8)AlpcpTryLockForCachedReferenceBlob((ULONG_PTR)HeadCanceledQueue) )
        {
          *((_DWORD *)v12 + 10) &= ~0x10000u;
          *(_QWORD *)v12[11] = v12[10];
          *(_QWORD *)(v12[10] + 8LL) = v12[11];
          --*(_DWORD *)(v7 + 464);
          AlpcpUnlockIncomingQueue(v7);
          if ( v8 )
            AlpcpUnlockPortExclusive(v7);
          else
            AlpcpUnlockPortShared(v7);
          --*((_WORD *)v12 - 15);
          *a4 = (ULONG_PTR)v12;
          return 0LL;
        }
LABEL_10:
        AlpcpUnlockIncomingQueue(v7);
        if ( v8 )
          AlpcpUnlockPortExclusive(v7);
        else
          AlpcpUnlockPortShared(v7);
        AlpcpLockPortExclusive(v7);
        v8 = 1;
      }
      else
      {
        v13 = *(_QWORD *)(v7 + 360);
        if ( v13 && (*(_QWORD *)(*(_QWORD *)(v13 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
        {
          AlpcpUnlockIncomingQueue(v7);
          v22 = 1073741872;
LABEL_94:
          if ( v8 )
            AlpcpUnlockPortExclusive(v7);
          else
            AlpcpUnlockPortShared(v7);
          return v22;
        }
        AlpcpUnlockIncomingQueue(v7);
        if ( *(_QWORD *)(v7 + 32) )
          goto LABEL_72;
        if ( (*(_DWORD *)(v7 + 416) & 0x200) != 0 )
        {
          if ( (*(_DWORD *)(v7 + 256) & 0x1000) == 0 )
          {
LABEL_72:
            v22 = -1073741823;
            goto LABEL_94;
          }
          if ( v8 )
            AlpcpUnlockPortExclusive(v7);
          else
            AlpcpUnlockPortShared(v7);
          if ( AlpcpLogEnabled )
            AlpcpLogWaitForNewMessage(v7);
          result = AlpcpCompleteDeferSignalRequestAndWait((__int64)a1, *(void **)(v7 + 248), v19, a2, a3);
          if ( (_DWORD)result )
            return result;
          goto LABEL_2;
        }
        if ( *(_QWORD *)(v7 + 368) )
        {
          v22 = 258;
          goto LABEL_94;
        }
        if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
          goto LABEL_72;
        if ( v8 )
        {
          v14 = (volatile signed __int64 *)(v7 + 224);
          CurrentThread[1].Timer.Header.LockNV = a5;
          ExAcquirePushLockExclusiveEx(v7 + 224, 0LL);
          v15 = *(struct _LIST_ENTRY **)(v7 + 240);
          p_WaitListHead = &CurrentThread[1].Timer.Header.WaitListHead;
          if ( v15->Flink != (struct _LIST_ENTRY *)(v7 + 232) )
            goto LABEL_70;
          p_WaitListHead->Flink = (struct _LIST_ENTRY *)(v7 + 232);
          CurrentThread[1].Timer.Header.WaitListHead.Blink = v15;
          v15->Flink = p_WaitListHead;
          *(_QWORD *)(v7 + 240) = p_WaitListHead;
          if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v7 + 224);
          KeAbPostRelease(v7 + 224);
          AlpcpUnlockPortExclusive(v7);
          if ( AlpcpLogEnabled )
            AlpcpLogWaitForNewMessage(v7);
          v18 = AlpcpCompleteDeferSignalRequestAndWait((__int64)a1, &CurrentThread[1].KernelStack, v17, a2, a3);
          if ( v18 )
          {
            ExAcquirePushLockExclusiveEx(v7 + 224, 0LL);
            v23 = &CurrentThread[1].Timer.Header.WaitListHead;
            Flink = CurrentThread[1].Timer.Header.WaitListHead.Flink;
            if ( Flink )
            {
              *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
              Blink = CurrentThread[1].Timer.Header.WaitListHead.Blink;
              if ( Flink->Blink != v23 || Blink->Flink != v23 )
LABEL_70:
                __fastfail(3u);
              Blink->Flink = Flink;
              Flink->Blink = Blink;
              v23->Flink = 0LL;
              if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v7 + 224);
              KeAbPostRelease(v7 + 224);
            }
            else
            {
              if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v7 + 224);
              KeAbPostRelease(v7 + 224);
              AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
              HeadLargeQueue = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
              *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
              if ( HeadLargeQueue )
              {
LABEL_69:
                AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
                --*(_WORD *)(HeadLargeQueue - 30);
                *(_DWORD *)(HeadLargeQueue + 40) &= ~0x2000u;
                goto LABEL_89;
              }
            }
            return v18;
          }
          HeadLargeQueue = *(_QWORD *)&CurrentThread[1].Timer.Header.Lock;
          *(_QWORD *)&CurrentThread[1].Timer.Header.Lock = 0LL;
          if ( HeadLargeQueue )
            goto LABEL_69;
          goto LABEL_2;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 352), 1LL, 17LL) != 17 )
        {
          AlpcpUnlockPortShared(v7);
          AlpcpLockPortExclusive(v7);
        }
        v8 = 1;
      }
    }
    if ( (unsigned __int8)AlpcpTryLockForCachedReferenceBlob(HeadLargeQueue) )
      goto LABEL_73;
    if ( *(_QWORD *)(HeadLargeQueue + 96) )
      goto LABEL_10;
    AlpcpReferenceBlob(HeadLargeQueue);
    AlpcpUnlockIncomingQueue(v7);
    if ( v8 )
      AlpcpUnlockPortExclusive(v7);
    else
      AlpcpUnlockPortShared(v7);
    AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
    --*(_WORD *)(HeadLargeQueue - 30);
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    v8 = 0;
    if ( (*(_DWORD *)(v7 + 416) & 0x50) != 0 )
    {
LABEL_53:
      AlpcpUnlockPortShared(v7);
      AlpcpUnlockMessage(HeadLargeQueue);
      continue;
    }
    break;
  }
  ExAcquirePushLockExclusiveEx(v7 + 136, 0LL);
  if ( AlpcpQueryHeadLargeQueue(v7) )
    goto LABEL_51;
  v21 = *(_QWORD *)(v7 + 144);
  if ( v21 == v7 + 144 || !v21 )
    v21 = 0LL;
  if ( HeadLargeQueue != v21 )
  {
LABEL_51:
    if ( HeadLargeQueue != AlpcpQueryHeadLargeQueue(v7) )
    {
      AlpcpUnlockIncomingQueue(v7);
      goto LABEL_53;
    }
  }
LABEL_73:
  if ( (*(_DWORD *)(HeadLargeQueue + 40) & 7) == 1 )
    --*(_DWORD *)(v7 + 448);
  else
    --*(_DWORD *)(v7 + 452);
  *(_DWORD *)(HeadLargeQueue + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(HeadLargeQueue + 16) = 0LL;
  **(_QWORD **)(HeadLargeQueue + 8) = *(_QWORD *)HeadLargeQueue;
  *(_QWORD *)(*(_QWORD *)HeadLargeQueue + 8LL) = *(_QWORD *)(HeadLargeQueue + 8);
  if ( (*(_DWORD *)(HeadLargeQueue + 40) & 0x200) == 0 )
    goto LABEL_83;
  v26 = (*(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
  if ( !*(_QWORD *)(HeadLargeQueue + 144) )
    v26 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
  v27 = v26 | 0x10000000;
  if ( !*(_QWORD *)(HeadLargeQueue + 152) )
    v27 = v26;
  if ( (v27 & a5) != 0 )
  {
LABEL_83:
    *(_WORD *)(HeadLargeQueue + 244) |= 0x2000u;
    ExAcquirePushLockExclusiveEx(v7 + 176, 0LL);
    v28 = *(_DWORD *)(HeadLargeQueue + 40);
    *(_QWORD *)(HeadLargeQueue + 16) = v7;
    *(_DWORD *)(HeadLargeQueue + 40) = v28 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v7 + 416) & 6)) | 3;
    *(_QWORD *)(HeadLargeQueue + 8) = *(_QWORD *)(v7 + 192);
    *(_QWORD *)HeadLargeQueue = v7 + 184;
    **(_QWORD **)(v7 + 192) = HeadLargeQueue;
    ++*(_DWORD *)(v7 + 456);
    *(_QWORD *)(v7 + 192) = HeadLargeQueue;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v7 + 176);
    KeAbPostRelease(v7 + 176);
  }
  else
  {
    *(_WORD *)(HeadLargeQueue + 244) &= ~0x2000u;
    --*(_WORD *)(HeadLargeQueue - 30);
  }
  AlpcpUnlockIncomingQueue(v7);
  if ( v8 )
    AlpcpUnlockPortExclusive(v7);
  else
    AlpcpUnlockPortShared(v7);
LABEL_89:
  if ( AlpcpLogEnabled )
    AlpcpLogReceiveMessage(HeadLargeQueue);
  *a4 = HeadLargeQueue;
  return 0LL;
}
