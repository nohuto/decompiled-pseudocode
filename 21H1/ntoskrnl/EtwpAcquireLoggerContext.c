/*
 * XREFs of EtwpAcquireLoggerContext @ 0x14067A62C
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F16C0 (EtwpTransitionToRealtime.c)
 *     EtwpFlushTrace @ 0x140678E30 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406796F8 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14067A554 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x140930334 (EtwpIncrementTraceFile.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14067A780 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpCaptureString @ 0x14067A844 (EtwpCaptureString.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // r9d
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 4208);
  *a3 = 0LL;
  v7 = -1;
  v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v8 )
    v7 = v3;
  if ( v7 != v3 && *(_WORD *)(a2 + 144) )
  {
    UnicodeString = 0LL;
    result = EtwpCaptureString(a2 + 144, &UnicodeString);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v12) = 1;
    *a3 = EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, v12);
    RtlFreeAnsiString(&UnicodeString);
    v10 = *a3 == 0;
  }
  else
  {
    if ( v7 == -1 )
    {
      v7 = v3;
      if ( *(_WORD *)(a2 + 8) != 0xFFFF )
        v7 = *(unsigned __int16 *)(a2 + 8);
      if ( v7 >= *(_DWORD *)(a1 + 16) )
        return 3221225480LL;
    }
    v9 = EtwpAcquireLoggerContextByLoggerId(a1, v7, 1);
    *a3 = v9;
    v10 = v9 == 0;
  }
  if ( v10 )
    return 3221226134LL;
  else
    return 0LL;
}
