/*
 * XREFs of ?IsBackgroundActivation@KioskPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1803DC4C4
 * Callers:
 *     ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803DB130 (-ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@.c)
 *     ?InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803DC350 (-InitializePosition@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationR.c)
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002B0D0 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

bool __fastcall KioskPositioner::IsBackgroundActivation(
        KioskPositioner *this,
        struct IUnknownVtbl *a2,
        struct IUnknown *a3)
{
  int DetailsForActivation; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v6; // [rsp+38h] [rbp+10h] BYREF

  v6.lpVtbl = a2;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           this,
                           (struct IApplicationView *)a3,
                           &v6,
                           0LL);
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1170LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    __debugbreak();
  }
  return ((__int64)v6.lpVtbl & 0x11) != 0;
}
