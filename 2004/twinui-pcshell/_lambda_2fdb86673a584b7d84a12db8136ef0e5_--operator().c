/*
 * XREFs of _lambda_2fdb86673a584b7d84a12db8136ef0e5_::operator() @ 0x18032B8B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2fdb86673a584b7d84a12db8136ef0e5___::Run @ 0x18032E360 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2fdb86673a584b7d84a12db8136ef0e5___--Run.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1800132F0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2fdb86673a584b7d84a12db8136ef0e5_::operator()(__int64 (**this)(void))
{
  HWND WindowW; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW || GetPropW(WindowW, L"IsExplorerShuttingDown") )
    return this[1]();
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  v3 = CMarshaledInterface::_Unmarshal(
         (CMarshaledInterface *)this,
         &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee,
         (struct IInspectable **)&v6,
         0);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
}
