/*
 * XREFs of ?OnDeviceAttached@InkProcessor@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1ABE31
 * Callers:
 *     ?InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z @ 0x183775 (-InkProcessorOnInkDeviceAttached@@YGJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z @ 0xE8CFA (-AddInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x14061B (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@@Z @ 0x1ABBFE (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@3@Z @ 0x1ABC78 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@333@Z @ 0x1ABD09 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgPr.c)
 *     ??0InkDevice@@QAE@XZ @ 0x1B02CB (--0InkDevice@@QAE@XZ.c)
 *     ??1InkDevice@@UAE@XZ @ 0x1B0320 (--1InkDevice@@UAE@XZ.c)
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 */

int __thiscall InkProcessor::OnDeviceAttached(InkProcessor ***this, struct RawInputManagerDeviceObject *a2)
{
  int v3; // ecx
  int v4; // esi
  InkDevice *v5; // eax
  int v6; // ecx
  InkDevice *v7; // edi
  int v8; // ecx
  InkProcessor **v9; // edx
  InkProcessor *v10; // ecx
  int v11; // ecx
  int v13; // [esp+Ch] [ebp-10h] BYREF
  const char *v14; // [esp+10h] [ebp-Ch] BYREF
  char *v15; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 4) )
  {
    v5 = (InkDevice *)Win32AllocPoolZInit(112, 1349217865);
    if ( v5 )
      v7 = InkDevice::InkDevice(v5);
    else
      v7 = 0;
    if ( v7 )
    {
      v4 = InkDevice::Initialize(v7, a2);
      if ( v4 >= 0 )
      {
        v9 = this[3];
        v10 = (InkDevice *)((char *)v7 + 48);
        if ( *v9 != (InkProcessor *)(this + 2) )
          __fastfail(3u);
        *(_DWORD *)v10 = this + 2;
        *((_DWORD *)v7 + 13) = v9;
        *v9 = v10;
        this[3] = (InkProcessor **)v10;
        InkFeedbackServer::AddInkFeedbackProvider((InkFeedbackServer *)(this + 12), (InkDevice *)((char *)v7 + 20));
        if ( (unsigned int)CallbackContext > 4 )
        {
          v15 = (char *)v7 + 20;
          v16 = (int)v7;
          v14 = "Ink device attached";
          v13 = v4;
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v11,
            byte_25693D,
            v11,
            v11,
            (int)&v13,
            &v14,
            (int)&v16,
            (int)&v15,
            (int)&a2);
        }
      }
      else if ( (unsigned int)CallbackContext > 2 )
      {
        v16 = (int)"Failed to initialize ink device";
        v15 = (char *)v4;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v8,
          byte_256A06,
          v8,
          v8,
          (int)&v15,
          (const char **)&v16,
          (int)&a2);
      }
      if ( v4 < 0 )
      {
        InkDevice::~InkDevice(v7);
        Win32FreePool(v7);
      }
    }
    else
    {
      v4 = -1073741801;
      if ( (unsigned int)CallbackContext > 2 )
      {
        a2 = (struct RawInputManagerDeviceObject *)-1073741801;
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (int)&CallbackContext,
          byte_2558E4,
          v6,
          v6,
          (int)&a2);
      }
    }
  }
  else
  {
    v4 = -1073741823;
    if ( (unsigned int)CallbackContext > 2 )
    {
      a2 = (struct RawInputManagerDeviceObject *)"Ink processor not enabled";
      v16 = -1073741823;
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        v3,
        byte_25690B,
        v3,
        v3,
        (int)&v16,
        (const char **)&a2);
    }
  }
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
  return v4;
}
