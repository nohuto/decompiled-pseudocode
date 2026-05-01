/*
 * XREFs of ?HideView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803E15AC
 * Callers:
 *     ?ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803E0180 (-ControlLost@VoiceAssistantPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1801A42A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A6BA8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z @ 0x1803E1A6C (-IsEnabled@VoiceAssistantPositionerTelemetry@@SA_NE_K@Z.c)
 *     ?VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z @ 0x1803E8060 (-VAPositioner_HideView_@VoiceAssistantPositionerTelemetry@@QEBAXPEAUIApplicationView@@@Z.c)
 *     ?get@?$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPositionerTelemetry@@P6AXXZ@Z @ 0x1803E854C (-get@-$static_lazy@VVoiceAssistantPositionerTelemetry@@@details@wil@@QEAAPEAVVoiceAssistantPosit.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::HideView(VoiceAssistantPositioner *this, struct IApplicationView *a2)
{
  __int64 v3; // rcx
  VoiceAssistantPositionerTelemetry *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  VoiceAssistantPositioner *v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v13 = this;
  if ( VoiceAssistantPositionerTelemetry::IsEnabled((unsigned __int8)this, (unsigned __int64)a2) )
  {
    wil::details::static_lazy<VoiceAssistantPositionerTelemetry>::get(
      v3,
      _lambda_b2cc13a1030bf75285c22b578959c011_::_lambda_invoker_cdecl_);
    VoiceAssistantPositionerTelemetry::VAPositioner_HideView_(v4, a2);
  }
  v5 = Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v13);
  v14 = *v5;
  v6 = v14;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v13);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 96LL))(v6, 0LL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v6);
      v7 = v10;
      if ( v10 >= 0 )
      {
        v7 = 0;
        goto LABEL_12;
      }
      v9 = 664LL;
    }
    else
    {
      v9 = 663LL;
    }
    v8 = (unsigned int)v10;
  }
  else
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 662LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v8);
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v7;
}
