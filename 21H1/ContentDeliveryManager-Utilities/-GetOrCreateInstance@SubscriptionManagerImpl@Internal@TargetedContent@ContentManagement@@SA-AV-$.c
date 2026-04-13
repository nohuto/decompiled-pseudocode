/*
 * XREFs of ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180043E84
 * Callers:
 *     ?ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180022BF0 (-ActivateInstance@SubscriptionManagerFactory@Internal@TargetedContent@ContentManagement@@UEAAJPE.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AsWeak@?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@QEBAJPEAVWeakRef@23@@Z @ 0x18004494C (-AsWeak@-$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsof.c)
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x1800464AC (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180056C24 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetOrCreateInstance(
        __int64 *a1,
        __int64 a2,
        bool *a3)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  RTL_SRWLOCK *v14; // [rsp+48h] [rbp+18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF

  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", (const unsigned __int16 *)&v14, a3);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_20;
  if ( !(_BYTE)v14 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)0x80070005LL);
    goto LABEL_22;
  }
  v15 = 0LL;
  if ( !ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
    || ((*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                          + 24LL))(
          ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
          &GUID_d5343860_de91_4cae_b38a_84536a72847c,
          &v15),
        (v6 = v15) == 0) )
  {
    AcquireSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
    v14 = &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton;
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v15 = 0LL;
    if ( ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak )
    {
      (*(void (__fastcall **)(_QWORD, GUID *, __int64 *))(*ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak
                                                        + 24LL))(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak,
        &GUID_d5343860_de91_4cae_b38a_84536a72847c,
        &v15);
      if ( v15 )
        goto LABEL_13;
    }
    v8 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl,ContentManagement::TargetedContent::Internal::ISubscriptionManager,>(&v15);
    v9 = retaddr;
    if ( v8 >= 0 )
    {
      v10 = ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak;
      ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = Microsoft::WRL::ComPtr<ContentManagement::TargetedContent::Internal::ISubscriptionManager>::AsWeak(
              &v15,
              &ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_singletonSubscriptionManagerWeak);
      if ( v11 >= 0 )
      {
LABEL_13:
        ReleaseSRWLockExclusive(&ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::s_srwLock_singleton);
        v6 = v15;
        goto LABEL_14;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x101,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_20:
      wil::details::in1diag3::Throw_Hr(
        v5,
        (void *)0xF3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x100,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x18004405BLL);
  }
LABEL_14:
  *a1 = 0LL;
  if ( a1 != &v15 )
  {
    *a1 = v6;
    v6 = 0LL;
  }
  if ( v6 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
