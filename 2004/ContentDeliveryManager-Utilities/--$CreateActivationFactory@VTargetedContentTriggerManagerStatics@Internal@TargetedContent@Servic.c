/*
 * XREFs of ??$CreateActivationFactory@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180027AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000728C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180026350 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentTriggerManagerStaticsInternal@Internal@TargetedContent@Services@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180028570 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD9C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  char *v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v12; // rcx
  signed __int32 v13; // edx
  int v14; // edx
  int CanCastTo; // esi
  signed __int32 v16; // eax

  v4 = 0LL;
  v9 = (char *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (__int64)v9;
  if ( !v9 )
  {
    CanCastTo = -2147024882;
LABEL_20:
    v10 = 0LL;
    goto LABEL_21;
  }
  v11 = v9 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *(_QWORD *)(v10 + 80) = 0LL;
  v12 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)v10 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *v11 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>>'};
  *(_QWORD *)(v10 + 40) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>>'};
  *(_DWORD *)(v10 + 68) = 1;
  *(_DWORD *)(v10 + 88) = 4;
  if ( v12 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v12 + 8LL))(v12);
  *(_QWORD *)v10 = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::`vftable';
  *v11 = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>>'};
  *(_QWORD *)(v10 + 40) = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>>'};
  v13 = *(_DWORD *)(v10 + 68);
  if ( v13 == 0x7FFFFFFF )
    goto LABEL_9;
  do
  {
    if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 68), v13 + 1, v13) )
      break;
    v13 = *(_DWORD *)(v10 + 68);
  }
  while ( v13 != 0x7FFFFFFF );
  if ( v13 == 0x7FFFFFFF )
LABEL_9:
    v14 = 0x7FFFFFFF;
  else
    v14 = v13 + 1;
  if ( (*(_BYTE *)(v10 + 88) & 4) == 0 && v14 == 2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v4 = v10;
  Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v10);
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v10,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    if ( (*a1 & 4) == 0 )
    {
      do
        v16 = *(_DWORD *)(v10 + 68);
      while ( v16 != 0x7FFFFFFF
           && v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 68), v16 + 1, v16) );
    }
    v4 = 0LL;
    *(_DWORD *)(v10 + 88) = *(_DWORD *)a1;
    CanCastTo = 0;
    *(_QWORD *)(v10 + 80) = a2;
    goto LABEL_20;
  }
LABEL_21:
  if ( v10 )
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  return (unsigned int)CanCastTo;
}
