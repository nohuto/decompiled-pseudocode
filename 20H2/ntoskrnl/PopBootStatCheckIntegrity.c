/*
 * XREFs of PopBootStatCheckIntegrity @ 0x1408F4B18
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     RtlLockBootStatusData @ 0x14077B790 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x1407888D0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407BD01C (PopBootStatAccessCheck.c)
 *     RtlCheckBootStatusIntegrity @ 0x140917C30 (RtlCheckBootStatusIntegrity.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatCheckIntegrity(__int64 a1)
{
  char *PoolWithTag; // rdi
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v4; // esi
  size_t v5; // rbx
  size_t v6; // rax
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  HANDLE FileHandle; // [rsp+28h] [rbp-50h] BYREF
  char *v11; // [rsp+30h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+38h] [rbp-40h] BYREF
  volatile void **v13; // [rsp+40h] [rbp-38h]
  BOOLEAN Verified; // [rsp+88h] [rbp+10h] BYREF
  KPROCESSOR_MODE v15; // [rsp+90h] [rbp+18h]
  char v16; // [rsp+98h] [rbp+20h]

  pullResult = 0LL;
  Verified = 0;
  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v16 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v15 = PreviousMode;
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
  v16 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v4 = RtlLockBootStatusData(&FileHandle);
  if ( v4 >= 0 )
  {
    if ( !PreviousMode || (v4 = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), v4 >= 0) )
    {
      v4 = RtlCheckBootStatusIntegrity(FileHandle, &Verified);
      if ( v4 >= 0 )
      {
        if ( *((_DWORD *)PoolWithTag + 4) )
          **((_BYTE **)PoolWithTag + 1) = Verified;
        else
          v4 = -1073741811;
      }
    }
  }
LABEL_23:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v16 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v4;
}
