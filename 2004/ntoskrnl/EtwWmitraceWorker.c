/*
 * XREFs of EtwWmitraceWorker @ 0x1409392C4
 * Callers:
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PsGetSiloBySessionId @ 0x1405D7E74 (PsGetSiloBySessionId.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     EtwpQueryTrace @ 0x140645318 (EtwpQueryTrace.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     EtwpStopTrace @ 0x1406C75AC (EtwpStopTrace.c)
 *     EtwpStartTrace @ 0x1406C7834 (EtwpStartTrace.c)
 *     EtwEnableTrace @ 0x140777840 (EtwEnableTrace.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1409395EC (EtwpPrepareWmitraceLoggerInfo.c)
 */

void EtwWmitraceWorker()
{
  __int64 v0; // rsi
  int SiloBySessionId; // ebx
  int v2; // r14d
  __int64 v3; // r8
  int Trace; // eax
  int v5; // eax
  __int64 v6; // r8
  int updated; // eax
  __int64 v8; // r8
  int v9; // eax
  int started; // eax
  int (__fastcall *DestinationString)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int); // [rsp+48h] [rbp-C0h] BYREF
  STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v13[11]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v13, 0, sizeof(v13));
  DestinationString = 0LL;
  DestinationString_8 = 0LL;
  if ( dword_140C19C44 )
  {
    SiloBySessionId = PsGetSiloBySessionId(dword_140C19C44, &DestinationString);
    if ( SiloBySessionId < 0 || !DestinationString )
      goto LABEL_33;
    v0 = *(_QWORD *)(*((_QWORD *)DestinationString + 159) + 864LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v13);
    RtlInitAnsiString(&DestinationString_8, qword_140C19C48);
    RtlAnsiStringToUnicodeString(&v13[9], &DestinationString_8, 1u);
    *(_DWORD *)(&v13[3].MaximumLength + 1) = dword_140C19D10;
    v13[3].Buffer = (wchar_t *)__PAIR64__(dword_140C19D0C, dword_140C19D14);
    *(_DWORD *)&v13[3].Length = dword_140C19D18;
    *(_DWORD *)&v13[4].Length = dword_140C19D1C;
    *(_DWORD *)(&v13[4].MaximumLength + 1) = dword_140C19D20;
    if ( byte_140C19C89 )
    {
      RtlInitAnsiString(&DestinationString_8, &byte_140C19C89);
      RtlAnsiStringToUnicodeString(&v13[8], &DestinationString_8, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v13);
    SiloBySessionId = started;
    if ( started >= 0 )
      EtwpWmitraceParams = LOWORD(v13[0].Buffer);
    else
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&v13[9]);
    if ( byte_140C19C89 )
      RtlFreeAnsiString(&v13[8]);
  }
  else
  {
    v2 = 2;
    if ( EtwWmitraceWork == 2 )
    {
      EtwpPrepareWmitraceLoggerInfo(v13);
      Trace = EtwpQueryTrace(v0, (__int64)v13, v8);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      v9 = EtwpStopTrace(v0, v13, 0);
      SiloBySessionId = v9;
      if ( v9 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v9);
    }
    else
    {
      if ( EtwWmitraceWork != 3 )
      {
        if ( (unsigned __int8)(EtwWmitraceWork - 4) > 2u )
        {
          SiloBySessionId = -1073741637;
          DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
          goto LABEL_33;
        }
        EtwpPrepareWmitraceLoggerInfo(v13);
        Trace = EtwpQueryTrace(v0, (__int64)v13, v3);
        SiloBySessionId = Trace;
        if ( Trace >= 0 )
        {
          if ( EtwWmitraceWork == 4 )
          {
            v2 = 1;
          }
          else if ( EtwWmitraceWork == 5 )
          {
            v2 = 0;
          }
          v5 = EtwEnableTrace(
                 (int)&unk_140C19C5C,
                 0,
                 EtwpWmitraceParams,
                 v2,
                 byte_140C19C6C,
                 *(__int64 *)qword_140C19C48,
                 qword_140C19C50,
                 dword_140C19C58);
          SiloBySessionId = v5;
          if ( v5 < 0 )
            DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v5);
          goto LABEL_33;
        }
LABEL_22:
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
        goto LABEL_33;
      }
      EtwpPrepareWmitraceLoggerInfo(v13);
      Trace = EtwpQueryTrace(v0, (__int64)v13, v6);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      *(_DWORD *)&v13[4].Length |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v13);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
    }
  }
LABEL_33:
  dword_140C19D28 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
