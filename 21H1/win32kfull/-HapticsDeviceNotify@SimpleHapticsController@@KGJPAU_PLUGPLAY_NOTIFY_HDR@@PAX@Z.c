/*
 * XREFs of ?HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z @ 0x1B4305
 * Callers:
 *     <none>
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z @ 0x1B415E (-CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IAEJXZ @ 0x1B4C38 (-OpenHapticsDevice@SimpleHapticsController@@IAEJXZ.c)
 */

PVOID *__stdcall SimpleHapticsController::HapticsDeviceNotify(const char *NotificationStructure, PVOID *Context)
{
  PVOID *v2; // esi
  char *v3; // edi
  PVOID *v4; // eax
  int v5; // ecx
  PVOID *v6; // eax
  int v7; // ecx
  PVOID *v8; // eax
  int v9; // ecx

  v2 = 0;
  v3 = (char *)(NotificationStructure + 4);
  if ( !memcmp(NotificationStructure + 4, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10u) )
  {
    if ( (unsigned int)dword_2662D0 > 4 )
    {
      NotificationStructure = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_2662D0,
        byte_257475,
        0,
        0,
        &NotificationStructure);
    }
    v4 = (PVOID *)SimpleHapticsController::CloseHapticsWriteDevice(Context, 0);
    v2 = v4;
    if ( (int)v4 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        Context = v4;
        NotificationStructure = "Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          v5,
          v5,
          &NotificationStructure,
          (int)&Context);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::HapticsDeviceNotify",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        798,
        v2,
        "Function failed.");
    }
  }
  else if ( !memcmp(v3, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10u) )
  {
    if ( (unsigned int)dword_2662D0 > 4 )
    {
      NotificationStructure = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_2662D0,
        byte_257475,
        0,
        0,
        &NotificationStructure);
    }
    v6 = (PVOID *)SimpleHapticsController::OpenHapticsDevice((SimpleHapticsController *)Context);
    v2 = v6;
    if ( (int)v6 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        Context = v6;
        NotificationStructure = "Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          v7,
          v7,
          &NotificationStructure,
          (int)&Context);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::HapticsDeviceNotify",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        803,
        v2,
        "Function failed.");
    }
  }
  else if ( !memcmp(v3, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10u) )
  {
    if ( (unsigned int)dword_2662D0 > 4 )
    {
      NotificationStructure = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_2662D0,
        byte_257475,
        0,
        0,
        &NotificationStructure);
    }
    v8 = (PVOID *)SimpleHapticsController::CloseHapticsWriteDevice(Context, 1);
    v2 = v8;
    if ( (int)v8 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        Context = v8;
        NotificationStructure = "Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          v9,
          v9,
          &NotificationStructure,
          (int)&Context);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::HapticsDeviceNotify",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        809,
        v2,
        "Function failed.");
    }
  }
  return v2;
}
