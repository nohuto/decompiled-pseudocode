/*
 * XREFs of _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream_______::_2_::CompletionDelegate::_scalar_deleting_destructor_ @ 0x180010150
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18000336C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Storage::Streams::IRandomAccessStream_______::_2_::CompletionDelegate::_scalar_deleting_destructor_(
        _QWORD *a1,
        void *a2)
{
  char v2; // di
  wil::details *v4; // rcx
  __int64 v5; // rcx

  v2 = (char)a2;
  v4 = (wil::details *)a1[7];
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  *((_DWORD *)a1 + 11) = -1073741823;
  v5 = a1[4];
  if ( v5 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
