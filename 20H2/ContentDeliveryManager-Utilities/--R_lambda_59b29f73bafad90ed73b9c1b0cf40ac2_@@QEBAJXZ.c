/*
 * XREFs of ??R_lambda_59b29f73bafad90ed73b9c1b0cf40ac2_@@QEBAJXZ @ 0x18004DB2C
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_59b29f73bafad90ed73b9c1b0cf40ac2_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x1800506E0 (-Run@-$CTaskWrapper@V_lambda_59b29f73bafad90ed73b9c1b0cf40ac2_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005EF0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DE60 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004DE60.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_59b29f73bafad90ed73b9c1b0cf40ac2_::operator()(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // r14
  __int64 (__fastcall *v4)(__int64, __int64, __int64, _QWORD); // r15
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  DWORD v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h]

  v2 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::QueryInterface(
         *a1,
         &GUID_2ca00e16_9460_4359_8491_cb98b6b53c0a,
         &v13);
  try
  {
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1577,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v2);
    }
    else
    {
      v3 = a1[4];
      v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v3 + 24LL);
      v5 = a1[3];
      v14 = v5;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = v13;
      v7 = v4(v3, v5, v13, 0LL);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        v9 = WaitForSingleObjectEx(*(HANDLE *)(a1[1] + 80LL), 0xFFFFFFFF, 0);
        if ( v9 == 258 || !v9 )
        {
          if ( v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          return 0LL;
        }
LABEL_15:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xA09,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v10);
        JUMPOUT(0x18004DC68LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x11B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_15;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x11F,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                           v10);
  }
  return result;
}
