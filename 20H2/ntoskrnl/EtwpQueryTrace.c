/*
 * XREFs of EtwpQueryTrace @ 0x1407147A0
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x14093F0F4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseLoggerContext @ 0x140669F18 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14066AA50 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCheckSecurityLoggerAccess @ 0x14071211C (EtwpCheckSecurityLoggerAccess.c)
 *     EtwpAcquireLoggerContext @ 0x140714878 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14071499C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x140714BA0 (EtwpGetLoggerInfoFromContext.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v9; // rbx
  unsigned int *v10; // rcx
  unsigned int *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v11);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_3:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v9 = (__int64)v11;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u, (__int64)v11);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v9 + 832) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = EtwpCheckSecurityLoggerAccess((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( LoggerInfoFromContext < 0 )
        {
          v10 = v11;
          goto LABEL_9;
        }
        v9 = (__int64)v11;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v9);
    }
    v10 = (unsigned int *)v9;
LABEL_9:
    EtwpReleaseLoggerContext(v10, 1);
    goto LABEL_3;
  }
  return result;
}
