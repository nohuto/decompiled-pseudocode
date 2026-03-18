/*
 * XREFs of ?RemoveInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z @ 0xD377E
 * Callers:
 *     ??1InkProcessor@@AAE@XZ @ 0xD3702 (--1InkProcessor@@AAE@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC13F (-OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43@Z @ 0xE8D60 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvi.c)
 */

int __thiscall InkFeedbackServer::RemoveInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  struct InkFeedbackProviderBase *v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v5; // edx
  int v7; // [esp+4h] [ebp-Ch] BYREF
  const char *v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  v3 = (_DWORD *)((char *)a2 + 4);
  v4 = *((_DWORD *)a2 + 1);
  if ( *(struct InkFeedbackProviderBase **)(v4 + 4) != (struct InkFeedbackProviderBase *)((char *)a2 + 4)
    || (v5 = (_DWORD *)*((_DWORD *)a2 + 2), (_DWORD *)*v5 != v3) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *(_DWORD *)(v4 + 4) = v5;
  v3[1] = 0;
  *v3 = 0;
  if ( (unsigned int)CallbackContext > 4 )
  {
    v9 = *((_DWORD *)v2 + 6);
    a2 = v2;
    v8 = "Removed ink feedback provider";
    v7 = 0;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      0,
      0,
      &v7,
      &v8,
      &v9,
      &a2);
  }
  return 0;
}
