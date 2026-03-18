/*
 * XREFs of ?OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC13F
 * Callers:
 *     ?InkProcessorOnInkDeviceRemoved@@YGXPAURawInputManagerDeviceObject@@@Z @ 0x18389B (-InkProcessorOnInkDeviceRemoved@@YGXPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z @ 0xD377E (-RemoveInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@333@Z @ 0x1ABD09 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 *     ?FindInkDeviceByRimDeviceObject@InkProcessor@@ABEPAVInkDevice@@PBURawInputManagerDeviceObject@@@Z @ 0x1ABDDC (-FindInkDeviceByRimDeviceObject@InkProcessor@@ABEPAVInkDevice@@PBURawInputManagerDeviceObject@@@.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AAEXPAPAVInkDevice@@@Z @ 0x1AC42E (-UnlinkAndReleaseInkDevice@InkProcessor@@AAEXPAPAVInkDevice@@@Z.c)
 */

void __thiscall InkProcessor::OnDeviceRemoved(InkProcessor *this, struct RawInputManagerDeviceObject *a2)
{
  int v3; // ecx
  struct RawInputManagerDeviceObject *v4; // edi
  struct InkDevice *InkDeviceByRimDeviceObject; // eax
  InkFeedbackServer *v6; // ecx
  InkProcessor *v7; // ecx
  char *v8; // ecx
  int v9; // [esp+Ch] [ebp-10h] BYREF
  const char *v10; // [esp+10h] [ebp-Ch] BYREF
  struct RawInputManagerDeviceObject *v11; // [esp+14h] [ebp-8h] BYREF
  int v12; // [esp+18h] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 4) )
  {
    v4 = a2;
    InkDeviceByRimDeviceObject = InkProcessor::FindInkDeviceByRimDeviceObject(this, a2);
    a2 = InkDeviceByRimDeviceObject;
    if ( InkDeviceByRimDeviceObject )
    {
      InkFeedbackServer::RemoveInkFeedbackProvider(v6, (struct InkDevice *)((char *)InkDeviceByRimDeviceObject + 20));
      InkProcessor::UnlinkAndReleaseInkDevice(v7, &a2);
      if ( (unsigned int)CallbackContext > 4 )
      {
        if ( a2 )
          v8 = (char *)a2 + 20;
        else
          v8 = 0;
        v9 = 0;
        v11 = a2;
        a2 = v4;
        v12 = (int)v8;
        v10 = "Ink device removed";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)v8,
          byte_25693D,
          (int)v8,
          (int)v8,
          (int)&v9,
          &v10,
          (int)&v11,
          (int)&v12,
          (int)&a2);
      }
    }
  }
  else if ( (unsigned int)CallbackContext > 2 )
  {
    a2 = (struct RawInputManagerDeviceObject *)"Ink processor not enabled";
    v12 = -1073741823;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      v3,
      byte_25690B,
      v3,
      v3,
      (int)&v12,
      (const char **)&a2);
  }
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
}
