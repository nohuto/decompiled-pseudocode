/*
 * XREFs of ??$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YAJPEAPEAVPTPProcessor@@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Z @ 0x1801994CC
 * Callers:
 *     ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180199660 (-Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0PTPProcessor@@QEAA@XZ @ 0x180199584 (--0PTPProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18019982C (-RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PTPProcessor,PTPProcessor,DeviceInfo * &,IInputProcessorHost * &>(
        PTPProcessor **a1,
        struct DeviceInfo **a2,
        struct IInputProcessorHost **a3)
{
  PTPProcessor *v6; // rax
  int v7; // edi
  PTPProcessor *v8; // rbx
  PTPProcessor *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (PTPProcessor *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = PTPProcessor::PTPProcessor(v6);
    v10 = v8;
    v11 = 0LL;
    v7 = PTPProcessor::RuntimeClassInitialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(PTPProcessor *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
