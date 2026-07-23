/*
 * XREFs of PopBootStatSet @ 0x14077F428
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     RtlLockBootStatusData @ 0x14077F730 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x14078A390 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x14078A6DC (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x14078C870 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407C193C (PopBootStatAccessCheck.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // r11
  char *v15; // rdi
  size_t v16; // rdi
  size_t v17; // rax
  __int64 i; // rdx
  char *v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  ULONG Size; // [rsp+30h] [rbp-58h] BYREF
  int Size_4; // [rsp+34h] [rbp-54h]
  unsigned int v25; // [rsp+38h] [rbp-50h] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-4Ch] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-48h] BYREF
  char *v28; // [rsp+48h] [rbp-40h]
  ULONGLONG pullResult; // [rsp+50h] [rbp-38h] BYREF
  RTL_BSD_ITEM_TYPE *v30; // [rsp+58h] [rbp-30h]
  char v32; // [rsp+A8h] [rbp+20h]

  pullResult = 0LL;
  ReturnLength = 0;
  v25 = 0;
  Size = 0;
  PoolWithTag = 0LL;
  FileHandle = 0LL;
  v32 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_7;
    v16 = pullResult;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, pullResult, 0x206D654Du);
    v28 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_7;
    }
    if ( v16 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      if ( (v17 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v16);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v19 = &PoolWithTag[24 * i];
      v30 = (RTL_BSD_ITEM_TYPE *)v19;
      v20 = *((unsigned int *)v19 + 4);
      if ( (_DWORD)v20 )
      {
        v21 = *((_QWORD *)v19 + 1);
        v22 = v21 + v20;
        if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v28 = PoolWithTag;
  }
  v32 = 1;
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
        v30 = (RTL_BSD_ITEM_TYPE *)&PoolWithTag[24 * j];
        SetBootStatusData = RtlBootStatusItemInfo(*(unsigned int *)v30, &v25, &Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *(_DWORD *)(v14 + 16) < Size )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v15 = (char *)&PopBootStat + v25;
        memmove(v15, *(const void **)(v14 + 8), Size);
        SetBootStatusData = RtlGetSetBootStatusData(FileHandle, 0, *v30, v15, Size, &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_7:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v32 )
  {
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
      ExfTryToWakePushLock(&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
  if ( PreviousMode && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SetBootStatusData;
}
