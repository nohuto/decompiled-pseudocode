/*
 * XREFs of PopBootStatSet @ 0x1406D6228
 * Callers:
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlLockBootStatusData @ 0x1406D6540 (RtlLockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1406D66F0 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x1406D6A3C (RtlBootStatusItemInfo.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     PopBootStatAccessCheck @ 0x1406D6C24 (PopBootStatAccessCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  char *Pool2; // r14
  char PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  int SetBootStatusData; // esi
  __int64 j; // r15
  __int64 v10; // r11
  unsigned __int64 v11; // rcx
  size_t v12; // r15
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
  char *v24; // [rsp+50h] [rbp-38h]
  __int64 v25; // [rsp+58h] [rbp-30h]
  char v27; // [rsp+A8h] [rbp+20h]

  memset(Handle, 0, sizeof(Handle));
  v21 = 0;
  Size = 0;
  Pool2 = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = *(unsigned int *)(a1 + 8);
    v25 = (v11 * (unsigned __int128)0x18uLL) >> 64;
    v12 = 24 * v11;
    if ( is_mul_ok(v11, 0x18uLL) )
    {
      SetBootStatusData = 0;
    }
    else
    {
      v12 = -1LL;
      SetBootStatusData = -1073741675;
    }
    if ( SetBootStatusData < 0 )
      goto LABEL_7;
    Pool2 = (char *)ExAllocatePool2(256LL, v12, 544040269LL);
    v23 = Pool2;
    if ( !Pool2 )
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
    memmove(Pool2, *(const void **)(a1 + 16), v12);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v15 = &Pool2[24 * i];
      v24 = v15;
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
    Pool2 = *(char **)(a1 + 16);
    v23 = Pool2;
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
        v24 = &Pool2[24 * j];
        SetBootStatusData = RtlBootStatusItemInfo(*(unsigned int *)v24, &v21, &Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *(_DWORD *)(v10 + 16) < Size )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        memmove((char *)&PopBootStat + v21, *(const void **)(v10 + 8), Size);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SetBootStatusData;
}
