/*
 * XREFs of LockQCursor @ 0x1C0039650
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005A00 (xxxSetModernAppWindow.c)
 *     zzzAttachToQueue @ 0x1C0038AB4 (zzzAttachToQueue.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1C01D419C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01D4508 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LockQCursor(__int64 a1, struct tagCURSOR *a2)
{
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 388) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( (unsigned int)dword_1C0330B30 > 5 && (qword_1C0330B40 & 8) != 0 && (qword_1C0330B48 & 8) == qword_1C0330B48 )
  {
    v6 = a1;
    v7 = (__int64)a2;
    v8 = (__int64)InputTraceLogging::CursorToString(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (int)&dword_1C0330B30,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
  v5[1] = a2;
  v5[0] = a1 + 376;
  return HMAssignmentLock(v5);
}
