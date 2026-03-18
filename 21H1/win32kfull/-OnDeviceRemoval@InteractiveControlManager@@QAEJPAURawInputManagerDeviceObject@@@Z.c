/*
 * XREFs of ?OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE439
 * Callers:
 *     _EditionDevicePnpNotification@4 @ 0xEAF6A (_EditionDevicePnpNotification@4.c)
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1AD794 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6GJPBU_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0 (-FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z @ 0x1AE5A8 (-RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z.c)
 */

struct RawInputManagerDeviceObject *__thiscall InteractiveControlManager::OnDeviceRemoval(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v2; // esi
  int v4; // ecx
  struct RawInputManagerDeviceObject *Device; // esi
  int v7; // [esp+Ch] [ebp-8h] BYREF
  struct InteractiveControlDevice *v8; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  v8 = 0;
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    v7 = (int)"InteractiveControlManager::OnDeviceRemoval entry";
    a2 = (struct RawInputManagerDeviceObject *)((char *)a2 + 184);
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
      (int)this,
      byte_256DF1,
      (int)this,
      (int)this,
      (const char **)&v7,
      (unsigned __int16 **)&a2);
  }
  Device = (struct RawInputManagerDeviceObject *)InteractiveControlManager::FindDevice(this, 0, v2, &v8, 0);
  if ( (int)Device < 0 )
  {
    if ( (unsigned int)dword_2662F8 <= 2 )
      goto LABEL_9;
    goto LABEL_8;
  }
  Device = (struct RawInputManagerDeviceObject *)InteractiveControlManager::RemoveDevice(this, v8);
  if ( (int)Device < 0 && (unsigned int)dword_2662F8 > 2 )
  {
LABEL_8:
    a2 = Device;
    v7 = (int)"Function failed.";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256AC8,
      v4,
      v4,
      (const char **)&v7,
      (int)&a2);
  }
LABEL_9:
  if ( (unsigned int)dword_2662F8 > 4 )
  {
    a2 = Device;
    v7 = (int)"InteractiveControlManager::OnDeviceRemoval exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256A55,
      v4,
      v4,
      (const char **)&v7,
      (int)&a2);
  }
  return Device;
}
