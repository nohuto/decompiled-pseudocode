/*
 * XREFs of ObpRegisterObject @ 0x1408DA45C
 * Callers:
 *     IopAllocRealFileObject @ 0x140600890 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140239BD8 (RtlStringCbCopyA.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpGetObjectRefInfo @ 0x1408D9D04 (ObpGetObjectRefInfo.c)
 *     ObpIsObjectPoolTagTraced @ 0x1408DA198 (ObpIsObjectPoolTagTraced.c)
 *     EtwTraceObject @ 0x140931D74 (EtwTraceObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpRegisterObject(__int64 a1)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // r9
  char *PoolWithTag; // rax
  unsigned int v6; // r8d
  char *v7; // rdi
  char v8; // al
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // [rsp+38h] [rbp+10h] BYREF

  if ( (xmmword_140CFC490 & 0x80u) != 0LL )
    EtwTraceObject(4400LL, a1);
  result = (unsigned int)ObpTraceFlags;
  if ( (ObpTraceFlags & 0x73) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x73) != 0
      && ((ObpTraceFlags & 0x20) == 0 || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x200) != 0)
      && ObpIsObjectPoolTagTraced(a1)
      && (int)ObpGetObjectRefInfo(a1, (unsigned __int16 **)&v13) >= 0 )
    {
      v4 = v13;
      if ( v13 )
        goto LABEL_12;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x17F8uLL, 0x7452624Fu);
      v13 = PoolWithTag;
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v6 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
        *((_QWORD *)PoolWithTag + 1) = *((_QWORD *)ObpObjectTable + v6);
        *((_QWORD *)ObpObjectTable + v6) = PoolWithTag;
        *((_WORD *)PoolWithTag + 17) = 508;
LABEL_12:
        ++ObpNumTracedObjects;
        *(_QWORD *)v4 = a1;
        v7 = v13;
        RtlStringCbCopyA(
          v13 + 16,
          0x10uLL,
          (NTSTRSAFE_PCSTR)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors);
        *((_WORD *)v7 + 16) = 0;
        memset(v7 + 36, 0, 12LL * *((unsigned __int16 *)v7 + 17));
        v8 = ObpTraceFlags;
        v9 = *(_BYTE *)(a1 + 25) | 1;
        *(_BYTE *)(a1 + 25) = v9;
        if ( (v8 & 0x40) != 0 )
          *(_BYTE *)(a1 + 25) = v9 | 2;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
  return result;
}
