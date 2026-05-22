/*
 * XREFs of ?OnInput@InputRedirectionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017F340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033780 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::OnInput(
        InputRedirectionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4;
  v7 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  v8 = v7(v6, &GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13, &v13);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      459LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectionprocessor.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) )
  {
    (*(void (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v13 + 24LL))(v13, a2);
    *((_DWORD *)a4 + 2) = 4;
  }
  else
  {
    *((_DWORD *)a4 + 2) = 2;
    v9 = v13;
    v11[0] = v13;
    Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(v11);
    v11[0] = *((_QWORD *)a4 + 10);
    *((_QWORD *)a4 + 10) = v9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  return 0LL;
}
