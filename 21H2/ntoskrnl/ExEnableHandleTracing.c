/*
 * XREFs of ExEnableHandleTracing @ 0x14094C884
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x140907AD8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     MmGetMaximumNonPagedPoolInBytes @ 0x140251EEC (MmGetMaximumNonPagedPoolInBytes.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140321710 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140323130 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094C824 (ExDereferenceHandleDebugInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int i; // eax
  __int64 v5; // rbp
  __int64 MaximumNonPagedPoolInBytes; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  struct _KPROCESS *v9; // rsi
  char *PoolWithTag; // rax
  char *v11; // r14
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  v2 = a2;
  if ( a2 )
  {
    if ( a2 >= ExHandleTraceDbMinStacks )
    {
      if ( a2 > ExHandleTraceDbMaxStacks )
        v2 = ExHandleTraceDbMaxStacks;
    }
    else
    {
      v2 = ExHandleTraceDbMinStacks;
    }
    for ( i = v2 - 1; (i & v2) != 0; v2 = i + 1 )
      i = v2 | (v2 - 1);
  }
  else
  {
    v2 = ExHandleTraceDbDefaultStacks;
  }
  v5 = 160LL * v2 + 80;
  _InterlockedExchangeAdd(&ExpTotalTraceBuffers, v2);
  MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
  if ( 160 * v7 > (unsigned __int64)(5 * MaximumNonPagedPoolInBytes) >> 4 )
  {
    result = 3221225626LL;
LABEL_14:
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v2);
    return result;
  }
  v9 = *(struct _KPROCESS **)(a1 + 16);
  if ( v9 )
  {
    result = PsChargeProcessNonPagedPoolQuota(*(struct _KPROCESS **)(a1 + 16), v5);
    if ( (int)result < 0 )
      goto LABEL_14;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6474624Fu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v2);
    if ( v9 )
      PsReturnProcessNonPagedPoolQuota(v9, v5);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, v5);
  *((_DWORD *)v11 + 1) = v2;
  *(_DWORD *)v11 = 1;
  *((_QWORD *)v11 + 3) = 0LL;
  *((_DWORD *)v11 + 8) = 0;
  *((_DWORD *)v11 + 4) = 1;
  KeInitializeEvent((PRKEVENT)(v11 + 40), SynchronizationEvent, 0);
  if ( v9 )
    *(_BYTE *)(a1 + 44) |= 1u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v13 = *(_DWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v11;
  if ( v13 )
  {
    if ( (v13[2] & 8) == 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
LABEL_25:
    *((_DWORD *)v11 + 2) = 8;
LABEL_26:
  *(_BYTE *)(a1 + 44) |= 2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 56);
  KeAbPostRelease(a1 + 56);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15, v16);
  if ( v13 )
    ExDereferenceHandleDebugInfo(a1, v13);
  return 0LL;
}
