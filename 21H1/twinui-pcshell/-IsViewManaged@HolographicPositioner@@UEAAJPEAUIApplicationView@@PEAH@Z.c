/*
 * XREFs of ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180084060
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18002D150 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z @ 0x1800731B0 (-IsWindowManaged@HolographicPositioner@@UEAAJPEAUHWND__@@PEAH@Z.c)
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x18021F910 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180084094 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall HolographicPositioner::IsViewManaged(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        int *a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0;
  if ( a2 )
  {
    *a3 = HolographicViewHelpers::IsApplicationViewHolographic(a2, a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x466,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
