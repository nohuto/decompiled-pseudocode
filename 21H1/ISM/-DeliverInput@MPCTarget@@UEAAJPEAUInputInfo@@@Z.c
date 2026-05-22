/*
 * XREFs of ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800BAAF0
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800BA490 (-DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180029830 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B33C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??$As@UIMPCInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMPCInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800BA6C4 (--$As@UIMPCInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     GetHandEventType @ 0x1800BAD88 (GetHandEventType.c)
 *     GetInputEventType @ 0x1800BADEC (GetInputEventType.c)
 *     IsSubscribedForEventType @ 0x1800BAE54 (IsSubscribedForEventType.c)
 *     IsSubscribedForEventType_0 @ 0x1800BAECC (IsSubscribedForEventType_0.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x1800BB044 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCTarget::DeliverInput(MPCTarget *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  void (__fastcall *v13)(unsigned __int64, int *, _QWORD, char *, _OWORD *); // rsi
  unsigned int HandEventType; // eax
  __int64 InputEventType; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  ISMTracing *v18; // rcx
  int v20; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+50h] [rbp-9h] BYREF
  _OWORD v23[3]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  if ( (*(_DWORD *)a2 & 0x662600) == 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      213LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      a4);
    __debugbreak();
  }
  if ( (*(_DWORD *)a2 & 0x42600) == 0
    || (*(unsigned __int8 (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 80LL))(this) && *((_BYTE *)a2 + 2026) )
  {
    return 0LL;
  }
  v6 = *((_QWORD *)this + 4);
  if ( !v6 )
    v6 = *((_QWORD *)this + 3);
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v22, v6);
  v9 = 0LL;
  v21 = 0LL;
  v10 = *(_QWORD *)(v22 + 400);
  v11 = *(_QWORD *)(v22 + 408);
  if ( v10 != v11 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IMPCInputObjectProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v10 + 8),
                  (__int64 *)&v21) >= 0 )
        break;
      v10 += 16LL;
    }
    while ( v10 != v11 );
    v9 = v21;
  }
  if ( v9 )
  {
    v20 = *((_DWORD *)a2 + 18);
    v23[0] = *((_OWORD *)a2 + 14);
    v23[1] = *((_OWORD *)a2 + 15);
    v23[2] = *((_OWORD *)a2 + 16);
    switch ( *(_DWORD *)a2 )
    {
      case 0x200:
        if ( (unsigned __int8)IsSubscribedForEventType_0(*((unsigned int *)a2 + 16)) )
        {
          v12 = v21;
          v13 = *(void (__fastcall **)(unsigned __int64, int *, _QWORD, char *, _OWORD *))(*(_QWORD *)v21 + 24LL);
          HandEventType = GetHandEventType(*((unsigned int *)a2 + 16));
          v13(v12, &v20, HandEventType, (char *)a2 + 704, v23);
        }
        break;
      case 0x40000:
        if ( (unsigned __int8)IsSubscribedForEventType(4LL, v9) )
          (*(void (__fastcall **)(unsigned __int64, int *, char *, char *, _OWORD *))(*(_QWORD *)v21 + 32LL))(
            v21,
            &v20,
            (char *)a2 + 704,
            (char *)a2 + 712,
            v23);
        break;
      case 0x400:
      case 0x2000:
        InputEventType = (unsigned int)GetInputEventType(*((unsigned int *)a2 + 17));
        if ( (unsigned __int8)IsSubscribedForEventType(InputEventType, v21) )
          (*(void (__fastcall **)(unsigned __int64, int *, _QWORD, char *, _QWORD, _OWORD *))(*(_QWORD *)v21 + 40LL))(
            v21,
            &v20,
            (unsigned int)InputEventType,
            (char *)a2 + 704,
            *((_QWORD *)a2 + 2),
            v23);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          292LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          v8);
        __debugbreak();
    }
    v16 = 0;
  }
  else
  {
    v16 = -2147417853;
  }
  if ( ISMTracing::IsEnabled(v7) )
  {
    wil::details::static_lazy<ISMTracing>::get(v17, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCTarget_DeliverInput_(v18, this, a2, v16);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v22);
  return v16;
}
