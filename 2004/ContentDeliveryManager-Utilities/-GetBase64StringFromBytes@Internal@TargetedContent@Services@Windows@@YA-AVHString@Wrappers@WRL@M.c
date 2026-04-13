/*
 * XREFs of ?GetBase64StringFromBytes@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@IPEBE@Z @ 0x18007247C
 * Callers:
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800757F4 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800776E0 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180073FD0 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, _QWORD *); // rdi
  int v10; // eax
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v12[1] = -2LL;
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>(v12);
  v14 = 0LL;
  v6 = *(_QWORD *)v12[0];
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(v6 + 72))(v12[0], a2, a3, &v14);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180072588LL);
  }
  *a1 = 0LL;
  v8 = v12[0];
  v9 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v12[0] + 112LL);
  WindowsDeleteString(0LL);
  *a1 = 0LL;
  v10 = v9(v8, v14, a1);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x136,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return a1;
}
