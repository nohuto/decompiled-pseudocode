/*
 * XREFs of ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x1800B9190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x180018620 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ??$As@UIDWMSupportedInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDWMSupportedInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002651C (--$As@UIDWMSupportedInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033780 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::ResendGamepadIsSupportedForProcess(MPCInputRouter *this, int a2)
{
  char *v2; // rsi
  struct IInputTarget *InputHostTargetForProcessId; // rbx
  struct IInputTarget *v4; // rdi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInputTarget *v8; // [rsp+30h] [rbp+8h] BYREF
  struct IInputTarget *v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char *)this - 768;
  InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(
                                  (MPCInputRouter *)((char *)this - 768),
                                  a2);
  v9 = InputHostTargetForProcessId;
  Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef((__int64 *)&v9);
  v4 = 0LL;
  v8 = 0LL;
  if ( InputHostTargetForProcessId )
  {
    v5 = Microsoft::WRL::ComPtr<IInputTarget>::As<IDWMSupportedInputTarget>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v9,
           (__int64 *)&v8);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2211LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v4 = v8;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  v9 = v4;
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v4 + 8LL))(v4);
    (*(void (__fastcall **)(char *, struct IInputTarget *))(*(_QWORD *)v2 + 104LL))(v2, v4);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v9);
  return 0LL;
}
