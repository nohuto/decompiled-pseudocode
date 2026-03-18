/*
 * XREFs of ?OpenHapticsDevice@SimpleHapticsController@@IAEJXZ @ 0x1B4C38
 * Callers:
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z @ 0x1B4305 (-HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8 (-Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z @ 0x1B415E (-CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z.c)
 */

void *__thiscall SimpleHapticsController::OpenHapticsDevice(SimpleHapticsController *this)
{
  void *v2; // esi
  void **v3; // edi
  void *v4; // eax
  int v5; // ecx
  void *v6; // ecx
  NTSTATUS v7; // eax
  PVOID v8; // ecx
  NTSTATUS v9; // eax
  int v10; // ecx
  PVOID Object; // [esp+10h] [ebp-20h] BYREF
  int v13; // [esp+14h] [ebp-1Ch] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+18h] [ebp-18h] BYREF

  v2 = 0;
  v3 = (void **)((char *)this + 12);
  if ( !*((_DWORD *)this + 3) && !*((_DWORD *)this + 7) && !*((_DWORD *)this + 4) )
  {
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)this;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v4 = (void *)ZwCreateFile(
                   (PHANDLE)this + 3,
                   2u,
                   &ObjectAttributes,
                   (PIO_STATUS_BLOCK)((char *)this + 20),
                   0,
                   0x80u,
                   3u,
                   3u,
                   0x40000000u,
                   0,
                   0);
    v2 = v4;
    if ( (int)v4 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        Object = v4;
        v13 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          v5,
          v5,
          (const char **)&v13,
          (int)&Object);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::OpenHapticsDevice",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        706,
        v2,
        "Function failed.");
LABEL_16:
      SimpleHapticsController::CloseHapticsWriteDevice((PVOID *)this, 1);
      return v2;
    }
    v6 = *v3;
    Object = 0;
    v7 = ObReferenceObjectByHandle(v6, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0);
    v8 = Object;
    v2 = (void *)v7;
    *((_DWORD *)this + 7) = Object;
    if ( v7 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        v13 = v7;
        Object = "Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          (int)v8,
          (int)v8,
          (const char **)&Object,
          (int)&v13);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::OpenHapticsDevice",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        714,
        v2,
        "Function failed.");
      goto LABEL_16;
    }
    v9 = IoRegisterPlugPlayNotification(
           EventCategoryTargetDeviceChange,
           0,
           v8,
           _gpWin32kDriverObject,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)SimpleHapticsController::HapticsDeviceNotify,
           this,
           (PVOID *)this + 4);
    v2 = (void *)v9;
    if ( v9 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        v13 = v9;
        Object = "Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          v10,
          v10,
          (const char **)&Object,
          (int)&v13);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::OpenHapticsDevice",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        722,
        v2,
        "Function failed.");
      goto LABEL_16;
    }
  }
  return v2;
}
