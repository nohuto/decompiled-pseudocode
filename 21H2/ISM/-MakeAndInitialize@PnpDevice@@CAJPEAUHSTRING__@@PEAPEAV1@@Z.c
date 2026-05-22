/*
 * XREFs of ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800266B0
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180026C90 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180026F64 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 * Callees:
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180026590 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180026B00 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18002A384 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     swscanf_s @ 0x18003C9B8 (swscanf_s.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800A4880 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800A49E0 (-LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z.c)
 */

__int64 __fastcall PnpDevice::MakeAndInitialize(HSTRING string, struct PnpDevice **a2)
{
  char *v4; // rax
  char *v5; // rbx
  HRESULT v6; // eax
  unsigned int v7; // esi
  WCHAR *StringRawBuffer; // rax
  CONFIGRET DevNodeW; // eax
  unsigned int v10; // edx
  unsigned int v11; // esi
  int DeviceGuidProperty; // edi
  DEVNODE v13; // r9d
  int i; // esi
  CONFIGRET Parent; // eax
  DEVNODE v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int DeviceStringProperty; // edi
  PCWSTR v21; // rdi
  UINT32 v22; // ecx
  size_t v23; // rsi
  bool v24; // zf
  __int16 v26; // ax
  __int16 v27; // cx
  int v28; // eax
  int v29; // eax
  unsigned int v30; // edi
  LampArrayTelemetry *v31; // rcx
  HSTRING *v32; // [rsp+20h] [rbp-60h]
  DEVNODE pdnDevInst; // [rsp+30h] [rbp-50h] BYREF
  __int16 v34; // [rsp+34h] [rbp-4Ch] BYREF
  __int16 v35; // [rsp+38h] [rbp-48h] BYREF
  UINT32 length; // [rsp+3Ch] [rbp-44h] BYREF
  struct _DEVPROPKEY stringa; // [rsp+40h] [rbp-40h] BYREF
  int v38; // [rsp+58h] [rbp-28h] BYREF
  int v39; // [rsp+60h] [rbp-20h] BYREF
  int v40; // [rsp+64h] [rbp-1Ch] BYREF
  struct _DEVPROPKEY v41; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a2 = 0LL;
  v4 = (char *)malloc(0x80uLL);
  v5 = v4;
  if ( !v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)0x8007000ELL,
      (int)v32);
    return 2147942414LL;
  }
  memset_0(v4 + 8, 0, 0x78uLL);
  *(_QWORD *)v5 = &RefCountedObject::`vftable';
  *((_DWORD *)v5 + 2) = 1;
  *(_QWORD *)v5 = &PnpDevice::`vftable';
  *((_QWORD *)v5 + 2) = 0LL;
  *((_QWORD *)v5 + 3) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = -1LL;
  *((GUID *)v5 + 3) = GUID_NULL;
  *((GUID *)v5 + 4) = GUID_NULL;
  *((GUID *)v5 + 5) = GUID_NULL;
  *((_QWORD *)v5 + 12) = 0LL;
  *((_QWORD *)v5 + 13) = 0LL;
  *((_QWORD *)v5 + 14) = 0LL;
  v5[120] = 0;
  WindowsDeleteString(0LL);
  *((_QWORD *)v5 + 3) = 0LL;
  v6 = WindowsDuplicateString(string, (HSTRING *)v5 + 3);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x245,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
      (const char *)(unsigned int)v6,
      (int)v32);
    RefCountedObject::Release((RefCountedObject *)v5);
    return v7;
  }
  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(string, 0LL);
  DevNodeW = CM_Locate_DevNodeW((PDEVINST)v5 + 24, StringRawBuffer, 0);
  v11 = -2147023728;
  if ( DevNodeW )
  {
    *((_DWORD *)v5 + 24) = 0;
    v29 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)DevNodeW, v10);
    v30 = v29;
    if ( v29 != -2147023728 )
    {
      if ( v29 >= 0 )
        goto LABEL_4;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v29,
        (int)v32);
      v11 = v30;
    }
    RefCountedObject::Release((RefCountedObject *)v5);
    return v11;
  }
