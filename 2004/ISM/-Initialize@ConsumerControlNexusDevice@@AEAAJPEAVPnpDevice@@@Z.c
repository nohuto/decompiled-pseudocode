/*
 * XREFs of ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A2E50
 * Callers:
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800A3D58 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D310 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066F44 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088FE0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x18009F8CC (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A0484 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJKK@Z @ 0x1800A04CC (-OpenInterface@PnpDevice@@QEAAJKK@Z.c)
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800A05E4 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800A3C0C (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::Initialize(ConsumerControlNexusDevice *this, struct PnpDevice *a2)
{
  PnpDevice **v2; // r14
  PnpDevice *v4; // rdi
  unsigned int v5; // esi
  int InterfacePath; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  PHIDP_PREPARSED_DATA *v9; // r15
  const char *v10; // r9
  PHIDP_PREPARSED_DATA v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // edi
  struct _HIDP_CAPS *v14; // rax
  unsigned __int16 *p_Usage; // rbx
  NTSTATUS Caps; // eax
  unsigned __int64 v17; // rcx
  size_t v18; // rax
  struct _HIDP_BUTTON_CAPS *ButtonCaps; // rdi
  NTSTATUS SpecificButtonCaps; // eax
  const struct std::nothrow_t *v21; // rdx
  const struct std::nothrow_t *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  __int64 v26; // rbx
  char *v27; // rax
  ConsumerControlNexusDevice **v28; // rdx
  int v29; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  USHORT ButtonCapsLength; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp+20h] BYREF

  v2 = (PnpDevice **)((char *)this + 16);
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  v4 = *v2;
  WindowsDeleteString(*((HSTRING *)this + 3));
  v5 = 0;
  *((_QWORD *)this + 3) = 0LL;
  InterfacePath = PnpDevice::GetInterfacePath((HSTRING *)v4, (HSTRING *)this + 3);
  if ( InterfacePath < 0 )
  {
    v7 = 72LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)InterfacePath);
    return (unsigned int)InterfacePath;
  }
  InterfacePath = PnpDevice::OpenInterface(*v2, 0x80000000, 3u);
  if ( InterfacePath < 0 )
  {
    v7 = 74LL;
    goto LABEL_3;
  }
  v9 = (PHIDP_PREPARSED_DATA *)((char *)this + 32);
  if ( !HidD_GetPreparsedData(*((HANDLE *)*v2 + 5), (PHIDP_PREPARSED_DATA *)this + 4) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x4E,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
             v10);
  v11 = *v9;
  if ( *((_WORD *)*v9 + 5) != 12 )
  {
    v12 = 81LL;
LABEL_10:
    v13 = -2147418113;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v13);
    return v13;
  }
  if ( *((_WORD *)v11 + 4) != 1 )
  {
    v12 = 82LL;
    goto LABEL_10;
  }
  *((_QWORD *)this + 12) = *((unsigned __int16 *)v11 + 11);
  v14 = (struct _HIDP_CAPS *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  p_Usage = &v14->Usage;
  if ( !v14 )
  {
    v13 = -2147024882;
    v12 = 87LL;
    goto LABEL_11;
  }
  Caps = HidP_GetCaps(*v9, v14);
  if ( Caps < 0 )
  {
    v5 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x58,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
           (const char *)(unsigned int)Caps);
LABEL_26:
    operator delete(p_Usage, (const struct std::nothrow_t *)0x40);
    return v5;
  }
  v17 = p_Usage[23];
  *((_WORD *)this + 20) = v17;
  ButtonCapsLength = v17;
  v18 = 72 * v17;
  if ( !is_mul_ok(v17, 0x48uLL) )
    v18 = -1LL;
  ButtonCaps = (struct _HIDP_BUTTON_CAPS *)operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
  if ( !ButtonCaps )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    v5 = -2147024882;
    goto LABEL_26;
  }
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0xCu, 0, 0xD0u, ButtonCaps, &ButtonCapsLength, *v9);
  if ( SpecificButtonCaps < 0 )
  {
    v5 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x69,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
           (const char *)(unsigned int)SpecificButtonCaps);
    operator delete(ButtonCaps, v22);
    goto LABEL_26;
  }
  if ( !ButtonCapsLength )
  {
    operator delete(ButtonCaps, v21);
    v5 = -2147418113;
    goto LABEL_26;
  }
  operator delete(ButtonCaps, v21);
  operator delete(p_Usage, (const struct std::nothrow_t *)0x40);
  result = PnpDevice::OutputIoctl(*v2, v23, v24, &v32, &v33);
  if ( (int)result < 0 )
    return result;
  if ( v33 != 4 )
  {
    v12 = 123LL;
    goto LABEL_10;
  }
  v25 = v32;
  if ( !v32 )
  {
    v12 = v32 + 124;
    goto LABEL_10;
  }
  v26 = *((_QWORD *)this + 12);
  if ( v32 > 0x40 )
    v25 = 64LL;
  v32 = v25;
  while ( *((_QWORD *)this + 8) < v25 )
  {
    v27 = (char *)operator new[](v26 + 87, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v27 )
    {
      v13 = -2147024882;
      v12 = 141LL;
      goto LABEL_11;
    }
    *((_QWORD *)v27 + 2) = this;
    *(_OWORD *)(v27 + 24) = 0LL;
    *(_OWORD *)(v27 + 40) = 0LL;
    *((_DWORD *)v27 + 14) = 0;
    *((_QWORD *)v27 + 8) = 0LL;
    *((_QWORD *)v27 + 9) = *((_QWORD *)this + 12);
    v28 = (ConsumerControlNexusDevice **)*((_QWORD *)this + 7);
    if ( *v28 != (ConsumerControlNexusDevice *)((char *)this + 48) )
      __fastfail(3u);
    *(_QWORD *)v27 = (char *)this + 48;
    *((_QWORD *)v27 + 1) = v28;
    *v28 = (ConsumerControlNexusDevice *)v27;
    ++*((_QWORD *)this + 8);
    *((_QWORD *)this + 7) = v27;
    v25 = v32;
  }
  v29 = ConsumerControlNexusDevice::QueueInputBuffers(this);
  if ( v29 < 0 )
    return (unsigned int)v29;
  return v5;
}
