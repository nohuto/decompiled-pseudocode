/*
 * XREFs of ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x18017B6C0
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017A704 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F088 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x18017B578 (-Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 *     ?DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUContextualProcessorResponse@@PEAI@Z @ 0x18017B600 (-DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUCont.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyImpl::EnsureInputTargeting(EdgyImpl *this, struct ContextualProcessorResponse *a2)
{
  const char *v4; // r9
  int v5; // r14d
  int v6; // eax
  unsigned int v7; // ebx
  struct IInputTarget *v8; // rbx
  __int64 (__fastcall *v9)(struct IInputTarget *, GUID *, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v15; // [rsp+70h] [rbp+40h] BYREF
  struct IInputTarget *v16; // [rsp+78h] [rbp+48h] BYREF

  LODWORD(v16) = 0;
  *((_DWORD *)a2 + 2) = 0;
  v15 = 0;
  if ( !EdgyImpl::DetermineInputRouting(this, (enum Windows::UI::Internal::Input::EdgyInputRouting *)&v16, a2, &v15) )
    return 0;
  v5 = (int)v16;
  if ( !v15 )
  {
LABEL_14:
    *((_DWORD *)this + 4) = v5;
    return 0;
  }
  if ( (_DWORD)v16 != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      279LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      v4);
    __debugbreak();
  }
  if ( *((_DWORD *)a2 + 2) != 2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      280LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      v4);
    __debugbreak();
  }
  v16 = 0LL;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v6 = EdgyInputTarget::Create(&v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v16;
    v9 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v16;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    v10 = v9(v8, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v13);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        295LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13[0] + 80LL))(v13[0], v15);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        297LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)a2 + 10, (__int64 *)&v16);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x123,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
    (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return v7;
}
