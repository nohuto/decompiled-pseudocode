/*
 * XREFs of EtwpIncrementTraceFile @ 0x140930334
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpGenerateFileName @ 0x140677150 (EtwpGenerateFileName.c)
 *     EtwpSynchronizeWithLogger @ 0x1406777EC (EtwpSynchronizeWithLogger.c)
 *     EtwpAcquireLoggerContext @ 0x14067A62C (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14067A750 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14067A954 (EtwpGetLoggerInfoFromContext.c)
 */

__int64 __fastcall EtwpIncrementTraceFile(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v12);
    if ( LoggerInfoFromContext >= 0 )
    {
      v11 = v12;
      if ( (*(_DWORD *)(v12 + 12) & 8) != 0 )
      {
        v11 = v12;
        if ( (*(_DWORD *)(v12 + 836) & 1) == 0 )
        {
          EtwpSynchronizeWithLogger(v12, 4u);
          EtwpGenerateFileName(
            (unsigned __int16 *)(v11 + 184),
            (volatile signed __int32 *)(v11 + 312),
            (UNICODE_STRING *)(v11 + 200));
          LoggerInfoFromContext = EtwpSynchronizeWithLogger(v11, 1u);
        }
        if ( LoggerInfoFromContext >= 0 )
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, v11);
      }
      else
      {
        LoggerInfoFromContext = -1073741811;
      }
      EtwpReleaseLoggerContext((unsigned int *)v11, 1);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v9, v10);
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
