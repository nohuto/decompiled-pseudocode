/*
 * XREFs of PopBootStatSet @ 0x14076A2B4
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlULongLongMult @ 0x1402C1CCC (RtlULongLongMult.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     RtlLockBootStatusData @ 0x14076A5C0 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1407759E0 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x140775D2C (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x140777EC0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407ABF7C (PopBootStatAccessCheck.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  size_t v15; // rdi
  size_t v16; // rax
  __int64 i; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned int Size; // [rsp+30h] [rbp-58h] BYREF
  int Size_4; // [rsp+34h] [rbp-54h]
  unsigned int v24; // [rsp+38h] [rbp-50h] BYREF
  _DWORD Handle[3]; // [rsp+3Ch] [rbp-4Ch] BYREF
  char *v26; // [rsp+48h] [rbp-40h]
  ULONGLONG pullResult; // [rsp+50h] [rbp-38h] BYREF
  char *v28; // [rsp+58h] [rbp-30h]
  char v30; // [rsp+A8h] [rbp+20h]

  pullResult = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v24 = 0;
  Size = 0;
  PoolWithTag = 0LL;
  v30 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_7;
    v15 = pullResult;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, pullResult, 0x206D654Du);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_7;
    }
    if ( v15 )
    {
      v16 = *(_QWORD *)(a1 + 16);
      if ( (v16 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v16 + v15 > 0x7FFFFFFF0000LL || v16 + v15 < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v15);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v18 = &PoolWithTag[24 * i];
      v28 = v18;
      v19 = *((unsigned int *)v18 + 4);
      if ( (_DWORD)v19 )
      {
        v20 = *((_QWORD *)v18 + 1);
        v21 = v20 + v19;
        if ( v21 > 0x7FFFFFFF0000LL || v21 < v20 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v26 = PoolWithTag;
  }
  v30 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&Handle[1]);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (LOBYTE(v6) = PreviousMode,
          SetBootStatusData = PopBootStatAccessCheck(*(_QWORD *)&Handle[1], v6, 2LL),
          SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        Size_4 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v28 = &PoolWithTag[24 * j];
        SetBootStatusData = RtlBootStatusItemInfo(*(unsigned int *)v28, &v24, &Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *(_DWORD *)(v14 + 16) < Size )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        memmove((char *)&PopBootStat + v24, *(const void **)(v14 + 8), Size);
        SetBootStatusData = RtlGetSetBootStatusData(*(HANDLE *)&Handle[1], Size, (__int64)Handle);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = Handle[0];
      }
    }
  }
LABEL_7:
  if ( *(_QWORD *)&Handle[1] )
    RtlUnlockBootStatusData(*(HANDLE *)&Handle[1]);
  if ( v30 )
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
