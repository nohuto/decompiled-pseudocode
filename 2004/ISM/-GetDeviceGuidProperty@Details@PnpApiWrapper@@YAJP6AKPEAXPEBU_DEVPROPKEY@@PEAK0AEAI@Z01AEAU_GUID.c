/*
 * XREFs of ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x1800267C0
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800268E0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800A01E0 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180026D30 (-GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAU.c)
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18002A434 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wcscmp_0 @ 0x18004A673 (wcscmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceGuidProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        const struct _DEVPROPKEY *a4)
{
  unsigned int v6; // edx
  unsigned int v7; // edi
  __int64 result; // rax
  int DeviceStringProperty; // eax
  unsigned int v10; // ebx
  HSTRING v11; // rcx
  const wchar_t *StringRawBuffer; // rax
  unsigned int v13; // ebx
  HSTRING *v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-20h] BYREF
  HSTRING string[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING v19; // [rsp+60h] [rbp+8h] BYREF

  LODWORD(v19) = 16;
  v14 = &v19;
  v7 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, _BYTE *))this)(
         a2,
         a3,
         v16);
  if ( !v7 )
    return 0LL;
  a4->fmtid = GUID_NULL;
  if ( v7 == 37 )
  {
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v15 = *(_DWORD *)a2;
    DeviceStringProperty = PnpApiWrapper::Details::GetDeviceStringProperty(
                             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceNodeProperty,
                             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v15,
                             (void *)&DEVPKEY_Device_InstanceId,
                             (const struct _DEVPROPKEY *)string,
                             &v19);
    v10 = DeviceStringProperty;
    v11 = string[0];
    if ( string[0] )
    {
      if ( DeviceStringProperty >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string[0], 0LL);
        if ( !wcscmp_0(StringRawBuffer, L"HTREE\\ROOT\\0") )
        {
          WindowsDeleteString(string[0]);
          return 1LL;
        }
        WindowsDeleteString(string[0]);
        goto LABEL_13;
      }
    }
    else if ( DeviceStringProperty >= 0 )
    {
      v10 = -2147467259;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)0x80004005LL,
        (int)v14);
      v11 = string[0];
    }
    WindowsDeleteString(v11);
    return v10;
  }
LABEL_13:
  result = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v7, v6);
  v13 = result;
  if ( (_DWORD)result != -2147023728 )
  {
    if ( (int)result < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x183,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)result,
        (int)v14);
      return v13;
    }
    return 0LL;
  }
  return result;
}
