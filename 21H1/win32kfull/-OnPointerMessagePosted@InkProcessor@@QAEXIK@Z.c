/*
 * XREFs of ?OnPointerMessagePosted@InkProcessor@@QAEXIK@Z @ 0x1AC217
 * Callers:
 *     _InkProcessorOnPointerMessagePosted@8 @ 0x1839C5 (_InkProcessorOnPointerMessagePosted@8.c)
 * Callees:
 *     ?OnPointerMessagePosted@InkFeedbackServer@@QAEXIPBUtagPOINTER_INFO@@@Z @ 0xF57D4 (-OnPointerMessagePosted@InkFeedbackServer@@QAEXIPBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YGJKPAPBUtagPOINTER_INFO@@@Z @ 0x1A1621 (-GetPointerInfoByPointerMsgId@Pointer@@YGJKPAPBUtagPOINTER_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

void __thiscall InkProcessor::OnPointerMessagePosted(struct tagPOINTER_INFO **this, const char *a2, unsigned int a3)
{
  const struct tagPOINTER_INFO *v3; // esi
  int v5; // ecx
  const struct tagPOINTER_INFO *v6; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v6 = 0;
  if ( (a2 == (const char *)583 || a2 == (const char *)594) && Pointer::GetPointerInfoByPointerMsgId(a3, &v6) >= 0 )
    v3 = v6;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 4) )
  {
    InkFeedbackServer::OnPointerMessagePosted(this + 12, (unsigned int)a2, v3);
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = "Ink processor not enabled";
    a3 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v5,
      byte_25690B,
      v5,
      v5,
      (int)&a3,
      &a2);
  }
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
}
