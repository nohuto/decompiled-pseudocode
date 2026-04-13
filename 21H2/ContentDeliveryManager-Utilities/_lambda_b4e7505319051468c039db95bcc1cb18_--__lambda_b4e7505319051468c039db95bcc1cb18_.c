/*
 * XREFs of _lambda_b4e7505319051468c039db95bcc1cb18_::__lambda_b4e7505319051468c039db95bcc1cb18_ @ 0x18002F960
 * Callers:
 *     ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002F580 (-ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_b4e7505319051468c039db95bcc1cb18__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18003EBD0 (Windows--Internal--COperationLambdaVar_0__lambda_b4e7505319051468c039db95bcc1cb18___ea_18003EBD0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$7 @ 0x1800D1FB0 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$7.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_b4e7505319051468c039db95bcc1cb18__Windows::Internal::CNoResult_::COperationLambdaVar_0__lambda_b4e7505319051468c039db95bcc1cb18__Windows::Internal::CNoResult___lambda_b4e7505319051468c039db95bcc1cb18____::_1_::dtor$1 @ 0x1800D2B70 (_Windows--Internal--COperationLambdaVar_0__lambda_b4e7505319051468c039db95bcc1cb18__Windows--Int.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026FB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_b4e7505319051468c039db95bcc1cb18_::__lambda_b4e7505319051468c039db95bcc1cb18_(_QWORD *a1)
{
  __int64 v2; // rcx
  HRESULT result; // eax
  __int64 v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  HSTRING v8; // rcx
  volatile signed __int64 *v9; // rcx

  v2 = a1[12];
  if ( v2 )
  {
    a1[12] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = a1[11];
  if ( v4 )
  {
    a1[11] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (HSTRING)a1[9];
  if ( v5 )
    result = WindowsDeleteString(v5);
  v6 = (HSTRING)a1[7];
  if ( v6 )
    result = WindowsDeleteString(v6);
  v7 = (HSTRING)a1[5];
  if ( v7 )
    result = WindowsDeleteString(v7);
  v8 = (HSTRING)a1[3];
  if ( v8 )
    result = WindowsDeleteString(v8);
  v9 = (volatile signed __int64 *)a1[1];
  if ( v9 )
  {
    a1[1] = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v9);
  }
  return result;
}