LABEL_4:
  *(_DWORD *)stringa.fmtid.Data4 = *((_DWORD *)v5 + 24);
  DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                         (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                         (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))stringa.fmtid.Data4,
                         (void *)&DEVPKEY_Device_ClassGuid,
                         (const struct _DEVPROPKEY *)(v5 + 48));
  if ( DeviceGuidProperty < 0 )
  {
LABEL_40:
    RefCountedObject::Release((RefCountedObject *)v5);
    return (unsigned int)DeviceGuidProperty;
  }
  else
  {
    v13 = *((_DWORD *)v5 + 24);
    *((_DWORD *)v5 + 26) = v13;
    *((_OWORD *)v5 + 5) = *((_OWORD *)v5 + 3);
    pdnDevInst = v13;
    for ( i = 1; ; ++i )
    {
      Parent = CM_Get_Parent(&pdnDevInst, v13, 0);
      if ( Parent )
      {
        pdnDevInst = 0;
        v28 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)Parent, 0);
        DeviceGuidProperty = v28;
        if ( v28 == -2147023728 )
        {
          DeviceGuidProperty = -2147023728;
          goto LABEL_40;
        }
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x354,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
            (const char *)(unsigned int)v28,
            (int)v32);
          goto LABEL_40;
        }
      }
      else
      {
        v16 = pdnDevInst;
      }
      stringa.pid = v16;
      DeviceGuidProperty = PnpApiWrapper::Details::GetDeviceGuidProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&stringa.pid,
                             (void *)&DEVPKEY_Device_ClassGuid,
                             &v41);
      if ( DeviceGuidProperty < 0 )
        goto LABEL_40;
      v17 = *(_QWORD *)&v41.fmtid.Data1 - *(_QWORD *)&GUID_NULL.Data1;
      if ( *(_QWORD *)&v41.fmtid.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
        v17 = *(_QWORD *)v41.fmtid.Data4 - *(_QWORD *)GUID_NULL.Data4;
      if ( !v17 )
        break;
      v18 = *(_QWORD *)&v41.fmtid.Data1 - 0x4647CD8BE0CBF06CLL;
      if ( *(_QWORD *)&v41.fmtid.Data1 == 0x4647CD8BE0CBF06CLL )
        v18 = *(_QWORD *)v41.fmtid.Data4 - 0x74F9F0433B268ABBLL;
      v13 = pdnDevInst;
      if ( !v18 )
        goto LABEL_33;
      v19 = *(_QWORD *)&v41.fmtid.Data1 - 0x11D074D3745A17A0LL;
      if ( *(_QWORD *)&v41.fmtid.Data1 == 0x11D074D3745A17A0LL )
        v19 = *(_QWORD *)v41.fmtid.Data4 + 0x25A8F0365FFF014ALL;
      if ( !v19 )
      {
LABEL_33:
        *((_OWORD *)v5 + 5) = v41.fmtid;
        *((_DWORD *)v5 + 26) = v13;
        *((_DWORD *)v5 + 25) = i;
      }
    }
    WindowsDeleteString(0LL);
    *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
    v38 = *((_DWORD *)v5 + 24);
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v38,
                             (void *)&DEVPKEY_Device_HardwareIds,
                             &stringa,
                             v32);
    if ( DeviceStringProperty < 0 )
    {
      WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
      *(_QWORD *)&stringa.fmtid.Data1 = 0LL;
      RefCountedObject::Release((RefCountedObject *)v5);
      return (unsigned int)DeviceStringProperty;
    }
    else
    {
      v21 = WindowsGetStringRawBuffer(*(HSTRING *)&stringa.fmtid.Data1, &length);
      v22 = length;
      if ( length )
      {
        do
        {
          if ( !*v21 )
            break;
          v23 = wcsnlen(v21, v22);
          if ( (!*((_WORD *)v5 + 54) || !*((_WORD *)v5 + 55))
            && (swscanf_s(v21, L"USB\\VID_%4x&PID_%4x", &v34, &v35) == 2
             || swscanf_s(v21, L"HID\\VID_%4x&PID_%4x", &v34, &v35) == 2
             || swscanf_s(v21, L"HID\\{%*8c-%*4c-%*4c-%*4c-%*12c}_VID&%4x_PID&%4x", &v34, &v35) == 2) )
          {
            *((_WORD *)v5 + 54) = v34;
            *((_WORD *)v5 + 55) = v35;
          }
          if ( (!*((_WORD *)v5 + 56) || !*((_WORD *)v5 + 57))
            && swscanf_s(v21, L"HID_DEVICE_UP:%4x_U:%4x", &v39, &v40) == 2 )
          {
            v26 = v39;
            *((_WORD *)v5 + 56) = v39;
            v27 = v40;
            *((_WORD *)v5 + 57) = v40;
            if ( v26 == 89 && v27 == 1 )
            {
              LampArrayTelemetry::GetInstance();
              LampArrayTelemetry::LogPnPDeviceInfo(
                v31,
                v21,
                *((_WORD *)v5 + 54),
                *((_WORD *)v5 + 55),
                *((_WORD *)v5 + 56),
                *((_WORD *)v5 + 57));
            }
          }
          v21 += v23 + 1;
          v24 = -1 - (_DWORD)v23 + length == 0;
          v22 = -1 - v23 + length;
          length = v22;
        }
        while ( !v24 );
      }
      _InterlockedExchange((volatile __int32 *)v5 + 29, 1);
      *a2 = (struct PnpDevice *)v5;
      WindowsDeleteString(*(HSTRING *)&stringa.fmtid.Data1);
      return 0LL;
    }
  }
}
