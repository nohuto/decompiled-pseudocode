/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_ddff42c9e86eec33477d2fc149b371cd___::Release @ 0x1800CB5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WINRT_CloseHandle @ 0x18008E1BA (WINRT_CloseHandle.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType___lambda_ddff42c9e86eec33477d2fc149b371cd___::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  void *v3; // rcx

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    v3 = (void *)*((_QWORD *)a1 + 1);
    if ( v3 )
    {
      WINRT_CloseHandle(v3);
      *((_QWORD *)a1 + 1) = 0LL;
    }
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
