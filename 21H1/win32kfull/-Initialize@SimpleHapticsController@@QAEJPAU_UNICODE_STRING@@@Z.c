/*
 * XREFs of ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _AllocateUnicodeString@8 @ 0xAB0D2 (_AllocateUnicodeString@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x142C21 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@@Z @ 0x1439C9 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ @ 0x1B479D (-InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IAEJXZ @ 0x1B4B32 (-IntializePreparssedData@SimpleHapticsController@@IAEJXZ.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IAEJXZ @ 0x1B4C38 (-OpenHapticsDevice@SimpleHapticsController@@IAEJXZ.c)
 */

int __thiscall SimpleHapticsController::Initialize(SimpleHapticsController *this, struct _UNICODE_STRING *a2)
{
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  NTSTATUS Caps; // eax
  int v10; // ecx
  USHORT OutputReportByteLength; // ax
  int v12; // eax
  struct _HIDP_PREPARSED_DATA *v14; // [esp-4h] [ebp-B8h]
  struct _HIDP_PREPARSED_DATA *v15; // [esp-4h] [ebp-B8h]
  struct _HIDP_PREPARSED_DATA *v16; // [esp-4h] [ebp-B8h]
  int v17; // [esp+10h] [ebp-A4h] BYREF
  int v18; // [esp+14h] [ebp-A0h] BYREF
  USHORT ValueCapsLength[2]; // [esp+18h] [ebp-9Ch] BYREF
  int v20; // [esp+1Ch] [ebp-98h] BYREF
  struct _HIDP_CAPS Capabilities; // [esp+20h] [ebp-94h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [esp+60h] [ebp-54h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    v20 = (int)"SimpleHapticsController::Initialize entry";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_2662D0,
      byte_257475,
      0,
      0,
      (const char **)&v20);
  }
  if ( !a2 )
  {
    v4 = -1073741811;
    goto LABEL_32;
  }
  if ( !AllocateUnicodeString((struct _UNICODE_STRING *)this, (const void **)a2) )
    goto LABEL_6;
  v5 = SimpleHapticsController::OpenHapticsDevice(this);
  v4 = v5;
  if ( v5 >= 0 )
  {
    v7 = SimpleHapticsController::IntializePreparssedData(this);
    v4 = v7;
    if ( v7 >= 0 )
    {
      Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 2), &Capabilities);
      v4 = Caps;
      if ( Caps >= 0 )
      {
        OutputReportByteLength = Capabilities.OutputReportByteLength;
        if ( Capabilities.OutputReportByteLength )
        {
          *((_WORD *)this + 18) = Capabilities.OutputReportByteLength;
          v12 = Win32AllocPoolZInit(OutputReportByteLength, 1667787091);
          *((_DWORD *)this + 8) = v12;
          if ( !v12 )
          {
LABEL_6:
            v4 = -1073741670;
            goto LABEL_32;
          }
        }
        else
        {
          *((_DWORD *)this + 8) = 0;
          *((_WORD *)this + 18) = 0;
        }
        memset(&ValueCaps, 0, sizeof(ValueCaps));
        *(_DWORD *)ValueCapsLength = 1;
        if ( HidP_GetSpecificValueCaps(
               HidP_Output,
               0xEu,
               0,
               0x21u,
               &ValueCaps,
               ValueCapsLength,
               *((PHIDP_PREPARSED_DATA *)this + 2)) >= 0 )
        {
          v14 = (struct _HIDP_PREPARSED_DATA *)*((_DWORD *)this + 2);
          *(_DWORD *)ValueCapsLength = 1;
          if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x24u, &ValueCaps, ValueCapsLength, v14) >= 0 )
            *((_DWORD *)this + 10) |= 4u;
          v15 = (struct _HIDP_PREPARSED_DATA *)*((_DWORD *)this + 2);
          *(_DWORD *)ValueCapsLength = 1;
          if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x25u, &ValueCaps, ValueCapsLength, v15) >= 0 )
            *((_DWORD *)this + 10) |= 8u;
          v16 = (struct _HIDP_PREPARSED_DATA *)*((_DWORD *)this + 2);
          *(_DWORD *)ValueCapsLength = 1;
          if ( HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x23u, &ValueCaps, ValueCapsLength, v16) >= 0 )
            *((_DWORD *)this + 10) |= 2u;
          SimpleHapticsController::InitializeSupportedWaveformList(this);
        }
        v4 = 0;
      }
      else
      {
        if ( (unsigned int)dword_2662D0 > 2 )
        {
          v18 = Caps;
          v20 = (int)"Function failed.";
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_2662D0,
            byte_25743E,
            v10,
            v10,
            (const char **)&v20,
            (int)&v18);
        }
        _DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::Initialize",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          61,
          v4,
          "Function failed.");
      }
    }
    else
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        v18 = v7;
        v20 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          v8,
          v8,
          (const char **)&v20,
          (int)&v18);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::Initialize",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        59,
        v4,
        "Function failed.");
    }
  }
  else
  {
    if ( (unsigned int)dword_2662D0 > 2 )
    {
      v20 = v5;
      v18 = (int)"Function failed.";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_2662D0,
        byte_25743E,
        v6,
        v6,
        (const char **)&v18,
        (int)&v20);
    }
    _DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::Initialize",
      "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      57,
      v4,
      "Function failed.");
  }
LABEL_32:
  if ( (unsigned int)dword_2662D0 > 4 )
  {
    v20 = *((_DWORD *)this + 12);
    v18 = v4;
    v17 = (int)"SimpleHapticsController::Initialize exit";
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_2662D0,
      byte_2575F0,
      v3,
      v3,
      (const char **)&v17,
      (int)&v20,
      (int)&v18);
  }
  return v4;
}
