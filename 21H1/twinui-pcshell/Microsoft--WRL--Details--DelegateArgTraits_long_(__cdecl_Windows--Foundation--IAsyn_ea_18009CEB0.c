/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_3dcd48245164aa834a1499666ccdc6ed___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x18009CEB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3dcd48245164aa834a1499666ccdc6ed_::operator() @ 0x18009CA70 (_lambda_3dcd48245164aa834a1499666ccdc6ed_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801258C4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncActionCompletedHandler::___Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_3dcd48245164aa834a1499666ccdc6ed___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_3dcd48245164aa834a1499666ccdc6ed_::operator()((_QWORD *)(a1 + 64), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v3);
  return v4;
}
