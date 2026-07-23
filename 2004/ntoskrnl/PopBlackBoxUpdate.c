/*
 * XREFs of PopBlackBoxUpdate @ 0x14064B858
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlTestProtectedAccess @ 0x1406B5F2C (RtlTestProtectedAccess.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopBlackBoxUpdate(char **a1, char a2)
{
  __int64 v3; // rax
  __int64 (**v4)[2]; // r14
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  size_t v9; // rdi
  unsigned int v10; // ebx
  char v11; // si
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  char *v15; // rax
  char *v16; // rcx
  __int64 *PoolWithTag; // rax
  char v18; // [rsp+50h] [rbp+8h]

  v18 = 0;
  v3 = *((int *)a1 + 6);
  if ( (unsigned int)v3 > 0x15 )
  {
    v10 = -1073741811;
    goto LABEL_11;
  }
  v4 = &PopBlackBoxEntries + 13 * v3;
  if ( a2 )
  {
    v15 = a1[1];
    if ( v15 )
    {
      v16 = *a1;
      if ( &v15[(_QWORD)v16] > (char *)0x7FFFFFFF0000LL || &v15[(_QWORD)v16] < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ((_DWORD)v4[2] & 1) != 0
      && !RtlTestProtectedAccess(
            (PS_PROTECTION)SBYTE2(KeGetCurrentThread()->Process[2].Header.WaitListHead.Flink),
            (PS_PROTECTION)97) )
    {
      v10 = -1073741790;
      goto LABEL_11;
    }
  }
  v5 = *((_DWORD *)a1 + 7);
  v18 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBlackBoxLock, 0LL);
  v7 = (unsigned __int64)a1[1];
  if ( (v5 & 1) == 0 )
  {
    v8 = 0LL;
    v9 = 4096LL;
    if ( v7 < 0x1000 )
      v9 = (size_t)a1[1];
    v4[12] = (__int64 (*)[2])v7;
    v4[11] = (__int64 (*)[2])v9;
LABEL_7:
    if ( v4[10]
      || (PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x206D654Du),
          (v4[10] = (__int64 (*)[2])PoolWithTag) != 0LL) )
    {
      v4[9] = (__int64 (*)[2])KiQueryUnbiasedInterruptTime();
      if ( v9 )
        memmove((char *)v4[10] + v8, *a1, v9);
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    goto LABEL_11;
  }
  v9 = (size_t)a1[1];
  if ( !v7 )
  {
LABEL_29:
    v10 = -1073741811;
    goto LABEL_11;
  }
  v8 = (unsigned __int64)a1[2];
  v13 = v8 + v7;
  v14 = -1LL;
  if ( v13 >= v8 )
    v14 = v13;
  v10 = v13 < v8 ? 0xC0000095 : 0;
  if ( v13 >= v8 )
  {
    if ( v14 <= (unsigned __int64)v4[12] )
    {
      if ( v8 >= 0x1000 )
      {
        v9 = 0LL;
      }
      else if ( v14 > 0x1000 )
      {
        v9 = 4096 - v8;
      }
      goto LABEL_7;
    }
    goto LABEL_29;
  }
LABEL_11:
  if ( v18 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBlackBoxLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBlackBoxLock);
    KeAbPostRelease((ULONG_PTR)&PopBlackBoxLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v10;
}
