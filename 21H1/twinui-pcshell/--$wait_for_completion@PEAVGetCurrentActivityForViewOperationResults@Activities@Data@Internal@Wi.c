/*
 * XREFs of ??$wait_for_completion@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@V?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18020B9A8
 * Callers:
 *     _lambda_98ae2f8acbcd0270b071efd378e5a46f_::operator() @ 0x18020CED8 (_lambda_98ae2f8acbcd0270b071efd378e5a46f_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18020B874 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activit.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::wait_for_completion<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Microsoft::WRL::ComPtr<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>>(
        _QWORD *a1,
        void (__fastcall ***a2)(__int64, GUID *, __int64 *),
        int a3)
{
  int CurrentActivityForViewOperation; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  CurrentActivityForViewOperation = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>(
                                      a2,
                                      (DWORD)a2,
                                      a3);
  if ( CurrentActivityForViewOperation < 0
    || (CurrentActivityForViewOperation = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), _QWORD *))(*a2)[8])(
                                            a2,
                                            a1),
        CurrentActivityForViewOperation < 0) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1594LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)CurrentActivityForViewOperation);
    __debugbreak();
  }
  return a1;
}
