/*
 * XREFs of ??$MakeAndInitialize@V?$EventInvocationContext@$00@details@wil@@UIEventInvocationContext@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContext@details@wil@@@Z @ 0x180219F00
 * Callers:
 *     ?GetEventInvocationContext@?$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventInvocationContext@23@@Z @ 0x18021DEB0 (-GetEventInvocationContext@-$EventInvocationContextProvider@$00@details@wil@@UEAAJPEAPEAUIEventI.c)
 *     ?Initialize@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@AEAAJXZ @ 0x18021EA8C (-Initialize@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072090 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180124694 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180124694.c)
 *     ??0?$EventInvocationContext@$00@details@wil@@QEAA@XZ @ 0x18021B7B4 (--0-$EventInvocationContext@$00@details@wil@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$EventInvocationContext@$00@details@wil@@QEAAJXZ @ 0x18021FB14 (-RuntimeClassInitialize@-$EventInvocationContext@$00@details@wil@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContext<1>,wil::details::IEventInvocationContext,>(
        _QWORD *a1)
{
  void *v2; // rax
  int CanCastTo; // ebx
  void *v4; // rdi
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  _DWORD *v8; // rdx

  *a1 = 0LL;
  v2 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = (void *)wil::details::EventInvocationContext<1>::EventInvocationContext<1>(v2);
  CanCastTo = wil::details::EventInvocationContext<1>::RuntimeClassInitialize(v4);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_da6f771e_d39d_405e_aa6c_1a3cccb72a39, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v4;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL))(v4);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v6, v7) )
      {
        *a1 = v4;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v4 + 8,
                      v8);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_11:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release((__int64)v4);
  return (unsigned int)CanCastTo;
}
