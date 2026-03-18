/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x14097E330
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwpGetNextGuidEntry @ 0x1405F35EC (EtwpGetNextGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405F3B64 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1405F3C38 (EtwpReleaseLoggerContext.c)
 *     PcwAddInstance @ 0x14065C6D0 (PcwAddInstance.c)
 *     WmiQueryTraceInformation @ 0x140774290 (WmiQueryTraceInformation.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _PCW_BUFFER *v5; // r15
  _DWORD *v6; // rdi
  signed __int64 *i; // rdx
  signed __int64 *NextGuidEntry; // rax
  NTSTATUS v9; // r14d
  unsigned int v10; // ebx
  __int64 v11; // rsi
  ULONG Buffer; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+40h] [rbp-21h] BYREF
  struct _PCW_DATA Data; // [rsp+50h] [rbp-11h] BYREF
  struct _PCW_DATA v15; // [rsp+60h] [rbp-1h] BYREF
  _DWORD v16[3]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v17; // [rsp+7Ch] [rbp+1Bh]
  int v18; // [rsp+84h] [rbp+23h]
  __int128 TraceInformation; // [rsp+88h] [rbp+27h] BYREF
  __int64 v20; // [rsp+98h] [rbp+37h]

  *(_QWORD *)&Name.Length = 3014700LL;
  Name.Buffer = L"EventTracingCounterSet";
  result = 0LL;
  v20 = 0LL;
  TraceInformation = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v5 = *(struct _PCW_BUFFER **)(a2 + 24);
    v6 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    if ( a3 == 1 )
    {
      v17 = 0LL;
      v18 = 0;
      for ( i = 0LL; ; i = NextGuidEntry )
      {
        NextGuidEntry = EtwpGetNextGuidEntry((__int64)v6, i, 0);
        if ( !NextGuidEntry )
          break;
        if ( *((_DWORD *)NextGuidEntry + 24) )
        {
          if ( (signed __int64 *)NextGuidEntry[7] == NextGuidEntry + 7 )
            ++v18;
          else
            LODWORD(v17) = v17 + 1;
        }
        else
        {
          ++HIDWORD(v17);
        }
      }
      v16[0] = v6[1031];
      v16[2] = v6[1030];
      v16[1] = v6[1029];
      Data.Data = v16;
      Data.Size = 24;
      return (unsigned int)PcwAddInstance(v5, &Name, 0, 1u, &Data);
    }
    else
    {
      v10 = 0;
      v9 = 0;
      for ( Buffer = 0; v10 < v6[4]; Buffer = ++v10 )
      {
        v11 = EtwpAcquireLoggerContextByLoggerId((__int64)v6, v10, 0);
        if ( v11 )
        {
          TraceInformation = 0LL;
          v20 = 0LL;
          if ( *(_DWORD *)(v11 + 316) == 1 )
            LODWORD(TraceInformation) = *(_DWORD *)(v11 + 4) * *(_DWORD *)(v11 + 248);
          else
            DWORD1(TraceInformation) = *(_DWORD *)(v11 + 4) * *(_DWORD *)(v11 + 248);
          LODWORD(v20) = *(_DWORD *)(v11 + 256);
          HIDWORD(v20) = *(_DWORD *)(v11 + 360);
          WmiQueryTraceInformation(LoggerEventsLoggedClass, (char *)&TraceInformation + 8, 8u, 0LL, &Buffer);
          v10 = Buffer;
          v15.Data = &TraceInformation;
          v15.Size = 24;
          v9 = PcwAddInstance(v5, (PCUNICODE_STRING)(v11 + 152), Buffer, 1u, &v15);
          EtwpReleaseLoggerContext((unsigned int *)v11, 0);
          if ( v9 < 0 )
            break;
        }
      }
    }
    return (unsigned int)v9;
  }
  return result;
}
