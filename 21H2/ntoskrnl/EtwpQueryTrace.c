/*
 * XREFs of EtwpQueryTrace @ 0x1406B60F8
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14093CA94 (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwpCheckSecurityLoggerAccess @ 0x140622484 (EtwpCheckSecurityLoggerAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x1406B61D0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406B62F4 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B6434 (EtwpGetLoggerInfoFromContext.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  unsigned int *v13; // rcx
  unsigned int *v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v14);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_3:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v10, v11);
      return (unsigned int)LoggerInfoFromContext;
    }
    v12 = (__int64)v14;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u, (__int64)v14);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v12 + 832) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = EtwpCheckSecurityLoggerAccess((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( LoggerInfoFromContext < 0 )
        {
          v13 = v14;
          goto LABEL_9;
        }
        v12 = (__int64)v14;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v12);
    }
    v13 = (unsigned int *)v12;
LABEL_9:
    EtwpReleaseLoggerContext(v13, 1);
    goto LABEL_3;
  }
  return result;
}
