/*
 * XREFs of ??0IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAA@XZ @ 0x1801B6F14
 * Callers:
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVShellFeedsExperienceManagerImpl@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVShellFeedsExperienceManagerImpl@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x180099D8C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@P.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1801B6614 (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_1801B6614.c)
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVSearchAppExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVSearchAppExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x1801F502C (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Win_ea_1801F502C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *__fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::IImmersiveWindowMessageNotificationHandler(
        Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler *this)
{
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveWindowMessageNotification>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveWindowMessageNotification>::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `IImmersiveWindowMessageNotification'};
  *((_QWORD *)this + 2) = &Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)this + 19) = 0LL;
  return this;
}
