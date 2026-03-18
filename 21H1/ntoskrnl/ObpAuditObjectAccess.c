/*
 * XREFs of ObpAuditObjectAccess @ 0x1408D8154
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x1405E4810 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x140264150 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 *     SeOperationAuditAlarm @ 0x14091A0CC (SeOperationAuditAlarm.c)
 *     ExpGetHandleExtraInfo @ 0x140948200 (ExpGetHandleExtraInfo.c)
 */

char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4, int a5)
{
  int v7; // r12d
  int *HandleExtraInfo; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // di
  int v15; // ecx
  __int64 v16; // r10
  __int64 *v17; // rcx
  signed __int32 v19[12]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a2;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (int *)ExpGetHandleExtraInfo(a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExLockHandleTableEntry(a1, (signed __int64 *)a3) )
  {
    _m_prefetchw(HandleExtraInfo);
    v15 = *HandleExtraInfo;
    if ( a4 == ((*(__int64 *)a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v12 = a5 & (unsigned int)v15;
      if ( (a5 & v15) != 0 )
      {
        v16 = 0LL;
        *HandleExtraInfo = v15 & ~a5;
        if ( (*(_BYTE *)(a4 + 26) & 0x20) != 0 )
          v17 = (__int64 *)(a4 - ObpInfoMaskToOffset[*(_BYTE *)(a4 + 26) & 0x3F]);
        else
          v17 = 0LL;
        if ( v17 )
          v16 = *v17;
        SeOperationAuditAlarm(
          (_DWORD)v17,
          a4 + 48,
          v7,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
        + 16,
          v12,
          v19[10],
          v16);
      }
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
    _InterlockedExchangeAdd64(a3, 1uLL);
    _InterlockedOr(v19, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    v14 = 0;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12, v13);
  return v14;
}
