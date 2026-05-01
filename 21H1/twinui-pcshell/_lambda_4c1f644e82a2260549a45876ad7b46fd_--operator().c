/*
 * XREFs of _lambda_4c1f644e82a2260549a45876ad7b46fd_::operator() @ 0x18034E19C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c1f644e82a2260549a45876ad7b46fd___::Run @ 0x18034F750 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c1f644e82a2260549a45876ad7b46fd___--Run.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180012DC0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HWND __fastcall lambda_4c1f644e82a2260549a45876ad7b46fd_::operator()(CMarshaledInterface *this)
{
  HWND result; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v5; // [rsp+38h] [rbp+10h] BYREF

  result = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( result )
  {
    result = (HWND)GetPropW(result, L"IsExplorerShuttingDown");
    if ( !result )
    {
      v5 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
      v3 = CMarshaledInterface::_Unmarshal(
             this,
             &GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa,
             (struct IInspectable **)&v5,
             0);
      if ( v3 >= 0 )
        (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 0LL, 0LL);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x259,
          (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      return (HWND)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
    }
  }
  return result;
}
