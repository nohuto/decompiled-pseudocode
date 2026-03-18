/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x1407BA264
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MmMapIoSpaceEx @ 0x1402F8F10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1402FA3B0 (MmUnmapIoSpace.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406D8DBC (ExpGetSystemFirmwareTableInformation.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  void *v4; // r14
  char v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int SystemFirmwareTableInformation; // ecx
  int v11; // edi
  unsigned int v13; // edi
  _DWORD *PoolWithTag; // rax
  struct _KTHREAD *v15; // rax
  SIZE_T v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rbx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  void *v24; // rdi
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int Length; // [rsp+28h] [rbp-A0h]
  unsigned int Length_4; // [rsp+2Ch] [rbp-9Ch] BYREF
  unsigned int v32; // [rsp+30h] [rbp-98h]
  _DWORD *v33; // [rsp+38h] [rbp-90h]
  volatile void *Address; // [rsp+40h] [rbp-88h]
  volatile void *v35; // [rsp+48h] [rbp-80h]
  PVOID BaseAddress; // [rsp+50h] [rbp-78h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-70h]
  __int128 Src; // [rsp+78h] [rbp-50h] BYREF
  int v39; // [rsp+88h] [rbp-40h]

  v35 = 0LL;
  v32 = 0;
  Src = 0LL;
  v39 = 0;
  Address = 0LL;
  Length_4 = 0;
  v4 = 0LL;
  v33 = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  NumberOfBytes = 0LL;
  if ( a2 < 0x20 )
  {
    v11 = -1073741811;
    goto LABEL_11;
  }
  v32 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v35 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
  v5 = 1;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
  {
    v11 = -1073741637;
    goto LABEL_11;
  }
  if ( !ExpPlatformBinaryTableInformation )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
    v5 = 0;
    if ( Length || v32 )
    {
      v11 = -1073741811;
      goto LABEL_11;
    }
    *(_QWORD *)&Src = 0x141435049LL;
    *((_QWORD *)&Src + 1) = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((char *)&Src, 0, 0x14u, &Length_4);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v11 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v11 = -1073741701;
      goto LABEL_11;
    }
    v13 = Length_4;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length_4, 0x54425057u);
    v4 = PoolWithTag;
    v33 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v11 = -1073741670;
      goto LABEL_11;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1413632087;
    PoolWithTag[3] = v13 - 16;
    v11 = ExpGetSystemFirmwareTableInformation((char *)PoolWithTag, 0, v13, &Length_4);
    if ( v11 < 0 )
      goto LABEL_11;
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
        v11 = -1073741637;
        goto LABEL_11;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v4;
      v4 = 0LL;
      v33 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
  }
  v16 = v32;
  if ( (v32 & 1) == 0 )
  {
    v20 = ExpPlatformBinaryTableInformation;
    if ( *((_BYTE *)ExpPlatformBinaryTableInformation + 64) != 1
      || *((_BYTE *)ExpPlatformBinaryTableInformation + 65) != 1
      || (v21 = *((unsigned __int16 *)ExpPlatformBinaryTableInformation + 33), (v21 & 1) != 0)
      || (v22 = *((_QWORD *)ExpPlatformBinaryTableInformation + 7)) == 0
      || *((_DWORD *)ExpPlatformBinaryTableInformation + 10) != 1 )
    {
      v11 = -1073741701;
      goto LABEL_50;
    }
    v23 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    if ( (unsigned int)v23 > Length || v21 > v32 )
    {
      v11 = -1073741789;
      *(_DWORD *)(a1 + 24) = v23;
      *(_DWORD *)(a1 + 28) = *((unsigned __int16 *)v20 + 33);
      goto LABEL_50;
    }
    NumberOfBytes = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    v24 = (void *)MmMapIoSpaceEx(v22, v23, 2u);
    BaseAddress = v24;
    if ( !v24 )
    {
      v11 = -1073741670;
      goto LABEL_50;
    }
    *(_QWORD *)a1 = v20[7];
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v24, *((unsigned int *)v20 + 13));
    v25 = *((_WORD *)v20 + 33);
    if ( v25 )
    {
      if ( a3 )
      {
        ProbeForWrite(v35, v16, 2u);
        v25 = *((_WORD *)v20 + 33);
      }
      memmove((void *)v35, (char *)v20 + 68, v25);
    }
    v11 = 0;
    v5 = 1;
LABEL_11:
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_50;
  }
  v11 = -1073741811;
LABEL_50:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
LABEL_12:
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v11;
}
