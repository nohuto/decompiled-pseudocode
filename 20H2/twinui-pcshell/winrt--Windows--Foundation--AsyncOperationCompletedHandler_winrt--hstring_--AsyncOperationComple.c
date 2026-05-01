/*
 * XREFs of winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___ @ 0x180097DDC
 * Callers:
 *     ??$wait_for_completed@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@I@Z @ 0x18003E20C (--$wait_for_completed@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     _lambda_ddff42c9e86eec33477d2fc149b371cd_::__lambda_ddff42c9e86eec33477d2fc149b371cd_ @ 0x1800C9114 (_lambda_ddff42c9e86eec33477d2fc149b371cd_--__lambda_ddff42c9e86eec33477d2fc149b371cd_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring_::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_180491590;
  *a1 = v6;
  lambda_ddff42c9e86eec33477d2fc149b371cd_::__lambda_ddff42c9e86eec33477d2fc149b371cd_(a2);
  return a1;
}
