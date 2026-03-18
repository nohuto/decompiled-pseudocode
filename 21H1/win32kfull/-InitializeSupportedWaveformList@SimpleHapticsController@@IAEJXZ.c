/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ @ 0x1B479D
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8 (-Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x1AD82B (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z @ 0x1B4DDC (-SendDeviceIOControl@SimpleHapticsController@@QAEJKPAXK0KPAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IAEJGG@Z @ 0x1B551A (-UpdateWaveformInfoList@SimpleHapticsController@@IAEJGG@Z.c)
 */

int __thiscall SimpleHapticsController::InitializeSupportedWaveformList(SimpleHapticsController *this)
{
  unsigned int v1; // esi
  SimpleHapticsController *v2; // ebx
  int Caps; // edi
  struct _HIDP_VALUE_CAPS *v4; // eax
  CHAR *SpecificValueCaps; // eax
  USAGE *p_LinkUsagePage; // ecx
  unsigned int v7; // eax
  struct _HIDP_VALUE_CAPS *v8; // edx
  int p_ReportID; // eax
  int v10; // edx
  int v11; // edi
  USAGE v12; // ax
  bool v13; // cf
  unsigned int v14; // esi
  unsigned int v15; // eax
  int v16; // eax
  CHAR *v17; // eax
  int v18; // eax
  int v19; // ecx
  USHORT v20; // cx
  unsigned int v21; // edx
  USAGE *p_LinkUsage; // ebx
  int v23; // edx
  USAGE *v24; // ebx
  int v26; // [esp+14h] [ebp-6Ch] BYREF
  int v27; // [esp+18h] [ebp-68h] BYREF
  PCHAR Report; // [esp+1Ch] [ebp-64h] BYREF
  struct _HIDP_VALUE_CAPS *v29; // [esp+20h] [ebp-60h]
  SimpleHapticsController *v30; // [esp+24h] [ebp-5Ch]
  unsigned int v31; // [esp+28h] [ebp-58h]
  ULONG UsageValue; // [esp+2Ch] [ebp-54h] BYREF
  USHORT ValueCapsLength[2]; // [esp+30h] [ebp-50h] BYREF
  int v34; // [esp+34h] [ebp-4Ch] BYREF
  struct _HIDP_CAPS Capabilities; // [esp+38h] [ebp-48h] BYREF

  v1 = 0;
  v2 = this;
  v30 = this;
  memset(&Capabilities, 0, sizeof(Capabilities));
  Report = 0;
  Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)v2 + 2), &Capabilities);
  *(_DWORD *)ValueCapsLength = Capabilities.NumberFeatureValueCaps;
  if ( Caps >= 0 && Capabilities.NumberFeatureValueCaps )
  {
    v4 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72 * Capabilities.NumberFeatureValueCaps, 1667787091);
    v29 = v4;
    if ( !v4 )
      return -1073741670;
    SpecificValueCaps = (CHAR *)HidP_GetSpecificValueCaps(
                                  HidP_Feature,
                                  0xAu,
                                  0,
                                  0,
                                  v4,
                                  ValueCapsLength,
                                  *((PHIDP_PREPARSED_DATA *)v2 + 2));
    Caps = (int)SpecificValueCaps;
    UsageValue = (ULONG)SpecificValueCaps;
    if ( (int)SpecificValueCaps < 0 )
    {
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        Report = SpecificValueCaps;
        v34 = (int)"Function failed.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          (int)p_LinkUsagePage,
          (int)p_LinkUsagePage,
          (const char **)&v34,
          (int)&Report);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        561,
        Caps,
        "Function failed.");
      goto LABEL_54;
    }
    v7 = 0;
    v8 = v29;
    if ( ValueCapsLength[0] )
    {
      p_LinkUsagePage = &v29->LinkUsagePage;
      while ( 1 )
      {
        v2 = v30;
        if ( *p_LinkUsagePage == 14 )
          break;
        ++v7;
        p_LinkUsagePage += 36;
        if ( v7 >= ValueCapsLength[0] )
          goto LABEL_15;
      }
      *((_BYTE *)v30 + 52) = v29[v7].ReportID;
    }
