/*
 * XREFs of EtwpQueryTrace @ 0x140645318
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409392C4 (EtwWmitraceWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwpAcquireLoggerContext @ 0x1406453F0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140645514 (EtwpValidateLoggerInfo.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406C6E08 (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406C868C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCheckSecurityLoggerAccess @ 0x140711314 (EtwpCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  result = EtwpValidateLoggerInfo(a2, a2, a3, a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v12);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_3:
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v9 = v12;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v9 + 832) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = EtwpCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process);
        if ( LoggerInfoFromContext < 0 )
        {
          v11 = v12;
          goto LABEL_9;
        }
        v9 = v12;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v9);
    }
    v11 = v9;
LABEL_9:
    LOBYTE(v10) = 1;
    EtwpReleaseLoggerContext(v11, v10);
    goto LABEL_3;
  }
  return result;
}
