/*
 * XREFs of ObpAuditObjectAccess @ 0x1409851A4
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExLockHandleTableEntry @ 0x1402F344C (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     ExpGetHandleExtraInfo @ 0x140883EDC (ExpGetHandleExtraInfo.c)
 *     SeOperationAuditAlarm @ 0x1409C820C (SeOperationAuditAlarm.c)
 */

char __fastcall ObpAuditObjectAccess(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4, int a5)
{
  int v7; // r12d
  _DWORD *HandleExtraInfo; // rdi
  struct _KTHREAD *CurrentThread; // r15
  char v11; // di
  __int64 *v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // r10
  __int64 v15; // rax
  signed __int32 v17[12]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a2;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo((unsigned int *)a1, a2);
  if ( !HandleExtraInfo )
    return 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExLockHandleTableEntry(a1, a3) )
  {
    _m_prefetchw(HandleExtraInfo);
    LODWORD(v12) = *HandleExtraInfo;
    if ( a4 == ((*(__int64 *)a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v13 = a5 & (unsigned int)v12;
      if ( (a5 & (unsigned int)v12) != 0 )
      {
        v14 = 0LL;
        *HandleExtraInfo = (unsigned int)v12 & ~a5;
        if ( (*(_BYTE *)(a4 + 26) & 0x20) != 0 )
        {
          v15 = ObpInfoMaskToOffset[*(_BYTE *)(a4 + 26) & 0x3F];
          v12 = (__int64 *)(a4 - v15);
          if ( a4 != v15 )
            v14 = *v12;
        }
        SeOperationAuditAlarm(
          (_DWORD)v12,
          a4 + 48,
          v7,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a4 + 24) ^ (unsigned __int64)BYTE1(a4)]
        + 16,
          v13,
          v17[10],
          v14);
      }
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    _InterlockedExchangeAdd64(a3, 1uLL);
    _InterlockedOr(v17, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    v11 = 0;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v11;
}
