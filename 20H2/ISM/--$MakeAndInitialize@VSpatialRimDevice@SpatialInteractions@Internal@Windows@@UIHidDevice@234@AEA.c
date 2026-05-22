/*
 * XREFs of ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x180090A34
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092D58 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x18009212C (--0SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x18009CF40 (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
        _QWORD *a1,
        struct HIDDevice **a2,
        void **a3)
{
  Windows::Internal::SpatialInteractions::SpatialRimDevice *v6; // rax
  int v7; // edi
  Windows::Internal::SpatialInteractions::SpatialRimDevice *v8; // rbx

  *a1 = 0LL;
  v6 = (Windows::Internal::SpatialInteractions::SpatialRimDevice *)operator new(
                                                                     0xB0uLL,
                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (Windows::Internal::SpatialInteractions::SpatialRimDevice *)Windows::Internal::SpatialInteractions::SpatialRimDevice::SpatialRimDevice(v6);
    v7 = Windows::Internal::SpatialInteractions::SpatialRimDevice::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::SpatialRimDevice *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f,
             a1);
    if ( v8 )
      (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialRimDevice *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
