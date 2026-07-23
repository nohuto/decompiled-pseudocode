/*
 * XREFs of EtwpGetSoftRestartInformation @ 0x140948744
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetSoftRestartInformation(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // edi
  char v6; // r14
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int *v14; // rdi
  int v15; // ebx
  __int64 v16; // rax

  v4 = a2;
  v6 = 0;
  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo(a1, a2) )
    return 3221225659LL;
  *a3 = 24;
  if ( v4 < 0x18 )
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
    v15 = EtwpCheckLoggerControlAccess(1u, (__int64)v10);
    if ( v15 >= 0 )
    {
      v16 = *((_QWORD *)v14 + 134);
      if ( v16 )
        v6 = *(_BYTE *)(v16 + 32);
    }
    EtwpReleaseLoggerContext(v14, 1);
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
