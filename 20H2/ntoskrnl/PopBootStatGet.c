/*
 * XREFs of PopBootStatGet @ 0x1407BCD30
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     RtlLockBootStatusData @ 0x14077B790 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1407863F0 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x14078673C (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x1407888D0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407BD01C (PopBootStatAccessCheck.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rsi
  char PreviousMode; // r15
  int SetBootStatusData; // r14d
  size_t v6; // rbx
  size_t v7; // rax
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 j; // r12
  __int64 v12; // r11
  ULONG ReturnLength; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+34h] [rbp-64h]
  unsigned int v16; // [rsp+38h] [rbp-60h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+48h] [rbp-50h] BYREF
  RTL_BSD_ITEM_TYPE DataClass; // [rsp+4Ch] [rbp-4Ch]
  PVOID P; // [rsp+50h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+58h] [rbp-40h] BYREF
  char *v22; // [rsp+60h] [rbp-38h]
  void *Src; // [rsp+68h] [rbp-30h]
  char v26; // [rsp+B8h] [rbp+20h]

  pullResult = 0LL;
  ReturnLength = 0;
  v16 = 0;
  v18 = 0;
  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v26 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_25;
    v6 = pullResult;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, pullResult, 0x206D654Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_25;
    }
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v6);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v15 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v22 = &PoolWithTag[24 * i];
      ProbeForWrite(*((volatile void **)v22 + 1), *((unsigned int *)v22 + 4), 1u);
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    P = PoolWithTag;
  }
  v26 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v10) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(FileHandle, v10, 1LL),
          SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        v15 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v22 = &PoolWithTag[24 * j];
        DataClass = *(_DWORD *)v22;
        SetBootStatusData = RtlBootStatusItemInfo(DataClass, &v16, &v18);
        if ( SetBootStatusData < 0 )
          break;
        Src = (char *)&PopBootStat + v16;
        SetBootStatusData = RtlGetSetBootStatusData(
                              FileHandle,
                              1u,
                              DataClass,
                              Src,
                              *(_DWORD *)(v12 + 16),
                              &ReturnLength);
        if ( SetBootStatusData >= 0 && ReturnLength )
          memmove(*((void **)v22 + 1), Src, ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_25:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v26 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SetBootStatusData;
}
