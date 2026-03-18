/*
 * XREFs of NtTerminateProcess @ 0x1407D7CA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeForceResumeThread @ 0x1402EF5FC (KeForceResumeThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1406E3BE0 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PspTerminateThreadByPointer @ 0x14079F130 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspTerminateProcess @ 0x1407D7E94 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x1407E6274 (PspTerminateAllThreads.c)
 */

__int64 __fastcall NtTerminateProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR Process; // rbp
  char PreviousMode; // r12
  __int64 result; // rax
  PVOID v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  volatile signed __int64 *v10; // rdi
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int v13; // [rsp+80h] [rbp+8h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a1,
               1,
               (__int64)PsProcessType,
               PreviousMode,
               0x65547350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    v7 = Object;
    v8 = *((_DWORD *)Object + 272);
    --CurrentThread->KernelApcDisable;
    v13 = v8;
    v9 = PspTerminateProcess((ULONG_PTR)v7);
    ObfDereferenceObjectWithTag(v7, 0x65547350u);
    if ( v7 == (PVOID)Process )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(Process + 992) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        PspExitThread(a2);
        __debugbreak();
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(v13, v9);
    }
    goto LABEL_16;
  }
  if ( PreviousMode != 1 && (*(_BYTE *)(Process + 992) & 1) == 0 || (*(_DWORD *)(Process + 2172) & 1) != 0 )
    return 3221225659LL;
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(Process + 1080);
  ExAcquirePushLockExclusiveEx(Process + 1080, 0LL);
  _m_prefetchw((const void *)(Process + 1124));
  v11 = *(_DWORD *)(Process + 1124);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 1124), v11 | 0x40000000, v11);
  }
  while ( v12 != v11 );
  if ( (v11 & 0x40000008) == 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(Process + 2004) == 259 )
      *(_DWORD *)(Process + 2004) = a2;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Process + 1080);
    KeAbPostRelease(Process + 1080);
    v9 = PspTerminateAllThreads(Process);
LABEL_16:
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    return v9;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Process + 1080);
  KeAbPostRelease(Process + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  PspTerminateThreadByPointer((__int64)CurrentThread, a2, 1);
  return 0LL;
}
