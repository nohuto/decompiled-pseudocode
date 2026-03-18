/*
 * XREFs of ?CloseHapticsWriteDevice@SimpleHapticsController@@IAEJH@Z @ 0x1B415E
 * Callers:
 *     ?DeInitialize@SimpleHapticsController@@QAEJXZ @ 0x1B4278 (-DeInitialize@SimpleHapticsController@@QAEJXZ.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z @ 0x1B4305 (-HapticsDeviceNotify@SimpleHapticsController@@KGJPAU_PLUGPLAY_NOTIFY_HDR@@PAX@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IAEJXZ @ 0x1B4C38 (-OpenHapticsDevice@SimpleHapticsController@@IAEJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 */

NTSTATUS __thiscall SimpleHapticsController::CloseHapticsWriteDevice(PVOID *this, NTSTATUS a2)
{
  NTSTATUS v3; // edi
  PVOID v4; // eax
  NTSTATUS v5; // eax
  int v6; // ecx
  NTSTATUS v7; // edi
  NTSTATUS v8; // eax
  int v9; // ecx
  PVOID v10; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-4h] BYREF

  v3 = 0;
  if ( a2 && this[4] )
  {
    IoUnregisterPlugPlayNotification(this[4]);
    this[4] = 0;
  }
  v4 = this[3];
  if ( v4 )
  {
    IoStatusBlock.Status = 0;
    IoStatusBlock.Information = 0;
    v5 = ZwCancelIoFile(v4, &IoStatusBlock);
    v7 = v5;
    if ( v5 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        a2 = v5;
        v13 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          v6,
          v6,
          (const char **)&v13,
          (int)&a2);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::CloseHapticsWriteDevice",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        751,
        v7,
        "Function failed.");
    }
    v8 = ZwClose(this[3]);
    v3 = v8;
    if ( v8 < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        a2 = v8;
        v13 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          v9,
          v9,
          (const char **)&v13,
          (int)&a2);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::CloseHapticsWriteDevice",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        752,
        v3,
        "Function failed.");
    }
    this[3] = 0;
  }
  v10 = this[7];
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    this[7] = 0;
  }
  return v3;
}