LABEL_15:
    if ( !ValueCapsLength[0] )
      goto LABEL_49;
    p_ReportID = (int)&v8->ReportID;
    v10 = ValueCapsLength[0];
    p_LinkUsagePage = (USAGE *)p_ReportID;
    v26 = p_ReportID;
    v11 = 0;
    v27 = 17;
    do
    {
      if ( p_LinkUsagePage[4] == 14 && *(_BYTE *)p_LinkUsagePage == *((_BYTE *)v2 + 52) )
      {
        v12 = p_LinkUsagePage[3];
        if ( v12 == 16 )
        {
          ++v1;
        }
        else if ( v12 == (_WORD)v27 )
        {
          ++v11;
        }
      }
      p_LinkUsagePage += 36;
      --v10;
    }
    while ( v10 );
    v34 = v11;
    v13 = v1 == 0;
    Caps = UsageValue;
    v31 = v1;
    v14 = 0;
    if ( !v13 && (v15 = v31, p_LinkUsagePage = (USAGE *)v34, v31 == v34) )
    {
      *((_DWORD *)v2 + 12) = v31;
      v16 = Win32AllocPool(8 * v15, 1667787091);
      *((_DWORD *)v2 + 11) = v16;
      if ( !v16 || (v17 = (CHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091), (Report = v17) == 0) )
      {
        Caps = -1073741670;
LABEL_54:
        Win32FreePool(v29);
        return Caps;
      }
      *v17 = *(_BYTE *)v26;
      v18 = SimpleHapticsController::SendDeviceIOControl(
              v2,
              0xB0192u,
              0,
              0,
              v17,
              Capabilities.FeatureReportByteLength,
              0);
      Caps = v18;
      UsageValue = v18;
      if ( v18 >= 0 )
      {
        v20 = ValueCapsLength[0];
        v21 = 0;
        v31 = 0;
        if ( ValueCapsLength[0] )
        {
          v34 = 0;
          p_LinkUsage = &v29->LinkUsage;
          do
          {
            if ( p_LinkUsage[1] == 14 && *p_LinkUsage == 17 )
            {
              UsageValue = 0;
              Caps = HidP_GetUsageValue(
                       HidP_Feature,
                       0xAu,
                       *(p_LinkUsage - 1),
                       p_LinkUsage[24],
                       &UsageValue,
                       *((PHIDP_PREPARSED_DATA *)v30 + 2),
                       Report,
                       Capabilities.FeatureReportByteLength);
              if ( Caps >= 0 )
              {
                *(_WORD *)(v34 + *((_DWORD *)v30 + 11)) = p_LinkUsage[24];
                v23 = v34;
                *(_DWORD *)(v34 + *((_DWORD *)v30 + 11) + 4) = UsageValue;
                v34 = v23 + 8;
              }
              v21 = v31;
              v20 = ValueCapsLength[0];
            }
            ++v21;
            p_LinkUsage += 36;
            v31 = v21;
          }
          while ( v21 < v20 );
          UsageValue = Caps;
        }
        if ( v20 )
        {
          v24 = &v29->LinkUsage;
          do
          {
            if ( v24[1] == 14 && *v24 == 16 )
            {
              SimpleHapticsController::UpdateWaveformInfoList(v30, v24[24], v24[20]);
              v20 = ValueCapsLength[0];
            }
            ++v14;
            v24 += 36;
          }
          while ( v14 < v20 );
          Caps = UsageValue;
        }
      }
      else
      {
        if ( (unsigned int)dword_2662D0 > 2 )
        {
          v26 = v18;
          v27 = (int)"Function failed.";
          _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (int)&dword_2662D0,
            byte_25743E,
            v19,
            v19,
            (const char **)&v27,
            (int)&v26);
        }
        _DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::InitializeSupportedWaveformList",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          622,
          Caps,
          "Function failed.");
      }
    }
    else
    {
LABEL_49:
      if ( (unsigned int)dword_2662D0 > 2 )
      {
        v26 = -1073741216;
        v27 = (int)"Either there is no waveform or waveform list is not equal to duration list.";
        _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (int)&dword_2662D0,
          byte_25743E,
          (int)p_LinkUsagePage,
          (int)p_LinkUsagePage,
          (const char **)&v27,
          (int)&v26);
      }
      _DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        598,
        -1073741216,
        "Either there is no waveform or waveform list is not equal to duration list.");
    }
    if ( Report )
      Win32FreePool(Report);
    goto LABEL_54;
  }
  return Caps;
}
