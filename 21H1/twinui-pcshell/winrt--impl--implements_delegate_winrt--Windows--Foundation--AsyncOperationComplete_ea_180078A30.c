/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___::Release @ 0x180078A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WINRT_CloseHandle @ 0x18008D8BA (WINRT_CloseHandle.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::hstring___lambda_5a4cba7ff8acc8443f19110888439e90___::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  void *v4; // rcx

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    v4 = (void *)*((_QWORD *)a1 + 1);
    if ( v4 )
    {
      WINRT_CloseHandle(v4);
      *((_QWORD *)a1 + 1) = 0LL;
    }
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
