/*
 * XREFs of ?_MinimizeView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803CF450
 * Callers:
 *     ?SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803CD120 (-SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DES.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1801803A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180182CB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_MinimizeView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CDesktopPositioner *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v9);
  if ( v9 )
  {
    *((_DWORD *)v9 + 20) = 1;
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = (unsigned int)v6;
    v5 = 2984LL;
  }
  else
  {
    v3 = -2147024882;
    v4 = 2147942414LL;
    v5 = 2982LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v9);
  return v3;
}
