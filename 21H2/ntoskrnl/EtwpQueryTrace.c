/*
 * XREFs of EtwpQueryTrace @ 0x1406EEF3C
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1409E8E6C (EtwWmitraceWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1406E0450 (EtwCheckSecurityLoggerAccess.c)
 *     EtwpAcquireLoggerContext @ 0x1406EF020 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406EF140 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406EF280 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14079435C (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
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
LABEL_8:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v9 = v12;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v9 + 816) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = EtwCheckSecurityLoggerAccess(
                                  (__int64)KeGetCurrentThread()->ApcState.Process,
                                  KeGetCurrentThread()->PreviousMode);
        if ( LoggerInfoFromContext < 0 )
        {
          v11 = v12;
          goto LABEL_7;
        }
        v9 = v12;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v9);
    }
    v11 = v9;
LABEL_7:
    LOBYTE(v10) = 1;
    EtwpReleaseLoggerContext(v11, v10);
    goto LABEL_8;
  }
  return result;
}
