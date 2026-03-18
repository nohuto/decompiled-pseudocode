/*
 * XREFs of ?SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z @ 0x1B5113
 * Callers:
 *     ?SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B2C59 (-SetHapticsMode@InteractiveControlDevice@@QAEJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$01@@@Z @ 0x1B3F3A (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC (-SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z.c)
 */

int __thiscall SimpleHapticsController::SetAutoTriggerWaveform(PHIDP_PREPARSED_DATA *this, unsigned __int16 a2)
{
  int v3; // ecx
  NTSTATUS Caps; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // ecx
  UCHAR *v8; // ebx
  NTSTATUS SpecificValueCaps; // eax
  int v10; // ecx
  NTSTATUS v11; // eax
  int v12; // ecx
  NTSTATUS v13; // eax
  int v14; // ecx
  NTSTATUS v15; // eax
  int v16; // ecx
  USHORT ValueCapsLength[2]; // [esp+Ch] [ebp-A0h] BYREF
  int v19; // [esp+10h] [ebp-9Ch] BYREF
  int v20; // [esp+14h] [ebp-98h] BYREF
  struct _HIDP_CAPS Capabilities; // [esp+18h] [ebp-94h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [esp+58h] [ebp-54h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  *(_DWORD *)ValueCapsLength = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    HIWORD(v20) = a2;
    v19 = (int)"SimpleHapticsController::SetAutoTriggerWaveform entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>>(
      v3,
      byte_257555,
      v3,
      v3,
      (const char **)&v19,
      (int)&v20 + 2);
  }
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v6 = Caps;
  if ( Caps >= 0 )
  {
    v8 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091);
    if ( v8 )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &ValueCaps, ValueCapsLength, this[2]);
      v6 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
      {
        *v8 = ValueCaps.ReportID;
        v11 = SimpleHapticsController::SendDeviceIOControl(
                (SimpleHapticsController *)this,
                (_BYTE *)&loc_B0191 + 1,
                0,
                0,
                v8,
                Capabilities.FeatureReportByteLength,
                0);
        v6 = v11;
        if ( v11 >= 0 )
        {
          v13 = HidP_SetUsageValue(
                  HidP_Feature,
                  0xEu,
                  ValueCaps.LinkCollection,
                  0x20u,
                  a2,
                  this[2],
                  (PCHAR)v8,
                  Capabilities.FeatureReportByteLength);
          v6 = v13;
          if ( v13 >= 0 )
          {
            v15 = SimpleHapticsController::SendDeviceIOControl(
                    (SimpleHapticsController *)this,
                    (const char *)&loc_B0191,
                    v8,
                    Capabilities.FeatureReportByteLength,
                    0,
                    0,
                    0);
            v6 = v15;
            if ( v15 < 0 )
            {
              if ( (unsigned int)dword_2662D0 > 2 )
              {
                v19 = v15;
                v20 = (int)"Function failed.";
                _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                  (int)&dword_2662D0,
                  byte_25743E,
                  v16,
                  v16,
                  (const char **)&v20,
                  (int)&v19);
              }
              _DbgPrintEx(
                0x4Du,
                0,
                "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
                "SimpleHapticsController::SetAutoTriggerWaveform",
                "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
                358,
                v6,
                "Function failed.");
            }
          }
          else
          {
            if ( (unsigned int)dword_2662D0 > 2 )
            {
              v19 = v13;
              v20 = (int)"Function failed.";
              _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
                (int)&dword_2662D0,
                byte_25743E,
                v14,
                v14,
                (const char **)&v20,
                (int)&v19);
            }
            _DbgPrintEx(
              0x4Du,
              0,
              "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
              "SimpleHapticsController::SetAutoTriggerWaveform",
              "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
              349,
              v6,
              "Function failed.");
          }
        }
        else
        {
          if ( (unsigned int)dword_2662D0 > 2 )
          {
            v19 = v11;
            v20 = (int)"Function failed.";
            _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (int)&dword_2662D0,
              byte_25743E,
              v12,
              v12,
              (const char **)&v20,
              (int)&v19);
          }
          _DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::SetAutoTriggerWaveform",
            "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            339,
            v6,
            "Function failed.");
        }
      }
      else
      {
        if ( (unsigned int)dword_2662D0 > 2 )
        {
          v19 = SpecificValueCaps;
          v20 = (int)"Function failed.";
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_2662D0,
            byte_25743E,
            v10,
            v10,
            (const char **)&v20,
            (int)&v19);
        }
        _DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::SetAutoTriggerWaveform",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          329,
          v6,
          "Function failed.");
      }
      Win32FreePool(v8);
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_2662D0 > 2 )
    {
      v19 = Caps;
      v20 = (int)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662D0,
        byte_25743E,
        v5,
        v5,
        (const char **)&v20,
        (int)&v19);
    }
    _DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SetAutoTriggerWaveform",
      "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      315,
      v6,
      "Function failed.");
  }
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    v19 = v6;
    v20 = (int)"SimpleHapticsController::SetAutoTriggerWaveform exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (int)&dword_2662D0,
      byte_2574E6,
      v7,
      v7,
      (const char **)&v20,
      (int)&v19);
  }
  return v6;
}
