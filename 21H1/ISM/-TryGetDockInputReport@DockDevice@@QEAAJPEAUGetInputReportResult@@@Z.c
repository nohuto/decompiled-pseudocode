/*
 * XREFs of ?TryGetDockInputReport@DockDevice@@QEAAJPEAUGetInputReportResult@@@Z @ 0x18009EB68
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009BE60 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??4?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009BCD0 (--4-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x18009C5A4 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 */

__int64 __fastcall DockDevice::TryGetDockInputReport(DockDevice *this, struct GetInputReportResult *a2)
{
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rbx
  NTSTATUS SpecificButtonCaps; // eax
  unsigned int v6; // ebx
  int v8; // r14d
  void *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  const struct std::nothrow_t *v14; // rdx
  USHORT ButtonCapsLength[2]; // [rsp+50h] [rbp-88h] BYREF
  int v16; // [rsp+54h] [rbp-84h] BYREF
  void *v17; // [rsp+58h] [rbp-80h] BYREF
  struct _HIDP_BUTTON_CAPS ButtonCaps; // [rsp+60h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  memset_0(&ButtonCaps, 0, sizeof(ButtonCaps));
  ButtonCapsLength[0] = 1;
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(
                         HidP_Input,
                         1u,
                         0,
                         0xD4u,
                         &ButtonCaps,
                         ButtonCapsLength,
                         PreparsedData);
  v6 = SpecificButtonCaps;
  if ( SpecificButtonCaps >= 0 )
  {
    v8 = *((unsigned __int16 *)this + 32);
    std::make_unique<unsigned char [0],0>(&v17, *((unsigned __int16 *)this + 32));
    v9 = v17;
    *(_BYTE *)v17 = ButtonCaps.ReportID;
    v10 = *((_QWORD *)this + 2);
    v11 = *((_QWORD *)this + 1);
    v16 = 0;
    v12 = NtRIMDeviceIoControl(v11, v10, 721314LL, 0LL, 0, v9, v8, &v16, 0);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)a2 = *((_DWORD *)this + 10);
      *((_DWORD *)a2 + 4) = v8;
      std::unique_ptr<unsigned char [0]>::operator=((void **)a2 + 1, (const struct std::nothrow_t *)&v17);
      v9 = v17;
      v13 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
        (const char *)(unsigned int)v12);
    }
    if ( v9 )
      operator delete(v9, v14);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)SpecificButtonCaps);
    return v6;
  }
}
