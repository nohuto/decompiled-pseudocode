/*
 * XREFs of ?SetDevicePropertyData@SimpleHapticsController@@QAEJPBU_DEVPROPKEY@@KKKKPAX@Z @ 0x1B5432
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

int __thiscall SimpleHapticsController::SetDevicePropertyData(
        SimpleHapticsController *this,
        const struct _DEVPROPKEY *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        PVOID Data)
{
  int v8; // eax
  int v9; // esi
  void *v10; // eax
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  if ( (unsigned int)dword_2662D0 > 4 )
  {
    v13 = 0;
    v12 = (int)"SimpleHapticsController::SendDeviceIOControl entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662D0,
      byte_2574E6,
      (int)this,
      (int)this,
      (const char **)&v12,
      (int)&v13);
  }
  v8 = *((_DWORD *)this + 7);
  if ( v8 )
  {
    v10 = (void *)IoSetDevicePropertyData(
                    *(PDEVICE_OBJECT *)(v8 + 4),
                    &DEVPKEY_InteractiveControl_DeviceType,
                    0,
                    0,
                    7u,
                    4u,
                    Data);
    v9 = (int)v10;
    if ( (int)v10 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        Data = v10;
        v12 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          (int)this,
          (int)this,
          (const char **)&v12,
          (int)&Data);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::SetDevicePropertyData",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        474,
        v9,
        "Function failed.");
    }
  }
  else
  {
    v9 = -1073741436;
  }
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    Data = (PVOID)v9;
    v12 = (int)"SimpleHapticsController::SendDeviceIOControl exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662D0,
      byte_2574E6,
      (int)this,
      (int)this,
      (const char **)&v12,
      (int)&Data);
  }
  return v9;
}
