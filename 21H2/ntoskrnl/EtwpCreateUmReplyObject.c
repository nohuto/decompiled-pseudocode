/*
 * XREFs of EtwpCreateUmReplyObject @ 0x1406B8E18
 * Callers:
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 * Callees:
 *     KeInitializeQueue @ 0x14023E540 (KeInitializeQueue.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     EtwpReferenceGuidEntry @ 0x140796BF4 (EtwpReferenceGuidEntry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpCreateUmReplyObject(ULONG_PTR BugCheckParameter2, PHANDLE Handle, _QWORD *a3)
{
  struct _KQUEUE *Pool2; // rax
  struct _KQUEUE *v7; // rdi
  int Object; // ebx
  PVOID NewObject; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v11[3]; // [rsp+60h] [rbp+Fh] BYREF
  int v12; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+7Ch] [rbp+2Bh]
  __int128 v14; // [rsp+80h] [rbp+2Fh]

  v13 = 0;
  NewObject = 0LL;
  v11[1] = 0LL;
  v11[2] = 0LL;
  v11[0] = 48LL;
  v12 = 64;
  v14 = 0LL;
  Pool2 = (struct _KQUEUE *)ExAllocatePool2(64LL, 72LL, 1903653957LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    KeInitializeQueue(Pool2, 0);
    Object = ObCreateObjectEx(0, (_DWORD)EtwpRegistrationObjectType, (unsigned int)v11, 1);
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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpReplyListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&EtwpReplyListLock);
      KeAbPostRelease((ULONG_PTR)&EtwpReplyListLock);
      MEMORY[0x18] = 16LL;
      MEMORY[0x10] = 16LL;
      _InterlockedOr16((volatile signed __int16 *)0x62, 0x80u);
      Object = ObInsertObject(0LL, 0LL, 0x804u, 1u, &NewObject, Handle);
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
