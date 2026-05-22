/*
 * XREFs of ?IsMobile0DButtonDevice@MobileButtonDeviceCollection@@AEAAJPEAVHIDDevice@@PEA_N@Z @ 0x180097C94
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180097F20 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D304 (--_U@YAPEAX_K@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CB3C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::IsMobile0DButtonDevice(
        MobileButtonDeviceCollection *this,
        struct HIDDevice *a2,
        bool *a3)
{
  int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebp
  int HIDCapabilities; // eax
  unsigned int v7; // ebx
  struct _HIDP_CAPS *v9; // r13
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // rbx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  USAGE *v12; // r14
  __int64 v13; // r12
  const struct std::nothrow_t *v14; // rdx
  char v15; // si
  USHORT ButtonCapsLength[2]; // [rsp+40h] [rbp-68h] BYREF
  int v17; // [rsp+44h] [rbp-64h]
  struct _HIDP_CAPS *v18; // [rsp+48h] [rbp-60h] BYREF
  PHIDP_PREPARSED_DATA v19; // [rsp+50h] [rbp-58h]
  bool *v20; // [rsp+58h] [rbp-50h]
  __int64 v21; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v20 = a3;
  v21 = 0LL;
  v4 = 0;
  v19 = (PHIDP_PREPARSED_DATA)*((_QWORD *)a2 + 6);
  LOBYTE(v3) = 0;
  v18 = 0LL;
  v17 = v3;
  v5 = 0;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(a2, &v18);
  v7 = HIDCapabilities;
  if ( HIDCapabilities >= 0 )
  {
    v9 = v18;
    ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](saturated_mul(v18->NumberInputButtonCaps, 0x48uLL));
    if ( ButtonCaps )
    {
      PreparsedData = v19;
      v12 = (USAGE *)&v21;
      LODWORD(v21) = 3866665;
      WORD2(v21) = 60;
      v13 = 3LL;
      do
      {
        ButtonCapsLength[0] = v9->NumberInputButtonCaps;
        memset_0(ButtonCaps, 0, 72LL * ButtonCapsLength[0]);
        if ( HidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *v12, ButtonCaps, ButtonCapsLength, PreparsedData) >= 0 )
          ++v5;
        ++v12;
        --v13;
      }
      while ( v13 );
      v15 = v17;
      if ( (unsigned __int16)(v9->NumberInputButtonCaps - 1) <= 3u && v5 >= 2 )
        v15 = 1;
      if ( v20 )
        *v20 = v15;
      operator delete(ButtonCaps, v14);
    }
    else
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
        (const char *)0x8007000ELL);
    }
    return v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return v7;
  }
}
