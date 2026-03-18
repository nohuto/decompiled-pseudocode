/*
 * XREFs of ??0InkProcessor@@AAE@XZ @ 0xE8C70
 * Callers:
 *     ?Initialize@InkProcessor@@SGJXZ @ 0xE8C30 (-Initialize@InkProcessor@@SGJXZ.c)
 * Callees:
 *     ?Feature_InkProcessor__private_IsEnabledPreCheck@@YGHXZ @ 0xE8CD6 (-Feature_InkProcessor__private_IsEnabledPreCheck@@YGHXZ.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z @ 0xE8CFA (-AddInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z.c)
 *     _TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12 @ 0x27A6CA (_TraceLoggingRegisterEx_EtwRegister_EtwSetInformation@12.c)
 */

InkProcessor *__thiscall InkProcessor::InkProcessor(InkProcessor *this)
{
  struct InkFeedbackProviderBase *v2; // edi
  InkFeedbackServer *v3; // esi

  *(_DWORD *)this = 0;
  v2 = (InkProcessor *)((char *)this + 16);
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 9) = 0;
  v3 = (InkProcessor *)((char *)this + 48);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 10) = "HideInkCursorProvider";
  *((_DWORD *)this + 8) = (char *)this + 28;
  *((_DWORD *)this + 7) = (char *)this + 28;
  *((_DWORD *)this + 4) = &HideInkCursorProvider::`vftable';
  *((_DWORD *)this + 13) = (char *)this + 48;
  *((_DWORD *)this + 12) = (char *)this + 48;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&CallbackContext, 0);
  *((_DWORD *)this + 3) = (char *)this + 8;
  *((_DWORD *)this + 2) = (char *)this + 8;
  Feature_InkProcessor__private_IsEnabledPreCheck();
  *((_BYTE *)this + 4) = 1;
  InkFeedbackServer::AddInkFeedbackProvider(v3, v2);
  return this;
}
