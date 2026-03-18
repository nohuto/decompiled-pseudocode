/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299
 * Callers:
 *     _EditionDevicePnpNotification@4 @ 0xEAF6A (_EditionDevicePnpNotification@4.c)
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1AD794 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6GJPBU_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?InsertDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z @ 0x1AE240 (-InsertDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z.c)
 *     ??0InteractiveControlDevice@@QAE@XZ @ 0x1B16BD (--0InteractiveControlDevice@@QAE@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z @ 0x1B26CF (-SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

int __thiscall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *Object)
{
  struct RawInputManagerDeviceObject *v3; // esi
  InteractiveControlDevice *v4; // eax
  int v5; // ecx
  int inserted; // esi
  InteractiveControlDevice *v7; // ebx
  struct RawInputManagerDeviceObject *v8; // eax
  int v9; // ecx
  int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h] BYREF
  unsigned __int16 *v13; // [esp+18h] [ebp-4h] BYREF

  v3 = Object;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v12 = (int)"InteractiveControlManager::OnDeviceAttach entry";
    v13 = (unsigned __int16 *)((char *)Object + 184);
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
      (int)this,
      byte_256DF1,
      (int)this,
      (int)this,
      (const char **)&v12,
      &v13);
  }
  v4 = (InteractiveControlDevice *)Win32AllocPool(312, 1819440195);
  v11 = (int)v4;
  if ( !v4 )
  {
    inserted = -1073741670;
    goto LABEL_20;
  }
  v7 = InteractiveControlDevice::InteractiveControlDevice(v4);
  inserted = InteractiveControlDevice::Initialize(v7, v3);
  if ( inserted < 0 )
  {
    if ( (unsigned int)dword_2662F8 <= 2 )
      goto LABEL_16;
    goto LABEL_7;
  }
  inserted = InteractiveControlManager::InsertDevice(this, (void **)v7);
  if ( inserted >= 0 )
  {
    v13 = (unsigned __int16 *)(*((_DWORD *)Object + 65) + 60);
    RIMUnlockExclusive(v13);
    InteractiveControlDevice::SetBackgroundAccessor(v7, *((struct tagWND **)this + 2), *((_DWORD *)this + 3));
    InteractiveControlDevice::SetFocus(*(_DWORD *)this, *((_DWORD *)this + 1), 1);
    if ( !*((_DWORD *)this + 1) )
    {
      v8 = (struct RawInputManagerDeviceObject *)InteractiveControlDevice::SetComponentResolution(
                                                   v7,
                                                   3,
                                                   *((_DWORD *)this + 4),
                                                   (char *)this + 20);
      inserted = (int)v8;
      if ( (int)v8 < 0 && (unsigned int)dword_2662F8 > 2 )
      {
        Object = v8;
        v12 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662F8,
          byte_256AC8,
          v9,
          v9,
          (const char **)&v12,
          (int)&Object);
      }
    }
    RIMLockExclusive(v13);
    goto LABEL_16;
  }
  if ( (unsigned int)dword_2662F8 > 2 )
  {
LABEL_7:
    v12 = (int)"Function failed.";
    Object = (struct RawInputManagerDeviceObject *)inserted;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256AC8,
      v5,
      v5,
      (const char **)&v12,
      (int)&Object);
  }
LABEL_16:
  if ( inserted < 0 )
  {
    if ( v7 )
      InteractiveControlDevice::Deinitialize(v7);
    Win32FreePool(v11);
  }
LABEL_20:
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    Object = (struct RawInputManagerDeviceObject *)inserted;
    v11 = (int)"InteractiveControlManager::OnDeviceAttach exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      v5,
      v5,
      (const char **)&v11,
      (int)&Object);
  }
  return inserted;
}
