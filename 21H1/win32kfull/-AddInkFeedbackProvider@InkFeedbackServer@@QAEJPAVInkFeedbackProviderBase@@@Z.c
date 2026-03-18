/*
 * XREFs of ?AddInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z @ 0xE8CFA
 * Callers:
 *     ??0InkProcessor@@AAE@XZ @ 0xE8C70 (--0InkProcessor@@AAE@XZ.c)
 *     ?OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1ABE31 (-OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43@Z @ 0xE8D60 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvi.c)
 */

int __thiscall InkFeedbackServer::AddInkFeedbackProvider(InkFeedbackServer *this, struct InkFeedbackProviderBase *a2)
{
  InkFeedbackServer **v2; // edx
  struct InkFeedbackProviderBase *v3; // esi
  InkFeedbackServer *v4; // eax
  int v5; // eax
  int v7; // [esp+4h] [ebp-Ch] BYREF
  const char *v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = (InkFeedbackServer **)*((_DWORD *)this + 1);
  v3 = a2;
  v4 = (struct InkFeedbackProviderBase *)((char *)a2 + 4);
  if ( *v2 != this )
    __fastfail(3u);
  *(_DWORD *)v4 = this;
  *((_DWORD *)v4 + 1) = v2;
  *v2 = v4;
  *((_DWORD *)this + 1) = v4;
  if ( (unsigned int)CallbackContext > 4 )
  {
    v5 = *((_DWORD *)v3 + 6);
    v7 = 0;
    v9 = v5;
    a2 = v3;
    v8 = "Added ink feedback provider";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      this,
      this,
      &v7,
      &v8,
      &v9,
      &a2);
  }
  return 0;
}
