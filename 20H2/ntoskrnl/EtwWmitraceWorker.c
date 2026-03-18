/*
 * XREFs of EtwWmitraceWorker @ 0x14093F0F4
 * Callers:
 *     ExpDebuggerWorker @ 0x1409B8030 (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14023DB90 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     PsGetSiloBySessionId @ 0x14063BBB4 (PsGetSiloBySessionId.c)
 *     EtwpStartTrace @ 0x140713044 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x140713944 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407147A0 (EtwpQueryTrace.c)
 *     EtwEnableTrace @ 0x140785E40 (EtwEnableTrace.c)
 *     EtwpUpdateTrace @ 0x14078C87C (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x14093F41C (EtwpPrepareWmitraceLoggerInfo.c)
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
  __int64 v9; // r9
  int v10; // eax
  int started; // eax
  int (__fastcall *DestinationString)(_DMA_ADAPTER *, _DEVICE_OBJECT *, _MDL *, void *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, _IRP *, _SCATTER_GATHER_LIST *, void *), void *, unsigned __int8, void *, unsigned int); // [rsp+48h] [rbp-C0h] BYREF
  STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v14[11]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v14, 0, sizeof(v14));
  DestinationString = 0LL;
  DestinationString_8 = 0LL;
  if ( dword_140C19C84 )
  {
    SiloBySessionId = PsGetSiloBySessionId((unsigned int)dword_140C19C84, &DestinationString);
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
    EtwpPrepareWmitraceLoggerInfo(v14);
    RtlInitAnsiString(&DestinationString_8, qword_140C19C88);
    RtlAnsiStringToUnicodeString(&v14[9], &DestinationString_8, 1u);
    *(_DWORD *)(&v14[3].MaximumLength + 1) = dword_140C19D50;
    v14[3].Buffer = (wchar_t *)__PAIR64__(dword_140C19D4C, dword_140C19D54);
    *(_DWORD *)&v14[3].Length = dword_140C19D58;
    *(_DWORD *)&v14[4].Length = dword_140C19D5C;
    *(_DWORD *)(&v14[4].MaximumLength + 1) = dword_140C19D60;
    if ( byte_140C19CC9 )
    {
      RtlInitAnsiString(&DestinationString_8, &byte_140C19CC9);
      RtlAnsiStringToUnicodeString(&v14[8], &DestinationString_8, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v14);
    SiloBySessionId = started;
    if ( started >= 0 )
      EtwpWmitraceParams = LOWORD(v14[0].Buffer);
    else
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&v14[9]);
    if ( byte_140C19CC9 )
      RtlFreeAnsiString(&v14[8]);
  }
  else
  {
    v2 = 2;
    if ( EtwWmitraceWork == 2 )
    {
      EtwpPrepareWmitraceLoggerInfo(v14);
      Trace = EtwpQueryTrace(v0, (__int64)v14, v8);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      v10 = EtwpStopTrace(v0, (__int64)v14, 0LL, v9);
      SiloBySessionId = v10;
      if ( v10 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v10);
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
        EtwpPrepareWmitraceLoggerInfo(v14);
        Trace = EtwpQueryTrace(v0, (__int64)v14, v3);
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
                 (int)&unk_140C19C9C,
                 0,
                 EtwpWmitraceParams,
                 v2,
                 byte_140C19CAC,
                 *(__int64 *)qword_140C19C88,
                 qword_140C19C90,
                 dword_140C19C98);
          SiloBySessionId = v5;
          if ( v5 < 0 )
            DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v5);
          goto LABEL_33;
        }
LABEL_22:
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
        goto LABEL_33;
      }
      EtwpPrepareWmitraceLoggerInfo(v14);
      Trace = EtwpQueryTrace(v0, (__int64)v14, v6);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      *(_DWORD *)&v14[4].Length |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v14);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
    }
  }
LABEL_33:
  dword_140C19D68 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
