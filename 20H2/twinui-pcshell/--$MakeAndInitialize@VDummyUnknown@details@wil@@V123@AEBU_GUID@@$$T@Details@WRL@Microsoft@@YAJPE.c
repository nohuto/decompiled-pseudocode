/*
 * XREFs of ??$MakeAndInitialize@VDummyUnknown@details@wil@@V123@AEBU_GUID@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVDummyUnknown@details@wil@@AEBU_GUID@@$$QEA$$T@Z @ 0x18047DA74
 * Callers:
 *     _anonymous_namespace_::GetTargetItem @ 0x18047DB68 (_anonymous_namespace_--GetTargetItem.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18015C7F4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpad.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18038699C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0DummyUnknown@details@wil@@QEAA@XZ @ 0x18047DB04 (--0DummyUnknown@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::details::DummyUnknown,wil::details::DummyUnknown,_GUID const &,std::nullptr_t>(
        _QWORD *a1,
        __int128 *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  wil::details::DummyUnknown *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm0
  volatile int *v11; // rdx
  __int64 v12; // r10
  volatile int *v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a1 = 0LL;
  v7 = (wil::details::DummyUnknown *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = wil::details::DummyUnknown::DummyUnknown(v7);
    v9 = *a3;
    v10 = *a2;
    v14 = (volatile int *)v8;
    *(_QWORD *)(v8 + 40) = v9;
    *(_OWORD *)(v8 + 24) = v10;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
      v8,
      v11);
    *a1 = v12;
    Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
