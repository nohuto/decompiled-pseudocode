/*
 * XREFs of ?OnThreadExit@InkProcessor@@QAEXPBUtagTHREADINFO@@@Z @ 0x99B5E
 * Callers:
 *     _InkProcessorOnThreadExit@4 @ 0x99B32 (_InkProcessorOnThreadExit@4.c)
 * Callees:
 *     ?OnThreadExit@InkFeedbackServer@@QAEXPBUtagTHREADINFO@@@Z @ 0x99BA2 (-OnThreadExit@InkFeedbackServer@@QAEXPBUtagTHREADINFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

void __thiscall InkProcessor::OnThreadExit(InkProcessor *this, const struct tagTHREADINFO *a2)
{
  int v3; // ecx
  int v4; // [esp+4h] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 4) )
  {
    InkFeedbackServer::OnThreadExit((InkProcessor *)((char *)this + 48), a2);
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = (const struct tagTHREADINFO *)"Ink processor not enabled";
    v4 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v3,
      v3,
      &v4,
      &a2);
  }
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
}
