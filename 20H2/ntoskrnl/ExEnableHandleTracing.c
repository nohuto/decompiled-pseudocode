/*
 * XREFs of ExEnableHandleTracing @ 0x14094EEE4
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x14090A1C8 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14022E5E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140230440 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x14036046C (MmGetMaximumNonPagedPoolInBytes.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094EE84 (ExDereferenceHandleDebugInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  int i; // eax
  __int64 v5; // rbp
  __int64 MaximumNonPagedPoolInBytes; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  ULONG_PTR v9; // rsi
  char *PoolWithTag; // rax
  char *v11; // r14
  struct _KTHREAD *CurrentThread; // r15
  _DWORD *v13; // rbp

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
  v9 = *(_QWORD *)(a1 + 16);
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
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  KeAbPostRelease(a1 + 56);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v13 )
    ExDereferenceHandleDebugInfo(a1, v13);
  return 0LL;
}
