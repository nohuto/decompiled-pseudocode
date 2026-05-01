/*
 * XREFs of ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180222A34
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke @ 0x18021ECC0 (CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___--Invoke.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _LogEventWithApplicationViewData__ @ 0x18021AE84 (_LogEventWithApplicationViewData__.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180220D1C (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180221BEC (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180222CC0 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall HolographicPositioner::_OnShellStateChanged(__int64 a1, int a2)
{
  struct IApplicationView **v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 448) == a2 )
    return 0LL;
  *(_DWORD *)(a1 + 448) = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( (unsigned int)(a2 - 3) <= 1 )
        *(_BYTE *)(a1 + 296) = 0;
      return 0LL;
    }
    v3 = (struct IApplicationView **)(a1 + 424);
    v4 = *(_QWORD *)(a1 + 424);
    if ( v4 )
    {
      LogEventWithApplicationViewData__(
        v4,
        (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::TerminatePendingAppViewForOOBE<unsigned short const *>);
      v5 = HolographicPositioner::_CloseView((HolographicPositioner *)a1, *v3);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x850,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
      goto LABEL_14;
    }
  }
  else
  {
    v3 = (struct IApplicationView **)(a1 + 424);
    v8 = *(_QWORD *)(a1 + 424);
    if ( v8 )
    {
      LogEventWithApplicationViewData__(
        v8,
        (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::ReplayPendingAppView<unsigned short const *>);
      v9 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)a1, *v3, 0LL);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x83C,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
      v10 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)a1, *v3);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x83F,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v10);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v3);
    }
  }
  return 0LL;
}
