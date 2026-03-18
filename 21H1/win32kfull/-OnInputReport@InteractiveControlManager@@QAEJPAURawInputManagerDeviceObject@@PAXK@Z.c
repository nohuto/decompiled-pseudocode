/*
 * XREFs of ?OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z @ 0x1AE50E
 * Callers:
 *     _EditionRimDeviceReadNotification@16 @ 0x1401E4 (_EditionRimDeviceReadNotification@16.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0 (-FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 */

struct InteractiveControlDevice *__thiscall InteractiveControlManager::OnInputReport(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        unsigned __int8 *a3,
        unsigned int a4)
{
  struct InteractiveControlDevice *Device; // eax
  int v5; // ecx
  struct InteractiveControlDevice *v6; // esi
  int Input; // eax
  int v8; // ecx
  struct InteractiveControlDevice *v10; // [esp+8h] [ebp-8h] BYREF
  int v11; // [esp+Ch] [ebp-4h] BYREF

  v10 = 0;
  Device = (struct InteractiveControlDevice *)InteractiveControlManager::FindDevice(this, 0, a2, &v10, 0);
  v6 = Device;
  if ( (int)Device >= 0 )
  {
    Input = InteractiveControlDevice::QueueAndGenerateInput(v10, a3, a4);
    v6 = (struct InteractiveControlDevice *)Input;
    if ( Input < 0 && (unsigned int)dword_2662F8 > 2 )
    {
      v11 = Input;
      v10 = (struct InteractiveControlDevice *)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662F8,
        byte_256AC8,
        v8,
        v8,
        (const char **)&v10,
        (int)&v11);
    }
  }
  else if ( (unsigned int)dword_2662F8 > 2 )
  {
    v10 = Device;
    v11 = (int)"Function failed.";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662F8,
      byte_256AC8,
      v5,
      v5,
      (const char **)&v11,
      (int)&v10);
  }
  return v6;
}
