/*
 * XREFs of PopBootStatSet @ 0x14076CA58
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlULongLongMult @ 0x1402FE7AC (RtlULongLongMult.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     RtlLockBootStatusData @ 0x14076CD60 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x140777DF0 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x14077813C (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x14077A2D0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1407AF0DC (PopBootStatAccessCheck.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  size_t v12; // rdi
  size_t v13; // rax
  __int64 i; // rdx
  char *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int Size; // [rsp+30h] [rbp-58h] BYREF
  int Size_4; // [rsp+34h] [rbp-54h]
  unsigned int v21; // [rsp+38h] [rbp-50h] BYREF
  _DWORD Handle[3]; // [rsp+3Ch] [rbp-4Ch] BYREF
  char *v23; // [rsp+48h] [rbp-40h]
  ULONGLONG pullResult; // [rsp+50h] [rbp-38h] BYREF
  char *v25; // [rsp+58h] [rbp-30h]
  char v27; // [rsp+A8h] [rbp+20h]

  pullResult = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v21 = 0;
  Size = 0;
  PoolWithTag = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_7;
    v12 = pullResult;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, pullResult, 0x206D654Du);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_7;
    }
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      if ( (v13 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 + v12 > 0x7FFFFFFF0000LL || v13 + v12 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, *(const void **)(a1 + 16), v12);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v15 = &PoolWithTag[24 * i];
      v25 = v15;
      v16 = *((unsigned int *)v15 + 4);
      if ( (_DWORD)v16 )
      {
        v17 = *((_QWORD *)v15 + 1);
        v18 = v17 + v16;
        if ( v18 > 0x7FFFFFFF0000LL || v18 < v17 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    PoolWithTag = *(char **)(a1 + 16);
    v23 = PoolWithTag;
  }
  v27 = 1;
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
        v25 = &PoolWithTag[24 * j];
        SetBootStatusData = RtlBootStatusItemInfo(*(unsigned int *)v25, &v21, &Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *(_DWORD *)(v11 + 16) < Size )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        memmove((char *)&PopBootStat + v21, *(const void **)(v11 + 8), Size);
        SetBootStatusData = RtlGetSetBootStatusData(*(HANDLE *)&Handle[1], Size, (__int64)Handle);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = Handle[0];
      }
    }
  }
LABEL_7:
  if ( *(_QWORD *)&Handle[1] )
    RtlUnlockBootStatusData(*(HANDLE *)&Handle[1]);
  if ( v27 )
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
