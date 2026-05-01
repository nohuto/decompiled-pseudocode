/*
 * XREFs of CreationThreadDispatcher::RunSync__lambda_dbbd38514acf3bcad80e3f1b578556fc___ @ 0x180389F88
 * Callers:
 *     _lambda_1837cd2421f43b992ba1f4107d6eca8c_::operator() @ 0x18038A160 (_lambda_1837cd2421f43b992ba1f4107d6eca8c_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180064F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801E64B0 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c_____lambda_b13574fa0cd53a959fb03a535710ce9c___ @ 0x180389D94 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunSync__lambda_dbbd38514acf3bcad80e3f1b578556fc___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 *CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c_____lambda_b13574fa0cd53a959fb03a535710ce9c; // rax
  volatile int *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  HGDIOBJ ho; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IInspectable *v17; // [rsp+60h] [rbp+20h] BYREF
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::WeakRef *)(a1 + 48), &v17);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ho = *(HGDIOBJ *)a2;
    *(_QWORD *)a2 = 0LL;
    v5 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    v15 = v5;
    CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c_____lambda_b13574fa0cd53a959fb03a535710ce9c = Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c_____lambda_b13574fa0cd53a959fb03a535710ce9c___(&v18, &ho);
    v8 = *CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c_____lambda_b13574fa0cd53a959fb03a535710ce9c;
    v19 = *CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c_____lambda_b13574fa0cd53a959fb03a535710ce9c;
    *CAsyncCallbackWithLambda__lambda_b13574fa0cd53a959fb03a535710ce9c_____lambda_b13574fa0cd53a959fb03a535710ce9c = 0LL;
    v9 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        v9,
        v7);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    if ( ho )
      DeleteObject(ho);
    if ( v8 )
    {
      v12 = ((__int64 (__fastcall *)(struct IInspectable *, __int64))v17->lpVtbl->GetIids)(v17, v8);
      v4 = v12;
      if ( v12 >= 0 )
      {
LABEL_12:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_13;
      }
      v10 = (unsigned int)v12;
      v11 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v10 = 2147942414LL;
      v11 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)v10);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v4;
}
