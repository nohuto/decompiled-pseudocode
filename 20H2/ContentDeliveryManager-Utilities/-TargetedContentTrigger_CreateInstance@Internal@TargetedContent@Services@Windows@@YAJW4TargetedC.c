/*
 * XREFs of ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062810
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180076610 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x180028648 (--0TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJW4TargetedContentKnownTrigger@2345@PEAUHSTRING__@@1111@Z @ 0x1800617AC (-RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
        int a1,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        HSTRING a6,
        wil::details::in1diag3 **a7)
{
  wil::details::in1diag3 *v12; // rbx
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v13; // rax
  int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  wil::details::in1diag3 *v17; // [rsp+A0h] [rbp+38h]

  *a7 = 0LL;
  v12 = retaddr;
  if ( WindowsIsStringEmpty(a2) )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x122,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(a3) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x123,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v12 = retaddr;
  if ( WindowsIsStringEmpty(a4) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x1800629E7LL);
  }
  v17 = 0LL;
  v13 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)operator new(
                                                                                      0xC8uLL,
                                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    v12 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::TargetedContentTriggerImpl(v13);
    v14 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
            (__int64)v12,
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    if ( v14 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v12 + 8LL))(v12);
      v17 = v12;
      if ( v12 )
        (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v12 + 16LL))(v12);
      v14 = 0;
    }
    else if ( v12 )
    {
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    v14 = -2147024882;
  }
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x127,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_17;
  }
  *a7 = v17;
  return 0LL;
}
