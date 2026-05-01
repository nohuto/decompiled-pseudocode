/*
 * XREFs of ??0StateChangedEventArgsImpl@@QEAA@PEBG_N@Z @ 0x18043000C
 * Callers:
 *     ??$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA?AV?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@AEAPEBGAEA_N@Z @ 0x18042F634 (--$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA-AV-$ComPtr@VStateChangedEventArg.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180039524 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18008550C (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

StateChangedEventArgsImpl *__fastcall StateChangedEventArgsImpl::StateChangedEventArgsImpl(
        StateChangedEventArgsImpl *this,
        const unsigned __int16 *a2,
        char a3)
{
  _QWORD *v5; // rdi
  const wchar_t *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v5 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((StateChangedEventArgsImpl *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::FamilySafety::AppLimits::IAppUsageStateChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::FamilySafety::AppLimits::IAppUsageStateChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v5 = &Microsoft::WRL::RuntimeClass<Windows::Internal::FamilySafety::AppLimits::IAppUsageStateChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &StateChangedEventArgsImpl::`vftable';
  *((_QWORD *)this + 1) = &StateChangedEventArgsImpl::`vftable'{for `IWeakReferenceSource'};
  *v5 = &StateChangedEventArgsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>((StateChangedEventArgsImpl *)((char *)this + 64), &v7);
  *((_BYTE *)this + 72) = a3;
  return this;
}
