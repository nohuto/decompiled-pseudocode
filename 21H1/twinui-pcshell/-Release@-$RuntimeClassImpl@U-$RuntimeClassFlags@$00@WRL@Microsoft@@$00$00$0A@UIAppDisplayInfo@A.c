/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076BA0
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18001D2B0 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18001D7CC (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180023ED4 (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x18007406C (_lambda_ca324c265ed58b3d9541d2204f682216_--operator().c)
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::_scalar_deleting_destructor_ @ 0x18007C430 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--_scalar_deleting_destruct.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::_scalar_deleting_destructor_ @ 0x18007F1A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--_scala.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800CC350 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800CC360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpl_ea_1800CC360.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800CC370 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_1800CC370.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x18015AB80 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CSplashScreen@@UEAAKXZ @ 0x18015C420 (-Release@CSplashScreen@@UEAAKXZ.c)
 *     ??_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z @ 0x180358BF0 (--_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z.c)
 *     ??$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAVTrayInfoTipDisplayInfo@SystemTray@@$$QEAPEAUHSTRING__@@@Z @ 0x18035A100 (--$MakeAndInitialize@VTrayInfoTipDisplayInfo@SystemTray@@V12@PEAUHSTRING__@@@Details@WRL@Microso.c)
 *     ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18035A544 (-RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
