/*
 * XREFs of ?GetDeviceStringProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAPEAUHSTRING__@@@Z @ 0x180026CD0
 * Callers:
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180026760 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x180026880 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x18002802C (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x18002A3D4 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PnpApiWrapper::Details::GetDeviceStringProperty(
        PnpApiWrapper::Details *this,
        unsigned int (*a2)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *),
        void *a3,
        HSTRING *a4)
{
  size_t v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edi
  UINT32 v11; // r13d
  HRESULT v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  WCHAR *v15; // rcx
  HRESULT v16; // ebx
  __int16 v18; // ax
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rdx
  HRESULT v22; // eax
  unsigned int v23; // edi
  HSTRING_BUFFER v24; // rcx
  int v25; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_BUFFER bufferHandle; // [rsp+38h] [rbp-28h] BYREF
  WCHAR *charBuffer; // [rsp+40h] [rbp-20h] BYREF
  HSTRING_BUFFER v28; // [rsp+48h] [rbp-18h] BYREF
  WCHAR *v29; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v31; // [rsp+A0h] [rbp+40h] BYREF
  HSTRING *string; // [rsp+B8h] [rbp+58h]

  string = a4;
  v7 = 0LL;
  *a4 = 0LL;
  v31 = 0;
  v8 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, int *, _QWORD))this)(
         a2,
         a3,
         &v25,
         0LL);
  if ( v8 != 26 && v8 )
  {
    if ( v8 == 37 )
      return 1LL;
    v19 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v8, v9);
    v20 = v19;
    if ( v19 == -2147023728 )
      return 2147943568LL;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
        (const char *)(unsigned int)v19,
        (int)&v31);
      return v20;
    }
  }
  if ( (unsigned int)v31 <= 2 )
    return 0LL;
  v10 = (unsigned int)v31 >> 1;
  v11 = ((unsigned int)v31 >> 1) - 1;
  v12 = WindowsPreallocateStringBuffer(v11, &charBuffer, &bufferHandle);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v12,
      (int)&v31);
    return v13;
  }
  v14 = ((__int64 (__fastcall *)(unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *), void *, int *, WCHAR *))this)(
          a2,
          a3,
          &v25,
          charBuffer);
  if ( v14 )
  {
    switch ( v14 )
    {
      case 2:
        v16 = -2147024882;
        break;
      case 13:
      case 37:
      case 55:
        WindowsDeleteStringBuffer(bufferHandle);
        return 2147943568LL;
      case 19:
        v16 = -2147467259;
        break;
      case 51:
        v16 = -2147024891;
        break;
      default:
        v16 = -2147418113;
        break;
    }
    v21 = 462LL;
    goto LABEL_37;
  }
  v15 = charBuffer;
  if ( v10 )
  {
    if ( v25 == 18 )
    {
      v7 = wcsnlen(charBuffer, v10);
    }
    else if ( v25 == 8210 && *charBuffer )
    {
      v7 = 1LL;
      if ( v10 <= 1uLL )
      {
LABEL_18:
        v7 = v10;
      }
      else
      {
        while ( 1 )
        {
          v18 = *v15++;
          if ( !v18 && !*v15 )
            break;
          if ( ++v7 >= v10 )
            goto LABEL_18;
        }
      }
    }
  }
  if ( v7 >= v10 )
  {
    v16 = -2147418113;
    v21 = 466LL;
    goto LABEL_37;
  }
  if ( !v7 )
  {
    WindowsDeleteStringBuffer(bufferHandle);
    return 0LL;
  }
  if ( v7 == v11 )
    goto LABEL_11;
  v22 = WindowsPreallocateStringBuffer(v7, &v29, &v28);
  v23 = v22;
  if ( v22 >= 0 )
  {
    _o_wcscpy_s(v29, v7 + 1, charBuffer);
    v24 = bufferHandle;
    bufferHandle = v28;
    v28 = v24;
    v16 = WindowsDeleteStringBuffer(v24);
    if ( v16 >= 0 )
    {
LABEL_11:
      v16 = WindowsPromoteStringBuffer(bufferHandle, string);
      if ( v16 >= 0 )
        return 0LL;
      v21 = 491LL;
      goto LABEL_37;
    }
    v21 = 487LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)(unsigned int)v16,
      (int)&v31);
    WindowsDeleteStringBuffer(bufferHandle);
    return (unsigned int)v16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E2,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
    (const char *)(unsigned int)v22,
    (int)&v31);
  WindowsDeleteStringBuffer(bufferHandle);
  return v23;
}
