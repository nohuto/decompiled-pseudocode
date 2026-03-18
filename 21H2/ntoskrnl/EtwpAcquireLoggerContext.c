/*
 * XREFs of EtwpAcquireLoggerContext @ 0x1406EF020
 * Callers:
 *     EtwpTransitionToRealtime @ 0x140630D00 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x1406ECACC (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1406ECE0C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1406EDFEC (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1406EEF3C (EtwpQueryTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E4DAC (EtwpIncrementTraceFile.c)
 * Callees:
 *     EtwpCaptureString @ 0x1406EF170 (EtwpCaptureString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1407940E4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v5; // r9d
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  __int64 result; // rax
  __int64 v13; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 24) - SystemTraceControlGuid;
  v5 = *(unsigned __int8 *)(a1 + 4232);
  *a3 = 0LL;
  if ( !v3 )
    v3 = *(_QWORD *)(a2 + 32) - 0x3969A8086000829ALL;
  v7 = v5;
  if ( !v3 )
  {
    v9 = v5;
LABEL_8:
    LOBYTE(v7) = 1;
    v10 = EtwpAcquireLoggerContextByLoggerId(a1, v9, v7);
    *a3 = v10;
    v11 = v10 == 0;
    goto LABEL_9;
  }
  if ( !*(_WORD *)(a2 + 144) )
  {
    v8 = *(unsigned __int16 *)(a2 + 8);
    v9 = v5;
    if ( (_WORD)v8 != 0xFFFF )
      v9 = v8;
    if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 16) )
      return 3221225480LL;
    goto LABEL_8;
  }
  UnicodeString = 0LL;
  result = EtwpCaptureString(a2 + 144, &UnicodeString);
  if ( (int)result < 0 )
    return result;
  LOBYTE(v13) = 1;
  *a3 = EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, v13);
  RtlFreeUnicodeString(&UnicodeString);
  v11 = *a3 == 0;
LABEL_9:
  if ( v11 )
    return 3221226134LL;
  else
    return 0LL;
}
