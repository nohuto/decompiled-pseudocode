/*
 * XREFs of ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellGesturesProcessor::OnInput(
        ShellGesturesProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rsi
  char *v5; // rbx
  __int64 (__fastcall *v6)(_QWORD, GUID *, char *); // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))a4;
  if ( *(_QWORD *)a4 )
  {
    *((_DWORD *)a4 + 2) = 2;
    v5 = (char *)a4 + 80;
    v6 = **v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 10);
    v7 = v6(v4, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, v5);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        86LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor\\s"
                 "hellgesturesprocessor.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
  }
  else
  {
    *((_DWORD *)a4 + 2) = 3;
  }
  return 0LL;
}
