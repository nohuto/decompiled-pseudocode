/*
 * XREFs of ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034B30
 * Callers:
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800347A0 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18008F4D0 (-OnDeviceAttach@AugmentedInputDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180094820 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180097F20 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800995D0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A8B0 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009AF30 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B370 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B9A0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C1C0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x180034D84 (-LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D304 (--_U@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180088FE0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HIDDeviceCollection::OnDeviceAttach(HIDDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  _DWORD *v6; // rbx
  int *v7; // r14
  int Device; // eax
  unsigned int v9; // edi
  struct RIMDevice *v10; // r13
  struct RIMDevice *v11; // rsi
  int v12; // eax
  struct _HIDP_PREPARSED_DATA *v13; // rax
  struct _HIDP_PREPARSED_DATA *v14; // rdi
  NTSTATUS Caps; // eax
  int v16; // esi
  int v17; // eax
  __int64 v19; // rdx
  unsigned int v20; // esi
  const struct std::nothrow_t *v21; // rdx
  int v22; // [rsp+20h] [rbp-89h]
  int v23; // [rsp+20h] [rbp-89h]
  size_t Size; // [rsp+30h] [rbp-79h] BYREF
  struct RIMDevice *v25; // [rsp+38h] [rbp-71h] BYREF
  int v26; // [rsp+40h] [rbp-69h]
  _DWORD *v27; // [rsp+48h] [rbp-61h]
  _OWORD v28[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v29; // [rsp+70h] [rbp-39h]
  _HIDP_CAPS Capabilities; // [rsp+80h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v26 = a2;
  LODWORD(Size) = 0;
  v6 = 0LL;
  v27 = 0LL;
  memset(v28, 0, sizeof(v28));
  v29 = 0LL;
  if ( !a3 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL,
      v22);
    __debugbreak();
  }
  v7 = (int *)*a3;
  if ( !*a3 )
  {
    v6 = operator new(0x60CuLL);
    memset_0(v6, 0, 0x60CuLL);
    v6[2] = 1548;
    v27 = v6;
    v7 = v6;
  }
  v25 = 0LL;
  Device = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v25, 0LL);
  v9 = Device;
  if ( Device < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)Device,
      v23);
    if ( !v6 )
      return v9;
LABEL_22:
    operator delete(v6, (const struct std::nothrow_t *)0x60C);
    return v9;
  }
  v10 = v25;
  if ( !(*(unsigned __int8 (__fastcall **)(HIDDeviceCollection *, struct RIMDevice *))(*(_QWORD *)this + 96LL))(
          this,
          v25) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8000FFFFLL,
      v23);
    if ( v6 )
      operator delete(v6, (const struct std::nothrow_t *)0x60C);
    return 2147549183LL;
  }
  v11 = (struct RIMDevice *)*((_QWORD *)v10 + 2);
  v25 = v11;
  v12 = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v11, 0LL, &Size);
  if ( v12 < 0 )
  {
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x108,
           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
           (const char *)(unsigned int)v12,
           v23);
    goto LABEL_29;
  }
  v13 = (struct _HIDP_PREPARSED_DATA *)operator new[]((unsigned int)Size);
  v14 = v13;
  if ( !v13 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)0x8007000ELL,
      v23);
LABEL_29:
    if ( !v6 )
      return v9;
    goto LABEL_22;
  }
  memset_0(v13, 0, (unsigned int)Size);
  Caps = RIMGetDevicePreparsedData(*((_QWORD *)this + 10), v11, v14, &Size);
  if ( Caps < 0 )
  {
    v19 = 277LL;
  }
  else
  {
    v16 = 64;
    memset_0(&Capabilities, 0, sizeof(Capabilities));
    Caps = HidP_GetCaps(v14, &Capabilities);
    if ( Caps >= 0 )
    {
      switch ( Capabilities.Usage )
      {
        case 4u:
          if ( Capabilities.UsagePage == 13 )
          {
            v16 = 8;
            goto LABEL_17;
          }
          goto LABEL_66;
        case 5u:
          if ( Capabilities.UsagePage == 13 )
          {
            v16 = 32;
            goto LABEL_17;
          }
          if ( Capabilities.UsagePage == 1 )
            goto LABEL_17;
          goto LABEL_66;
        case 0xEEu:
          if ( Capabilities.UsagePage != 1 )
            goto LABEL_66;
          break;
        case 1u:
          if ( Capabilities.UsagePage != 12 )
            goto LABEL_47;
          break;
        case 0x80u:
          if ( Capabilities.UsagePage == 1 )
          {
            v16 = 128;
            goto LABEL_17;
          }
          goto LABEL_66;
        case 2u:
LABEL_47:
          if ( Capabilities.UsagePage == 13 )
          {
            v16 = 16;
            goto LABEL_17;
          }
          goto LABEL_49;
        default:
LABEL_49:
          if ( Capabilities.Usage == 0xFFAA )
          {
            if ( Capabilities.UsagePage == 1 )
            {
              v16 = 1024;
              goto LABEL_17;
            }
            goto LABEL_66;
          }
          if ( Capabilities.Usage != 15 || Capabilities.UsagePage != 1 )
          {
            if ( Capabilities.Usage != 1 )
            {
              if ( Capabilities.Usage == 15 )
              {
                if ( Capabilities.UsagePage == 13 )
                {
                  v16 = 2048;
                  goto LABEL_17;
                }
                goto LABEL_66;
              }
LABEL_57:
              if ( Capabilities.Usage != 2 )
              {
                if ( Capabilities.Usage == 17 )
                {
                  v16 = 0x100000;
                  if ( Capabilities.UsagePage == 1 )
                  {
LABEL_17:
                    v17 = Size;
                    *((_QWORD *)v10 + 6) = v14;
                    *((_DWORD *)v10 + 14) = v17;
                    *v7 = v26;
                    v7[1] = v16;
                    if ( (int)RIMGetDeviceProperties(*((_QWORD *)this + 10), v25, v28) >= 0 )
                    {
                      v7[8] = DWORD2(v28[0]);
                      *((_WORD *)v7 + 18) = WORD6(v28[0]);
                      RawInputProvidersTelemetry::LogRawInputDeviceAttached(
                        v7[1],
                        *((_WORD *)v7 + 16),
                        *((_WORD *)v7 + 17),
                        WORD6(v28[0]));
                    }
                    *a3 = (struct DeviceInfo *)v7;
                    return 0LL;
                  }
                }
LABEL_66:
                v16 = 256;
                goto LABEL_17;
              }
              if ( Capabilities.UsagePage != 18 )
                goto LABEL_66;
LABEL_59:
              v16 = 0x4000;
              goto LABEL_17;
            }
            if ( Capabilities.UsagePage != 0xFF0A )
            {
              if ( Capabilities.UsagePage == 18 )
                goto LABEL_59;
              goto LABEL_57;
            }
          }
          v16 = 0x2000;
          goto LABEL_17;
      }
      v16 = 128;
      goto LABEL_17;
    }
    v19 = 283LL;
  }
  v20 = wil::details::in1diag3::Return_NtStatus(
          retaddr,
          (void *)v19,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
          (const char *)(unsigned int)Caps,
          v23);
  operator delete(v14, v21);
  if ( v6 )
    operator delete(v6, (const struct std::nothrow_t *)0x60C);
  return v20;
}
