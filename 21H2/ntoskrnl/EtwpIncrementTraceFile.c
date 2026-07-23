/*
 * XREFs of EtwpIncrementTraceFile @ 0x140934DB4
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwpGenerateFileName @ 0x14060A1EC (EtwpGenerateFileName.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x1406B61D0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1406B62F4 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406B6434 (EtwpGetLoggerInfoFromContext.c)
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
  unsigned int *v11; // rbx
  unsigned int *v12; // [rsp+40h] [rbp+18h] BYREF

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
      if ( (v12[3] & 8) != 0 )
      {
        v11 = v12;
        if ( (v12[209] & 1) == 0 )
        {
          EtwpSynchronizeWithLogger((__int64)v12, 4u);
          EtwpGenerateFileName(
            (unsigned __int16 *)v11 + 92,
            (volatile signed __int32 *)v11 + 78,
            (UNICODE_STRING *)(v11 + 50));
          LoggerInfoFromContext = EtwpSynchronizeWithLogger((__int64)v11, 1u);
        }
        if ( LoggerInfoFromContext >= 0 )
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v11);
      }
      else
      {
        LoggerInfoFromContext = -1073741811;
      }
      EtwpReleaseLoggerContext(v11, 1);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v9, v10);
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
