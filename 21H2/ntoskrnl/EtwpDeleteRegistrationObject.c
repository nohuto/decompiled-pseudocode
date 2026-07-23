/*
 * XREFs of EtwpDeleteRegistrationObject @ 0x1406EC060
 * Callers:
 *     <none>
 * Callees:
 *     KeRundownQueueEx @ 0x140227E38 (KeRundownQueueEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405F8C48 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpReleaseQueueEntry @ 0x1406BBBFC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1406BBC64 (EtwpUnreferenceDataBlock.c)
 *     EtwpQueueReply @ 0x1406BCC50 (EtwpQueueReply.c)
 *     EtwpRundownNotifications @ 0x1406BCF58 (EtwpRundownNotifications.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpDeleteRegistrationObject(__int64 *BugCheckParameter2)
{
  __int64 v1; // r13
  __int64 v2; // r14
  _QWORD *v4; // rsi
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // r8
  __int64 **v9; // rdx
  ULONG_PTR v10; // rax
  volatile __int64 *v11; // rbp
  __int64 v12; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rdx
  __int64 **v16; // rax
  void *v17; // r14
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbp
  volatile signed __int32 *v20; // rdi
  __int64 v21; // r15
  struct _KQUEUE *v22; // rcx
  volatile signed __int32 **v23; // rbx
  _QWORD v24[10]; // [rsp+30h] [rbp-68h] BYREF

  v1 = BugCheckParameter2[4];
  v2 = 4LL;
  v4 = (_QWORD *)BugCheckParameter2[5];
  if ( (*((_BYTE *)BugCheckParameter2 + 98) & 4) == 0 )
  {
    if ( v4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 51), 0LL);
      v4[52] = KeGetCurrentThread();
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
              v4[52] = 0LL;
              ExReleasePushLockEx((ULONG_PTR)(v4 + 51), 0LL);
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
  v15 = (__int64 *)*BugCheckParameter2;
  if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2 )
    goto LABEL_26;
  v16 = (__int64 **)BugCheckParameter2[1];
  if ( *v16 != BugCheckParameter2 )
    goto LABEL_26;
  *v16 = v15;
  v15[1] = (__int64)v16;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EtwpReplyListLock);
  KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
LABEL_10:
  _InterlockedAnd16((volatile signed __int16 *)BugCheckParameter2 + 49, 0xFF7Fu);
  v10 = *((unsigned __int16 *)BugCheckParameter2 + 49);
  if ( (v10 & 2) != 0 )
  {
    v11 = BugCheckParameter2 + 6;
    do
    {
      v12 = _InterlockedExchange64(v11, 0LL);
      if ( v12 )
      {
        v21 = *(_QWORD *)(v12 + 32);
        memset(v24, 0, 0x48uLL);
        if ( (*(_BYTE *)(v21 + 98) & 0x40) == 0 )
        {
          v22 = *(struct _KQUEUE **)(v21 + 48);
          *(_OWORD *)&v24[7] = *(_OWORD *)(v1 + 40);
          v24[0] = 0x4800000001LL;
          EtwpQueueReply(v22, (unsigned int *)v24);
        }
        EtwpReleaseQueueEntry((PADAPTER_OBJECT *)v12, 2);
      }
      ++v11;
      --v2;
    }
    while ( v2 );
    EtwpRundownNotifications(BugCheckParameter2[10], (__int64)BugCheckParameter2);
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2[10], 0x52777445u);
    EtwpReleaseProviderTraitsReference((__int64)BugCheckParameter2);
  }
  else
  {
    if ( (v10 & 4) == 0 )
      KeBugCheckEx(0x11Du, 3uLL, (ULONG_PTR)BugCheckParameter2, v10, 0LL);
    v17 = (void *)BugCheckParameter2[6];
    v18 = KeRundownQueueEx((__int64)v17, 1);
    v19 = (volatile signed __int32 *)v18;
    if ( v18 )
    {
      v20 = (volatile signed __int32 *)v18;
      do
      {
        v23 = (volatile signed __int32 **)v20;
        v20 = *(volatile signed __int32 **)v20;
        EtwpUnreferenceDataBlock(v23[2]);
        ExFreePoolWithTag(v23, 0);
      }
      while ( v19 != v20 );
    }
    ExFreePoolWithTag(v17, 0);
  }
  result = EtwpUnreferenceGuidEntry((PVOID)v1);
  if ( v4 )
    return EtwpUnreferenceGuidEntry(v4);
  return result;
}
