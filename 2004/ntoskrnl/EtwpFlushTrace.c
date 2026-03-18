/*
 * XREFs of EtwpFlushTrace @ 0x1406C65C8
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwpCaptureString @ 0x140645208 (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContext @ 0x1406453F0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x140645514 (EtwpValidateLoggerInfo.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C6C5C (EtwpSynchronizeWithLogger.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406C6E08 (EtwpCheckLoggerControlAccess.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1406C868C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCCSwapStop @ 0x140780BB0 (EtwpCCSwapStop.c)
 *     EtwpEventWriteTemplateSession @ 0x14093687C (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x140939B88 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v8; // rbx
  ACCESS_MASK v9; // r8d
  int v10; // ebp
  unsigned __int16 *v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  UNICODE_STRING v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0LL;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v5, &v19);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_15:
      RtlFreeAnsiString(&UnicodeString);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v8 = v19;
    if ( (*(_DWORD *)(v19 + 12) & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      v9 = ((*(_DWORD *)(v19 + 12) & 0x100 | 0x400u) >> 3) | 0x40;
      if ( !*(_QWORD *)(v19 + 816) )
        v9 = (*(_DWORD *)(v19 + 12) & 0x100 | 0x400u) >> 3;
      v10 = *(_DWORD *)(v19 + 12) & 0x400;
      if ( v10 )
      {
        if ( !*(_QWORD *)(a2 + 136) || (v11 = (unsigned __int16 *)(a2 + 128), !*(_WORD *)(a2 + 128)) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_14;
        }
        v9 |= 0x40u;
      }
      else
      {
        v11 = (unsigned __int16 *)(a2 + 128);
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v9);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v10 )
        {
          v12 = EtwpSynchronizeWithLogger(v8, 4LL);
LABEL_11:
          LoggerInfoFromContext = v12;
          if ( v12 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v8);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v13, &ETW_EVENT_FLUSH_TRACE, v8);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = EtwpCaptureString(v11, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v14 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v8 + 200) = v14;
          _InterlockedOr((volatile signed __int32 *)(v8 + 836), 1u);
          v15 = *(_DWORD *)(v8 + 12);
          v8 = v19;
          if ( (v15 & 0x2000000) != 0 )
          {
            v16 = 32LL * *(unsigned __int8 *)(v19 + 834) + a1 + 4260;
            if ( v16 )
            {
              v17 = *(_DWORD *)(v16 + 4);
              if ( (v17 & 4) != 0 && (v17 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v19 + 216), 0LL);
            }
          }
          v12 = EtwpBufferingModeFlush(v8);
          goto LABEL_11;
        }
      }
    }
LABEL_14:
    EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    goto LABEL_15;
  }
  return result;
}
