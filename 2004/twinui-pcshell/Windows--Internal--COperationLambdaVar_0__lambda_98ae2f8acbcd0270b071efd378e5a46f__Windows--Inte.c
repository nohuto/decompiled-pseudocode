/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f___ @ 0x18022D3AC
 * Callers:
 *     ?GetCurrentActivityForAllViewsAsync@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x180232400 (-GetCurrentActivityForAllViewsAsync@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAU-$IAsyncOperation@.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18008E738 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax

  *(_QWORD *)a1 = &CCrashDetector::CHandler::`vftable';
  *(_QWORD *)(a1 + 8) = *a2;
  v3 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)a1 = &off_1804A8540;
  *(_DWORD *)(a1 + 24) = 0;
  `eh vector constructor iterator'(
    (char *)(a1 + 32),
    8LL,
    1LL,
    (void (*)(void *))wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>);
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
