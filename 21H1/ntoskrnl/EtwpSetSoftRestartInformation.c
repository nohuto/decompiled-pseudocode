/*
 * XREFs of EtwpSetSoftRestartInformation @ 0x140944B54
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405F2620 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     EtwpCaptureString @ 0x14067A844 (EtwpCaptureString.c)
 *     EtwpCancelMemoryPreservation @ 0x140943D0C (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x14094405C (EtwpPreserveLogger.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpSetSoftRestartInformation(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  UNICODE_STRING *PoolWithTag; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v16 = 0LL;
  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  *((_QWORD *)&v16 + 1) = a1 + 18;
  LOWORD(v16) = a2 - 18;
  WORD1(v16) = a2 - 18;
  if ( (_WORD)a2 == 18 || (result = EtwpCaptureString((unsigned __int16 *)&v16, &DestinationString), (int)result >= 0) )
  {
    v14 = *(_BYTE *)(a1 + 16);
    v5 = (unsigned __int16)*(_QWORD *)(a1 + 8);
    if ( v5 == 0xFFFF )
      v5 = *(unsigned __int8 *)(EtwpHostSiloState + 4208);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v5, 1);
    v8 = v7;
    if ( !v7 )
    {
      v9 = -1073741162;
      goto LABEL_32;
    }
    v9 = EtwpCheckLoggerControlAccess(0x80u, v7);
    if ( v9 >= 0 )
    {
      PoolWithTag = *(UNICODE_STRING **)(v8 + 1104);
      if ( !v14 )
      {
        if ( PoolWithTag && LOBYTE(PoolWithTag[2].Length) )
        {
          EtwpCancelMemoryPreservation(v8);
          RtlFreeAnsiString(PoolWithTag + 1);
          LOBYTE(PoolWithTag[2].Length) = 0;
          v9 = 0;
        }
        else
        {
          v9 = -1073741054;
        }
        goto LABEL_32;
      }
      if ( !PoolWithTag )
      {
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4B777445u);
        if ( !PoolWithTag )
        {
          v9 = -1073741801;
          goto LABEL_32;
        }
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        *(_QWORD *)&PoolWithTag[2].Length = 0LL;
        *(_QWORD *)(v8 + 1104) = PoolWithTag;
      }
      if ( LOBYTE(PoolWithTag[2].Length) )
      {
        v9 = -1073741053;
      }
      else if ( DestinationString.Length )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x400) == 0 || *(_DWORD *)(v8 + 316) == 1 || (*(_DWORD *)(v8 + 4) & 0xFFF) != 0 )
        {
          v9 = -1073741637;
        }
        else
        {
          PoolWithTag[1] = DestinationString;
          DestinationString.Buffer = 0LL;
          LOBYTE(PoolWithTag[2].Length) = 1;
          v9 = 0;
          if ( EtwpKsrPrepared )
          {
            v9 = EtwpPreserveLogger(v8);
            if ( v9 < 0 )
            {
              LOBYTE(PoolWithTag[2].Length) = 0;
              RtlFreeAnsiString(PoolWithTag + 1);
            }
          }
        }
      }
      else
      {
        v9 = -1073741672;
      }
    }
LABEL_32:
    if ( v8 )
      EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    RtlFreeAnsiString(&DestinationString);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
    return (unsigned int)v9;
  }
  return result;
}
