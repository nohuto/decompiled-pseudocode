/*
 * XREFs of PsShutdownSystem @ 0x140906374
 * Callers:
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140233A3C (ObFastReplaceObject.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     SmIsCompressionProcess @ 0x1402FDDD0 (SmIsCompressionProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     PsEnumProcesses @ 0x1405EEB64 (PsEnumProcesses.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     PspGetNextSilo @ 0x1406158F4 (PspGetNextSilo.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 *     EtwUnregister @ 0x140748B40 (EtwUnregister.c)
 *     PsTerminateServerSilo @ 0x140901AE0 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x140906C6C (PspWaitForUsermodeExit.c)
 */

__int64 PsShutdownSystem()
{
  unsigned int v0; // r12d
  void *ServerSiloGlobals; // r15
  void *i; // rcx
  void *NextSilo; // rax
  void *v5; // rbx
  int v6; // ebp
  __int64 v7; // rdi
  _DWORD *NextProcess; // rbx
  ULONG_PTR v9; // rcx
  int v10; // r14d
  NTSTATUS v11; // r14d
  PVOID *v12; // rbx
  __int64 v13; // rsi
  ULONG_PTR v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _DMA_ADAPTER *v23; // r14
  struct _DMA_ADAPTER *v24; // rcx
  REGHANDLE v25; // rcx
  signed __int32 v26[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v29 = 0LL;
  v0 = 1;
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  if ( _InterlockedCompareExchange64(&PspShutdownThread, (signed __int64)KeGetCurrentThread(), 0LL) )
    return 0LL;
  if ( PsIsCurrentThreadInServerSilo() )
    NT_ASSERT("PsIsCurrentThreadInServerSilo() == 0");
  for ( i = 0LL; ; i = v5 )
  {
    NextSilo = PspGetNextSilo(i, 1);
    v5 = NextSilo;
    if ( !NextSilo )
      break;
    PsTerminateServerSilo((__int64)NextSilo);
  }
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PspFreezeProcessWorker, 0LL);
  v6 = 0;
  while ( 1 )
  {
    v7 = 0LL;
    NextProcess = (_DWORD *)PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( (NextProcess[543] & 0x1000) == 0
          && NextProcess != PsIdleProcess
          && NextProcess != *((_DWORD **)ServerSiloGlobals + 110)
          && !SmIsCompressionProcess(NextProcess) )
        {
          v10 = PsTerminateProcess(v9);
          if ( (NextProcess[281] & 4) == 0 && v10 != 290 && (unsigned int)v7 < 3 )
          {
            ObfReferenceObject(NextProcess);
            Object[v7] = NextProcess;
            v7 = (unsigned int)(v7 + 1);
          }
        }
        NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
      if ( (_DWORD)v7 )
      {
        v11 = KeWaitForMultipleObjects(v7, Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
        v12 = Object;
        v13 = (unsigned int)v7;
        do
        {
          HalPutDmaAdapter((PADAPTER_OBJECT)*v12++);
          --v13;
        }
        while ( v13 );
        if ( v11 == 258 )
          break;
      }
    }
    v6 = 0;
LABEL_42:
    if ( !(_DWORD)v7 )
      goto LABEL_26;
  }
  if ( (unsigned int)++v6 <= 0xA || PsContinueWaiting )
    goto LABEL_42;
  v0 = 0;
LABEL_26:
  if ( PopShutdownCleanly )
  {
    v14 = *((_QWORD *)ServerSiloGlobals + 110);
    if ( v14 )
    {
      PsTerminateProcess(v14);
      PspWaitForUsermodeExit(*((_QWORD *)ServerSiloGlobals + 110));
    }
  }
  v15 = (__int64 *)&PspSystemDlls;
  v16 = 6LL;
  do
  {
    v17 = *v15;
    if ( *v15 )
    {
      v18 = *(_QWORD *)(v17 + 40);
      if ( v18 )
      {
        MiUnmapViewOfSection(PsInitialSystemProcess, v18, 0, 0LL);
        v17 = *v15;
      }
      CurrentThread = KeGetCurrentThread();
      v23 = (struct _DMA_ADAPTER *)ObFastReplaceObject((volatile __int64 *)v17, 0LL);
      if ( v23 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v26, 0);
        if ( (*(_QWORD *)(v17 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive(v17 + 8);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v20, v21, v22);
        HalPutDmaAdapter(v23);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)PspSystemPartition + 14));
  *((_QWORD *)PspSystemPartition + 14) = 0LL;
  v24 = (struct _DMA_ADAPTER *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[1];
  if ( (unsigned __int64)v24 >= 2 )
  {
    HalPutDmaAdapter(v24);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[1] = 1LL;
  }
  v25 = qword_140C01AD0;
  qword_140C01AD0 = 0LL;
  dword_140C01AB0 = 0;
  EtwUnregister(v25);
  return v0;
}
