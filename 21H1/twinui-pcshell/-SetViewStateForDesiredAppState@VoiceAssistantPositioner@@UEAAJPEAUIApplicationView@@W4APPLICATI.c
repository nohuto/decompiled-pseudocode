/*
 * XREFs of ?SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803C1B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1801803A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180182CB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18044DDF0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VoiceAssistantPositioner::SetViewStateForDesiredAppState(__int64 a1, __int64 a2, unsigned int a3)
{
  void (__fastcall *v5)(__int64, GUID *, IUnknown **); // rbx
  unsigned int Service; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  void *ppvOut[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  IUnknown *punk; // [rsp+78h] [rbp+38h] BYREF

  if ( a3 != 2 )
  {
    if ( a3 > 1 )
    {
      Service = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x260,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)0x8000FFFFLL);
      return Service;
    }
    v10 = (a3 != 0) + 1;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&punk);
    if ( punk )
    {
      LODWORD(punk[10].lpVtbl) = v10;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 320LL))(a2);
      Service = v13;
      if ( v13 >= 0 )
      {
        Service = 0;
        goto LABEL_17;
      }
      v11 = (unsigned int)v13;
      v12 = 604LL;
    }
    else
    {
      Service = -2147024882;
      v11 = 2147942414LL;
      v12 = 602LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)v11);
LABEL_17:
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&punk);
    return Service;
  }
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  punk = 0LL;
  v5 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 - 112) + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v5(a1 - 112, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  Service = IUnknown_QueryService(punk, &stru_18051A3C0, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  if ( (Service & 0x80000000) == 0 )
  {
    v9 = ApplicationViewHelpers::CloseView(a2, ppvOut[0], 8LL);
    Service = v9;
    if ( v9 >= 0 )
    {
      Service = 0;
      goto LABEL_8;
    }
    v7 = (unsigned int)v9;
    v8 = 594LL;
  }
  else
  {
    v7 = Service;
    v8 = 592LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v7);
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return Service;
}
