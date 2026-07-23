/*
 * XREFs of PopBootStatSet @ 0x14077B488
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     RtlLockBootStatusData @ 0x14077B790 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1407863F0 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x14078673C (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x1407888D0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407BD01C (PopBootStatAccessCheck.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  char *PoolWithTag; // rsi
  char PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  NTSTATUS SetBootStatusData; // edi
  __int64 j; // r15
  char v9; // r14
  __int64 v11; // r11
  char *v12; // rdi
  size_t v13; // rdi
  size_t v14; // rax
  __int64 i; // rdx
  char *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  ULONG Size; // [rsp+30h] [rbp-58h] BYREF
  int Size_4; // [rsp+34h] [rbp-54h]
  unsigned int v22; // [rsp+38h] [rbp-50h] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-4Ch] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-48h] BYREF
  char *v25; // [rsp+48h] [rbp-40h]
  ULONGLONG pullResult; // [rsp+50h] [rbp-38h] BYREF
  RTL_BSD_ITEM_TYPE *v27; // [rsp+58h] [rbp-30h]
  char v29; // [rsp+A8h] [rbp+20h]

  pullResult = 0LL;
  ReturnLength = 0;
  v22 = 0;
  Size = 0;
  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v29 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_7;
    v13 = pullResult;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, pullResult, 0x206D654Du);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_7;
    }
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      if ( (v14 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v14 + v13 > 0x7FFFFFFF0000LL || v14 + v13 < v14 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v13);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v16 = &PoolWithTag[24 * i];
      v27 = (RTL_BSD_ITEM_TYPE *)v16;
      v17 = *((unsigned int *)v16 + 4);
      if ( (_DWORD)v17 )
      {
        v18 = *((_QWORD *)v16 + 1);
        v19 = v18 + v17;
        if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v25 = PoolWithTag;
  }
  v29 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v6) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(FileHandle, v6, 2LL),
          SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        Size_4 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v27 = (RTL_BSD_ITEM_TYPE *)&PoolWithTag[24 * j];
        SetBootStatusData = RtlBootStatusItemInfo(*(unsigned int *)v27, &v22, &Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *(_DWORD *)(v11 + 16) < Size )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v12 = (char *)&PopBootStat + v22;
        memmove(v12, *(const void **)(v11 + 8), Size);
        SetBootStatusData = RtlGetSetBootStatusData(FileHandle, 0, *v27, v12, Size, &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_7:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v29 )
  {
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SetBootStatusData;
}
