/*
 * XREFs of PopBootStatCheckIntegrity @ 0x1408F2454
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlLockBootStatusData @ 0x14077F730 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x14078C870 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407C193C (PopBootStatAccessCheck.c)
 *     RtlCheckBootStatusIntegrity @ 0x140915540 (RtlCheckBootStatusIntegrity.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  HANDLE FileHandle; // [rsp+28h] [rbp-50h] BYREF
  char *v14; // [rsp+30h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+38h] [rbp-40h] BYREF
  volatile void **v16; // [rsp+40h] [rbp-38h]
  BOOLEAN Verified; // [rsp+88h] [rbp+10h] BYREF
  KPROCESSOR_MODE v18; // [rsp+90h] [rbp+18h]
  char v19; // [rsp+98h] [rbp+20h]

  pullResult = 0LL;
  Verified = 0;
  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v19 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = PreviousMode;
  if ( PreviousMode )
  {
    v4 = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( v4 < 0 )
      goto LABEL_23;
    v5 = pullResult;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, pullResult, 0x206D654Du);
    v14 = PoolWithTag;
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
      v16 = (volatile void **)&PoolWithTag[24 * i];
      ProbeForWrite(v16[1], *((unsigned int *)v16 + 4), 1u);
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v14 = PoolWithTag;
  }
  v19 = 1;
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
  if ( v19 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v4;
}
