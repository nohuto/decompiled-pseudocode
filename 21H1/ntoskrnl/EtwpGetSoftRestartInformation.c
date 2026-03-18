/*
 * XREFs of EtwpGetSoftRestartInformation @ 0x140943D70
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405F2620 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpGetSoftRestartInformation(__int64 a1, unsigned int a2, _DWORD *a3)
{
  char v6; // r14
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rax

  v6 = 0;
  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  *a3 = 24;
  if ( a2 < 0x18 )
    return 3221225476LL;
  v8 = (unsigned __int16)*(_QWORD *)(a1 + 8);
  if ( v8 == 0xFFFF )
    v8 = *(unsigned __int8 *)(EtwpHostSiloState + 4208);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v8, 1);
  v14 = v10;
  if ( v10 )
  {
    v15 = EtwpCheckLoggerControlAccess(1u, v10);
    if ( v15 >= 0 )
    {
      v16 = *(_QWORD *)(v14 + 1104);
      if ( v16 )
        v6 = *(_BYTE *)(v16 + 32);
    }
    EtwpReleaseLoggerContext((unsigned int *)v14, 1);
  }
  else
  {
    v15 = -1073741162;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  if ( v15 >= 0 )
    *(_BYTE *)(a1 + 16) = v6;
  return (unsigned int)v15;
}
