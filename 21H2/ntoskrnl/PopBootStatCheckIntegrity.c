/*
 * XREFs of PopBootStatCheckIntegrity @ 0x1408F22F4
 * Callers:
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlULongLongMult @ 0x14024ED98 (RtlULongLongMult.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     RtlLockBootStatusData @ 0x14077F570 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14078C6B0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407C141C (PopBootStatAccessCheck.c)
 *     RtlCheckBootStatusIntegrity @ 0x1409153E0 (RtlCheckBootStatusIntegrity.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopBootStatCheckIntegrity(__int64 a1)
{
  char *PoolWithTag; // rdi
  KPROCESSOR_MODE PreviousMode; // r15
  int v4; // esi
  size_t v5; // rbx
  size_t v6; // rax
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  HANDLE FileHandle; // [rsp+28h] [rbp-50h] BYREF
  char *v11; // [rsp+30h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+38h] [rbp-40h] BYREF
  volatile void **v13; // [rsp+40h] [rbp-38h]
  char v14; // [rsp+98h] [rbp+20h]

  pullResult = 0LL;
  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v4 = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( v4 < 0 )
      goto LABEL_23;
    v5 = pullResult;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, pullResult, 0x206D654Du);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_23;
    }
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( (v6 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v6 + v5 > 0x7FFFFFFF0000LL || v6 + v5 < v6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v5);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v13 = (volatile void **)&PoolWithTag[24 * i];
      ProbeForWrite(v13[1], *((unsigned int *)v13 + 4), 1u);
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v11 = PoolWithTag;
  }
  v14 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v4 = RtlLockBootStatusData(&FileHandle);
  if ( v4 >= 0 )
  {
    if ( !PreviousMode || (v4 = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), v4 >= 0) )
    {
      v4 = RtlCheckBootStatusIntegrity(FileHandle);
      if ( v4 >= 0 )
      {
        if ( *((_DWORD *)PoolWithTag + 4) )
          **((_BYTE **)PoolWithTag + 1) = 0;
        else
          v4 = -1073741811;
      }
    }
  }
LABEL_23:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v14 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v4;
}
