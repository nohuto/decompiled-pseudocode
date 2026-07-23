/*
 * XREFs of EtwpAcquireLoggerContext @ 0x1406453F0
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1403F2950 (EtwpTransitionToRealtime.c)
 *     EtwpQueryTrace @ 0x140645318 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406C65C8 (EtwpFlushTrace.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409315E4 (EtwpIncrementTraceFile.c)
 * Callees:
 *     EtwpCaptureString @ 0x140645208 (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140645544 (EtwpAcquireLoggerContextByLoggerName.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // r9d
  __int64 *v5; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // r8
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 4208);
  v5 = a3;
  *a3 = 0LL;
  v7 = 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v8 )
    v7 = v3;
  if ( (_DWORD)v7 != v3 && *(_WORD *)(a2 + 144) )
  {
    UnicodeString = 0LL;
    result = EtwpCaptureString((unsigned __int16 *)(a2 + 144), &UnicodeString);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v12) = 1;
    *v5 = EtwpAcquireLoggerContextByLoggerName(a1, &UnicodeString, v12);
    RtlFreeAnsiString(&UnicodeString);
    v10 = *v5 == 0;
  }
  else
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = v3;
      if ( *(_WORD *)(a2 + 8) != 0xFFFF )
        v7 = *(unsigned __int16 *)(a2 + 8);
      if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 16) )
        return 3221225480LL;
    }
    LOBYTE(a3) = 1;
    v9 = EtwpAcquireLoggerContextByLoggerId(a1, v7, a3);
    *v5 = v9;
    v10 = v9 == 0;
  }
  if ( v10 )
    return 3221226134LL;
  else
    return 0LL;
}
