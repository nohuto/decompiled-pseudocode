/*
 * XREFs of ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800A31B8
 * Callers:
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800A3D58 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044148 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z @ 0x18009F870 (--4-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z.c)
 *     ??_GDeviceAttachEventArgs@ConsumerControlNexusDevice@@QEAAPEAXI@Z @ 0x1800A2C80 (--_GDeviceAttachEventArgs@ConsumerControlNexusDevice@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceAttach(
        ConsumerControlNexusDevice *this,
        struct IRawInputProvider *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = operator new(0x60CuLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x60CuLL);
    v5[2] = 1548;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 16) = v5;
  if ( !v5 )
  {
    v6 = 311LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  **((_DWORD **)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14));
  *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) = 4;
  *(_DWORD *)(*((_QWORD *)this + 16) + 8LL) = 1548;
  v8 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 0LL;
    *v8 = 0LL;
    v8[1] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v6 = 317LL;
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v9, (__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IRawInputProvider>::operator=(v9 + 1, (__int64)a2);
  v9[2] = *((_QWORD *)this + 16);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(ConsumerControlNexusDevice::DeviceAttachEventArgs *), __int64 *, __int64))(**((_QWORD **)this + 15) + 144LL))(
          *((_QWORD *)this + 15),
          ConsumerControlNexusDevice::NotifyDeviceAttachCallback,
          v9,
          4LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *((_BYTE *)this + 136) = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v10);
    ConsumerControlNexusDevice::DeviceAttachEventArgs::`scalar deleting destructor'((ConsumerControlNexusDevice::DeviceAttachEventArgs *)v9);
    return v11;
  }
}
