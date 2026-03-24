/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x1405FC900
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x1402A9CF8 (KeRundownQueueEx.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405FD448 (EtwpUnreferenceGuidEntry.c)
 *     EtwpRundownNotifications @ 0x14069322C (EtwpRundownNotifications.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140699A88 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpQueueReply @ 0x1406BB3D0 (EtwpQueueReply.c)
 *     EtwpReleaseQueueEntry @ 0x1406E491C (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1406E4984 (EtwpUnreferenceDataBlock.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  ULONG_PTR v1; // r13
  __int64 v2; // r14
  ULONG_PTR v4; // rsi
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // r8
  __int64 **v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  ULONG_PTR v13; // rax
  volatile __int64 *v14; // rbp
  _QWORD *v15; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v18; // rdx
  __int64 **v19; // rax
  void *v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // rbp
  _QWORD *v23; // rdi
  __int64 v24; // r15
  struct _KQUEUE *v25; // rcx
  _QWORD *v26; // rbx
  _QWORD v27[9]; // [rsp+30h] [rbp-68h] BYREF

  v1 = BugCheckParameter2[4];
  v2 = 4LL;
  v4 = BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) == 0 )
  {
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 408, 0LL);
      *(_QWORD *)(v4 + 416) = KeGetCurrentThread();
    }
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1 + 408, 0LL);
    *(_QWORD *)(v1 + 416) = KeGetCurrentThread();
    v6 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) == BugCheckParameter2 )
    {
      v7 = (__int64 **)BugCheckParameter2[1];
      if ( *v7 == BugCheckParameter2 )
      {
        *v7 = v6;
        v6[1] = (__int64)v7;
        v8 = (__int64 *)BugCheckParameter2[2];
        if ( (__int64 *)v8[1] == BugCheckParameter2 + 2 )
        {
          v9 = (__int64 **)BugCheckParameter2[3];
          if ( *v9 == BugCheckParameter2 + 2 )
          {
            *v9 = v8;
            v8[1] = (__int64)v9;
            *(_QWORD *)(v1 + 416) = 0LL;
            ExReleasePushLockEx(v1 + 408, 0LL);
            KeLeaveCriticalRegion();
            if ( v4 )
            {
              *(_QWORD *)(v4 + 416) = 0LL;
              ExReleasePushLockEx(v4 + 408, 0LL);
              KeLeaveCriticalRegion();
            }
            goto LABEL_10;
          }
        }
      }
    }
LABEL_26:
    __fastfail(3u);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
  v18 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 )
    goto LABEL_26;
  v19 = (__int64 **)BugCheckParameter2[1];
  if ( *v19 != BugCheckParameter2 )
    goto LABEL_26;
  *v19 = v18;
  v18[1] = (__int64)v19;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EtwpReplyListLock);
  KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
LABEL_10:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v13 = *((unsigned __int16 *)BugCheckParameter2 + 49);
  if ( (v13 & 2) != 0 )
  {
    v14 = BugCheckParameter2 + 6;
    do
    {
      v15 = (_QWORD *)_InterlockedExchange64(v14, 0LL);
      if ( v15 )
      {
        v24 = v15[4];
        memset(v27, 0, sizeof(v27));
        if ( (*(_BYTE *)(v24 + 98) & 0x40) == 0 )
        {
          v25 = *(struct _KQUEUE **)(v24 + 48);
          *(_OWORD *)&v27[7] = *(_OWORD *)(v1 + 40);
          v27[0] = 0x4800000001LL;
          EtwpQueueReply(v25);
        }
        EtwpReleaseQueueEntry(v15);
      }
      ++v14;
      --v2;
    }
    while ( v2 );
    EtwpRundownNotifications(BugCheckParameter2[10], BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference(BugCheckParameter2);
  }
  else
  {
    if ( (v13 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v13, 0LL);
    v20 = (void *)BugCheckParameter2[6];
    LOBYTE(v10) = 1;
    v21 = KeRundownQueueEx((__int64)v20, v10, v11, v12);
    v22 = (_QWORD *)v21;
    if ( v21 )
    {
      v23 = (_QWORD *)v21;
      do
      {
        v26 = v23;
        v23 = (_QWORD *)*v23;
        EtwpUnreferenceDataBlock(v26[2]);
        ExFreePoolWithTag(v26, 0);
      }
      while ( v22 != v23 );
    }
    ExFreePoolWithTag(v20, 0);
  }
  result = EtwpUnreferenceGuidEntry(v1);
  if ( v4 )
    return EtwpUnreferenceGuidEntry(v4);
  return result;
}
