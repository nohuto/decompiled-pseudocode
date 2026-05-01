/*
 * XREFs of ??0ViewHostViewModeChangeRequestedEventArgs@@QEAA@XZ @ 0x18024C0CC
 * Callers:
 *     ??$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEBW4ViewMode@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostViewModeChangeRequestedEventArgs@@AEBW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x180249E68 (--$MakeAndInitialize@VViewHostViewModeChangeRequestedEventArgs@@V1@AEBW4ViewMode@Holographic@She.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180030DD4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

ViewHostViewModeChangeRequestedEventArgs *__fastcall ViewHostViewModeChangeRequestedEventArgs::ViewHostViewModeChangeRequestedEventArgs(
        ViewHostViewModeChangeRequestedEventArgs *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((ViewHostViewModeChangeRequestedEventArgs *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewHostViewModeChangeRequestedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &ViewHostViewModeChangeRequestedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
