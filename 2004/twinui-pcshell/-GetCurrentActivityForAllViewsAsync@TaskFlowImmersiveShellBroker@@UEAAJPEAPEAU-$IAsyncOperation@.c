/*
 * XREFs of ?GetCurrentActivityForAllViewsAsync@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x180232400
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f___ @ 0x18022D3AC (Windows--Internal--COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows--Inte.c)
 *     ??$MakeAsyncHelper@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@23@UINilDelegate@Internal@3@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@63@VComTaskPoolHandler@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x18022E3BC (--$MakeAsyncHelper@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGetCurrentActivityForViewOperationRe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 CurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f; // rax
  __int64 v6; // r9
  int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  _DWORD v10[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h]

  try
  {
    *a2 = 0LL;
    v3 = a1 - 24;
    v4 = a1 & -(__int64)(a1 != 24);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(a1 & -(__int64)(a1 != 24));
    v11 = v3;
    v14 = 0LL;
    v12 = v4;
    v10[0] = 3;
    v10[1] = 128;
    v10[2] = 0;
    CurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f = (__int64)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = CurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f;
    if ( CurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f )
      CurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f = Windows::Internal::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f___(
                                                                                                 CurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f,
                                                                                                 &v11);
    v7 = Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Internal::INilDelegate,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           a2,
           (__int64)v10,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Internal.D"
                     "ata.Activities.GetCurrentActivityForViewOperationResults>>",
           v6,
           CurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
    if ( v7 >= 0 )
    {
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x180,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      result = (unsigned int)v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x183,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v8);
  }
  return result;
}
