/*
 * XREFs of EtwpCreateUmReplyObject @ 0x1405FB2BC
 * Callers:
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 * Callees:
 *     KeInitializeQueue @ 0x1402377B0 (KeInitializeQueue.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpReferenceGuidEntry @ 0x1406DB204 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, __int64 a2, _QWORD *a3)
{
  struct _KQUEUE *PoolWithTag; // rax
  struct _KQUEUE *v7; // rdi
  int Object; // ebx
  char v9; // al
  __int64 v11; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v12[2]; // [rsp+58h] [rbp-1h] BYREF
  __int64 v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+74h] [rbp+1Bh]
  __int128 v17; // [rsp+78h] [rbp+1Fh]

  v12[1] = 0;
  v16 = 0;
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v12[0] = 48;
  v15 = 64;
  v17 = 0LL;
  PoolWithTag = (struct _KQUEUE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x71777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x48uLL);
    KeInitializeQueue(v7, 0);
    Object = ObCreateObjectEx(0, (_DWORD)EtwpRegistrationObjectType, (unsigned int)v12, 1);
    if ( Object < 0 )
    {
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      memset(0LL, 0, 0x70uLL);
      MEMORY[0x62] = 4;
      MEMORY[0x30] = v7;
      EtwpReferenceGuidEntry(BugCheckParameter2);
      MEMORY[0x20] = BugCheckParameter2;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpReplyListLock, 0LL);
      if ( *(__int64 **)(EtwpReplyListHead + 8) != &EtwpReplyListHead )
        __fastfail(3u);
      MEMORY[0] = EtwpReplyListHead;
      MEMORY[8] = &EtwpReplyListHead;
      *(_QWORD *)(EtwpReplyListHead + 8) = 0LL;
      EtwpReplyListHead = 0LL;
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
        ExfTryToWakePushLock(&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      MEMORY[0x18] = 16LL;
      MEMORY[0x10] = 16LL;
      _InterlockedOr16((volatile signed __int16 *)0x62, 0x80u);
      Object = ObInsertObjectEx(0LL, 0LL, 0, (__int64)&v11, a2);
      if ( Object >= 0 )
        *a3 = 0LL;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Object;
}
