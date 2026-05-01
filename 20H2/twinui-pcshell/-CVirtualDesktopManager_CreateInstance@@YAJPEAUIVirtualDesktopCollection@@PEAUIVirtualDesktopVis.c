/*
 * XREFs of ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification2@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence2@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180439434
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18042F6C8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIVirtualDesktopManagerInternal3@@UIVirtualDesktopManagerInternal2@@UIVirtualDesktopManagerInternal@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UISuspendableVirtualDesktopManager@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BCDB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800BCDB0.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification2@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence2@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification2@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence2@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180438040 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18043A0A0 (-InternalRelease@-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager_CreateInstance(
        struct IVirtualDesktopCollection *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopNotification2 *a3,
        struct IVirtualDesktopForegroundPolicy *a4,
        struct IVirtualDesktopPersistence2 *a5,
        struct IVirtualDesktopGroupedViewsPolicy *a6,
        struct IVirtualDesktopLock *a7,
        const struct _GUID *a8,
        void **a9)
{
  void **v9; // rdi
  int Interface; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IVirtualDesktopCollection *v15; // [rsp+60h] [rbp+20h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v16; // [rsp+68h] [rbp+28h] BYREF
  struct IVirtualDesktopNotification2 *v17; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktopForegroundPolicy *v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v15 = a1;
  v9 = a9;
  *a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(&a9);
  Interface = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification2 * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence2 * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
                (CVirtualDesktopManager **)&a9,
                &v15,
                &v16,
                &v17,
                &v18,
                &a5,
                &a6,
                &a7);
  v11 = Interface;
  if ( Interface < 0 )
  {
    v12 = 715LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)Interface);
    goto LABEL_6;
  }
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerInternal3,IVirtualDesktopManagerInternal2,IVirtualDesktopManagerInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ISuspendableVirtualDesktopManager,Microsoft::WRL::FtmBase>::QueryInterface(
                (__int64)a9,
                &GUID_b0be15a1_5751_488a_9673_448b5ef2d919,
                v9);
  v11 = Interface;
  if ( Interface < 0 )
  {
    v12 = 716LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(&a9);
  return v11;
}
