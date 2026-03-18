/*
 * XREFs of ?OnThreadExit@InkProcessor@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00FD180
 * Callers:
 *     InkProcessorOnThreadExit @ 0x1C00FD130 (InkProcessorOnThreadExit.c)
 * Callees:
 *     ?OnThreadExit@InkFeedbackServer@@QEAAXPEBUtagTHREADINFO@@@Z @ 0x1C00FD1F4 (-OnThreadExit@InkFeedbackServer@@QEAAXPEBUtagTHREADINFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C024FFC0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall InkProcessor::OnThreadExit(InkProcessor *this, const struct tagTHREADINFO *a2)
{
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+40h] [rbp+8h] BYREF
  const char *v8; // [rsp+50h] [rbp+18h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  if ( *((_BYTE *)this + 8) )
  {
    InkFeedbackServer::OnThreadExit((InkProcessor *)((char *)this + 96), a2);
  }
  else if ( (unsigned int)dword_1C032B288 > 2 )
  {
    v7 = -1073741823;
    v8 = "Ink processor not enabled";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v4,
      (unsigned int)&unk_1C02F2423,
      v5,
      v6,
      (__int64)&v7,
      (__int64)&v8);
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
