/*
 * XREFs of EtwpEventTracingCounterSetCallback @ 0x140982DA0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PcwAddInstance @ 0x1405E7060 (PcwAddInstance.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x1406B82EC (EtwpGetNextGuidEntry.c)
 *     WmiQueryTraceInformation @ 0x140788C40 (WmiQueryTraceInformation.c)
 */

__int64 __fastcall EtwpEventTracingCounterSetCallback(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  struct _PCW_BUFFER *v6; // r15
  _DWORD *v7; // rdi
  signed __int64 *i; // rdx
  signed __int64 *NextGuidEntry; // rax
  NTSTATUS v10; // r14d
  unsigned int v11; // ebx
  unsigned int *v12; // rsi
  ULONG Buffer; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING Name; // [rsp+40h] [rbp-21h] BYREF
  struct _PCW_DATA Data; // [rsp+50h] [rbp-11h] BYREF
  struct _PCW_DATA v16; // [rsp+60h] [rbp-1h] BYREF
  _DWORD v17[3]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+7Ch] [rbp+1Bh]
  int v19; // [rsp+84h] [rbp+23h]
  __int128 TraceInformation; // [rsp+88h] [rbp+27h] BYREF
  __int64 v21; // [rsp+98h] [rbp+37h]

  *(_QWORD *)&Name.Length = 3014700LL;
  Name.Buffer = L"EventTracingCounterSet";
  result = 0LL;
  v21 = 0LL;
  TraceInformation = 0LL;
  v5 = (unsigned int)(a1 - 2);
  if ( (unsigned int)v5 <= 1 )
  {
    v6 = *(struct _PCW_BUFFER **)(a2 + 24);
    v7 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals(v5, a2) + 108);
    if ( a3 == 1 )
    {
      v18 = 0LL;
      v19 = 0;
      for ( i = 0LL; ; i = NextGuidEntry )
      {
        NextGuidEntry = EtwpGetNextGuidEntry((__int64)v7, i, 0);
        if ( !NextGuidEntry )
          break;
        if ( *((_DWORD *)NextGuidEntry + 24) )
        {
          if ( (signed __int64 *)NextGuidEntry[7] == NextGuidEntry + 7 )
            ++v19;
          else
            LODWORD(v18) = v18 + 1;
        }
        else
        {
          ++HIDWORD(v18);
        }
      }
      v17[0] = v7[1031];
      v17[2] = v7[1030];
      v17[1] = v7[1029];
      Data.Data = v17;
      Data.Size = 24;
      return (unsigned int)PcwAddInstance(v6, &Name, 0, 1u, &Data);
    }
    else
    {
      v11 = 0;
      v10 = 0;
      for ( Buffer = 0; v11 < v7[4]; Buffer = ++v11 )
      {
        v12 = EtwpAcquireLoggerContextByLoggerId((__int64)v7, v11, 0);
        if ( v12 )
        {
          TraceInformation = 0LL;
          v21 = 0LL;
          if ( v12[79] == 1 )
            LODWORD(TraceInformation) = v12[1] * v12[62];
          else
            DWORD1(TraceInformation) = v12[1] * v12[62];
          LODWORD(v21) = v12[64];
          HIDWORD(v21) = v12[90];
          WmiQueryTraceInformation(LoggerEventsLoggedClass, (char *)&TraceInformation + 8, 8u, 0LL, &Buffer);
          v11 = Buffer;
          v16.Data = &TraceInformation;
          v16.Size = 24;
          v10 = PcwAddInstance(v6, (PCUNICODE_STRING)(v12 + 38), Buffer, 1u, &v16);
          EtwpReleaseLoggerContext(v12, 0);
          if ( v10 < 0 )
            break;
        }
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
