/*
 * XREFs of ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x18019B764
 * Callers:
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1800234CC (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x18019B680 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C2BC (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)___lambda_9b9f0c840769002edef58b55115a0dea__void_ @ 0x18019B044 (std--function_void___cdecl(Microsoft--WRL--ComPtr_DataProviderPrincipal__-)_--funct_ea_18019B044.c)
 *     ?DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z @ 0x18019C7B4 (-DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursorBroker::CreateMotionTransformAndVerifySend(
        DWMCursorBroker *this,
        struct DWMCursor *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  struct IAnimationDataProvider *AnimationDataProvider; // rax
  struct IAnimationDataProvider *v9; // rbx
  struct IAnimationDataProvider *v10; // rcx
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, _QWORD *); // rbx
  _QWORD *v13; // rax
  int v15; // eax
  int v16; // edi
  __int64 v17; // rbx
  DWMCursorBroker *v18; // [rsp+38h] [rbp-21h] BYREF
  struct DWMCursor *v19; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-11h]
  _BYTE v21[4]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v22; // [rsp+54h] [rbp-5h]
  int v23; // [rsp+60h] [rbp+7h]
  int v24; // [rsp+64h] [rbp+Bh]
  void *v25; // [rsp+68h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  void *v27; // [rsp+C0h] [rbp+67h] BYREF
  struct DWMCursor *v28; // [rsp+D8h] [rbp+7Fh] BYREF

  v6 = a3;
  v7 = 3LL * a3;
  if ( *((_BYTE *)this + 24 * a3 + 224) )
  {
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v9 = AnimationDataProvider;
    v10 = (struct IAnimationDataProvider *)*((_QWORD *)this + 63);
    if ( v10 != AnimationDataProvider )
    {
      if ( AnimationDataProvider )
      {
        (*(void (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 8LL))(AnimationDataProvider);
        v10 = (struct IAnimationDataProvider *)*((_QWORD *)this + 63);
      }
      *((_QWORD *)this + 63) = v9;
      if ( v10 )
        (*(void (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v27 = this;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v27);
    v28 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v28);
    v11 = *((_QWORD *)this + 63);
    v12 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 56LL);
    v18 = this;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v18);
    v19 = a2;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v19);
    v20 = a3;
    v13 = std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_____::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_______lambda_9b9f0c840769002edef58b55115a0dea__void_(
            v21,
            (__int64 *)&v18);
    v12(v11, v13);
    if ( a2 )
      (*(void (__fastcall **)(struct DWMCursor *))(*(_QWORD *)a2 + 16LL))(a2);
    (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
  else
  {
    memset_0(v21, 0, 0x40uLL);
    v22 = *(_QWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, struct DWMCursor **))(*(_QWORD *)a2 + 40LL))(
                       a2,
                       &v28);
    v23 = (*(__int64 (__fastcall **)(struct DWMCursor *))(*(_QWORD *)a2 + 48LL))(a2);
    v24 = (*(__int64 (__fastcall **)(struct DWMCursor *))(*(_QWORD *)a2 + 56LL))(a2);
    v27 = 0LL;
    v15 = DWMCursor::DuplicateHandleForProcess(a2, *((_DWORD *)this + 2 * v7 + 52), &v27);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v25 = v27;
      v17 = 3 * v6;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *, int))(**((_QWORD **)this + 22) + 168LL))(
              *((_QWORD *)this + 22),
              *((_QWORD *)this + v17 + 27),
              4LL,
              v21,
              64);
      if ( v16 < 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 160LL))(
          *((_QWORD *)this + 22),
          *((_QWORD *)this + v17 + 27));
        *((_QWORD *)this + v17 + 27) = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v15);
    }
    return (unsigned int)v16;
  }
}
