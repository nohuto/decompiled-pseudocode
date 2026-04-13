/*
 * XREFs of ?PartialTrustGetSubscriptionAsync@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@89@@Z @ 0x180045C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::PartialTrustGetSubscriptionAsync(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int ActivationFactory; // eax
  int v8; // eax
  const char *v9; // r9
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING v14; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER v15; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13[1] = -2LL;
  *a4 = 0LL;
  v13[0] = 0LL;
  if ( WindowsCreateStringReference(L"ContentManagement.TargetedContent.TargetedContentSubscription", 0x3Du, &v15, &v14) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  try
  {
    ActivationFactory = RoGetActivationFactory(v14, &GUID_6cfef37d_8a37_4c33_a163_2b33a7ba0584, v13);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))(*(_QWORD *)v13[0] + 48LL))(
             v13[0],
             a2,
             a3,
             a4);
      v10 = retaddr;
      if ( v8 >= 0 )
      {
        v11 = v13[0];
        if ( v13[0] )
        {
          v13[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0xA7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x180045DE4LL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA9,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v9);
  }
  return 0LL;
}
