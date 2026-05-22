/*
 * XREFs of ?GenerateMouseLeaveEventMessage@Win32kInterop@@AEBAXAEBV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800B07A4
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N2@Z @ 0x1800B14BC (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInputDestInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputDestInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800ACBC0 (--$As@UIInputDestInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::GenerateMouseLeaveEventMessage(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  BOOL v6; // edi
  unsigned int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IInputTarget>::As<IInputDestInputTarget>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 264),
         &v10);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1042LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = Microsoft::WRL::ComPtr<IInputTarget>::As<IInputDestInputTarget>(a2, &v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1043LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) != v5;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  NtMITPostThreadEventMessage(v7, 0LL, 675LL, v6, 0);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v11);
  return Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v10);
}
