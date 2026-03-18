/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x1405F46F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeRundownQueueEx @ 0x14030B098 (KeRundownQueueEx.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F494C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405F5200 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpRundownNotifications @ 0x1405F5298 (EtwpRundownNotifications.c)
 *     EtwpReleaseQueueEntry @ 0x14071AE04 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14071AE6C (EtwpUnreferenceDataBlock.c)
 *     EtwpQueueReply @ 0x14071BE60 (EtwpQueueReply.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
    ExfTryToWakePushLock((volatile signed __int64 *)&EtwpReplyListLock);
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
