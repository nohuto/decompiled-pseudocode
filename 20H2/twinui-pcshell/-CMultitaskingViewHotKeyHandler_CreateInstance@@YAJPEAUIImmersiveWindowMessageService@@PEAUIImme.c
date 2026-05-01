/*
 * XREFs of ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803865CC
 * Callers:
 *     ?_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18037E128 (-_CreateHotKeyHandler@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801D6FD8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveWindowMessag.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x180386014 (--$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18038699C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler_CreateInstance(
        struct IImmersiveWindowMessageService *a1,
        struct IImmersiveMonitorManager *a2,
        struct IApplicationTargetingTracker *a3,
        struct IMultitaskingViewTaskScheduler *a4,
        struct IApplicationViewCollection *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  int CanCastTo; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // r9
  _DWORD *v14; // rdx
  void **v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IImmersiveWindowMessageService *v18; // [rsp+50h] [rbp+20h] BYREF
  struct IImmersiveMonitorManager *v19; // [rsp+58h] [rbp+28h] BYREF
  struct IApplicationTargetingTracker *v20; // [rsp+60h] [rbp+30h] BYREF
  struct IMultitaskingViewTaskScheduler *v21; // [rsp+68h] [rbp+38h] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v18 = a1;
  v7 = a7;
  a7 = 0LL;
  *v7 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IApplicationTargetingTracker * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
         (CMultitaskingViewHotKeyHandler **)&a7,
         &v18,
         &v19,
         &v20,
         &v21,
         &a5);
  CanCastTo = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 268LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
      (const char *)v10);
    goto LABEL_12;
  }
  *v7 = 0LL;
  if ( InlineIsEqualGUID(&GUID_1ac62032_7c9f_4d34_8191_c44d7d759dfe, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v15 = a7;
    *v7 = a7;
    (*((void (__fastcall **)(void **))*v15 + 1))(v15);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v12, v13) )
    {
      CanCastTo = 0;
      *v7 = a7;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveWindowMessageNotification>::CanCastTo(
                    (__int64)(a7 + 1),
                    v14);
      if ( CanCastTo < 0 )
        goto LABEL_9;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
LABEL_9:
  if ( CanCastTo < 0 )
  {
    v10 = (unsigned int)CanCastTo;
    v11 = 269LL;
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&a7);
  return (unsigned int)CanCastTo;
}
