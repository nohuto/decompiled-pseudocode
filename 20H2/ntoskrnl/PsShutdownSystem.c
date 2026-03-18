/*
 * XREFs of PsShutdownSystem @ 0x14090D244
 * Callers:
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     ObFastReplaceObject @ 0x140248084 (ObFastReplaceObject.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     SmIsCompressionProcess @ 0x14030D9E8 (SmIsCompressionProcess.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1403217D4 (ExfAcquireReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     PsEnumProcesses @ 0x140659378 (PsEnumProcesses.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     PspGetNextSilo @ 0x140665070 (PspGetNextSilo.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 *     EtwUnregister @ 0x14075BB40 (EtwUnregister.c)
 *     PsTerminateServerSilo @ 0x140908550 (PsTerminateServerSilo.c)
 *     PspWaitForUsermodeExit @ 0x14090DB3C (PspWaitForUsermodeExit.c)
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
  struct _DMA_ADAPTER *v20; // r14
  struct _DMA_ADAPTER *v21; // rcx
  REGHANDLE v22; // rcx
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v26; // [rsp+58h] [rbp-30h]

  Timeout.QuadPart = -1000000000LL;
  *(_OWORD *)Object = 0LL;
  v26 = 0LL;
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
          v10 = PsTerminateProcess(v9, 0xC00002EB);
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
      PsTerminateProcess(v14, 0xC00002EB);
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
        MiUnmapViewOfSection(PsInitialSystemProcess, v18, 0, 0);
        v17 = *v15;
      }
      CurrentThread = KeGetCurrentThread();
      v20 = (struct _DMA_ADAPTER *)ObFastReplaceObject((volatile __int64 *)v17, 0LL);
      if ( v20 )
      {
        --CurrentThread->KernelApcDisable;
        _InterlockedOr(v23, 0);
        if ( (*(_QWORD *)(v17 + 8) & 1) != 0 )
          ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v17 + 8));
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        HalPutDmaAdapter(v20);
      }
    }
    ++v15;
    --v16;
  }
  while ( v16 );
  ZwClose(*((HANDLE *)PspSystemPartition + 14));
  *((_QWORD *)PspSystemPartition + 14) = 0LL;
  v21 = (struct _DMA_ADAPTER *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[1];
  if ( (unsigned __int64)v21 >= 2 )
  {
    HalPutDmaAdapter(v21);
    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[1] = 1LL;
  }
  v22 = qword_140C01AD0;
  qword_140C01AD0 = 0LL;
  dword_140C01AB0 = 0;
  EtwUnregister(v22);
  return v0;
}
