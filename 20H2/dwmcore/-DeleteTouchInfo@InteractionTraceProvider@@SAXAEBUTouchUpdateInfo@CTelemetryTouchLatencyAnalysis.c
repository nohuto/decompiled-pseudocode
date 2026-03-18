/*
 * XREFs of ?DeleteTouchInfo@InteractionTraceProvider@@SAXAEBUTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@_K@Z @ 0x18015391C
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800037B0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333@Z @ 0x180153234 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

void __fastcall InteractionTraceProvider::DeleteTouchInfo(
        const struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // [rsp+78h] [rbp+17h] BYREF
  __int64 v5; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v6; // [rsp+88h] [rbp+27h] BYREF
  __int64 v7; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v8; // [rsp+98h] [rbp+37h] BYREF
  __int64 v9; // [rsp+A0h] [rbp+3Fh] BYREF
  __int64 v10; // [rsp+A8h] [rbp+47h] BYREF
  __int64 v11; // [rsp+B0h] [rbp+4Fh] BYREF
  __int64 v12; // [rsp+D8h] [rbp+77h] BYREF
  __int64 v13; // [rsp+E0h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_180341EB8 > 5 && (qword_180341EC8 & 2) != 0 && (qword_180341ED0 & 2) == qword_180341ED0 )
  {
    v12 = *((unsigned int *)a1 + 17);
    v13 = *((unsigned int *)a1 + 16);
    v4 = *((_QWORD *)a1 + 6);
    v5 = *((_QWORD *)a1 + 5);
    v6 = *((_QWORD *)a1 + 4);
    v7 = *((_QWORD *)a1 + 3);
    v8 = *((_QWORD *)a1 + 2);
    v9 = *((_QWORD *)a1 + 1);
    v11 = *(_QWORD *)a1;
    v10 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)a1,
      byte_1802E0AE7,
      a3,
      a4,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v13,
      (__int64)&v12);
  }
}
