/*
 * XREFs of ?IntializePreparssedData@SimpleHapticsController@@IAEJXZ @ 0x1B4B32
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8 (-Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC (-SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z.c)
 */

int __thiscall SimpleHapticsController::IntializePreparssedData(SimpleHapticsController *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  void *v5; // eax
  int v6; // eax
  int v7; // ecx
  int v9; // [esp+10h] [ebp-18h] BYREF
  int v10; // [esp+14h] [ebp-14h] BYREF
  ULONG OutputBuffer[3]; // [esp+18h] [ebp-10h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v2 = SimpleHapticsController::SendDeviceIOControl(this, (ULONG)&loc_B01A8, 0, 0, OutputBuffer, 0xCu, 0);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = (void *)Win32AllocPoolNonPaged(OutputBuffer[0], 1147695957);
    *((_DWORD *)this + 2) = v5;
    if ( v5 )
    {
      v6 = SimpleHapticsController::SendDeviceIOControl(this, (ULONG)&loc_B0193, 0, 0, v5, OutputBuffer[0], 0);
      v4 = v6;
      if ( v6 < 0 )
      {
        if ( (unsigned int)dword_2662D0 > 2 )
        {
          v9 = v6;
          v10 = (int)"Function failed.";
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_2662D0,
            byte_25743E,
            v7,
            v7,
            (const char **)&v10,
            (int)&v9);
        }
        _DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::IntializePreparssedData",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          524,
          v4,
          "Function failed.");
      }
    }
    else
    {
      return -1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_2662D0 > 2 )
    {
      v10 = v2;
      v9 = (int)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662D0,
        byte_25743E,
        v3,
        v3,
        (const char **)&v9,
        (int)&v10);
    }
    _DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::IntializePreparssedData",
      "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      510,
      v4,
      "Function failed.");
  }
  return v4;
}
