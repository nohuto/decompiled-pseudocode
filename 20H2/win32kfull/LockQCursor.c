/*
 * XREFs of LockQCursor @ 0x1C00FC500
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058A0 (xxxSetModernAppWindow.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0094BE8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1C01D338C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01D36F8 (-CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LockQCursor(__int64 a1, struct tagCURSOR *a2, __int64 a3, __int64 a4)
{
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(a1 + 388) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (unsigned int)dword_1C032FB30 > 5 && (qword_1C032FB40 & 8) != 0 && (qword_1C032FB48 & 8) == qword_1C032FB48 )
  {
    v8 = a1;
    v9 = (__int64)a2;
    v10 = (__int64)InputTraceLogging::CursorToString(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (int)&dword_1C032FB30,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
  v7[1] = a2;
  v7[0] = a1 + 376;
  return HMAssignmentLock(v7);
}
