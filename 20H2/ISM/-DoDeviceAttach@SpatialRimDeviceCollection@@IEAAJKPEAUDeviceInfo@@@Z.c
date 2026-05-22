/*
 * XREFs of ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092D58
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180094780 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033D10 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$?0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAK@Z @ 0x1800908AC (--$-0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U-$integral_constant@D$0A@@wistd@@AEAK@Z.c)
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x180090A34 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x180092484 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x180095DA0 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialRimDeviceCollection::DoDeviceAttach(void **this, __int64 a2, struct DeviceInfo *a3)
{
  int v4; // ebx
  int Device; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v14; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  struct RIMDevice *v16[4]; // [rsp+58h] [rbp-A8h] BYREF
  char v17; // [rsp+78h] [rbp-88h]
  _BYTE v18[320]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v4 = a2;
  v14 = a2;
  v12 = 0;
  v13 = 0;
  RawInputProvidersTracing::DeviceAttached::DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v18, a2, &v14);
  v16[1] = (struct RIMDevice *)&v12;
  v16[2] = (struct RIMDevice *)&v13;
  v16[3] = (struct RIMDevice *)v18;
  v17 = 1;
  v16[0] = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, v4, 0LL, v16, 0LL);
  v8 = Device;
  v12 = Device;
  if ( Device >= 0 )
  {
    _InterlockedExchange(
      &MPCInputInfoHelper::m_nextSpectrumId,
      (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
    v13 = MPCInputInfoHelper::m_nextSpectrumId;
    v15 &= v7;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
           &v15,
           v16,
           this + 10);
    v8 = v9;
    v12 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, __int64, char *, unsigned __int64))(*(_QWORD *)this[347]
                                                                                                + 48LL))(
             this[347],
             v14,
             v13,
             v15,
             (char *)a3 + 596,
             (unsigned __int64)(this + 345) & -(__int64)(this != 0LL));
      v8 = v9;
      v12 = v9;
      if ( v9 >= 0 )
      {
        v8 = 0;
        goto LABEL_9;
      }
      v10 = 390LL;
    }
    else
    {
      v10 = 385LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v9);
LABEL_9:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x179,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)(unsigned int)Device);
LABEL_10:
  RawInputProvidersTracing::DeviceAttached::Stop((RawInputProvidersTracing::DeviceAttached *)v18, v12, v13);
  RawInputProvidersTracing::DeviceAttached::~DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v18);
  return v8;
}
