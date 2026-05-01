/*
 * XREFs of ??$wait_get@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@1@AEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@51@@Z @ 0x1800D34E4
 * Callers:
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamWithContentType@Streams@Storage@34@@impl@winrt@@QEBA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x1800DB8BC (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStreamWithCon.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180095E84 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C7678 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800D3320 (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAsyncInfo@123@XZ @ 0x1801E78F4 (--$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AUIAsyn.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180209104 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt *__fastcall winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(
        winrt *this,
        __int64 *a2)
{
  unsigned int v4; // eax
  struct IUnknown *v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void **); // rbx
  void **v8; // rax
  unsigned int v9; // eax
  int v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::IAsyncInfo>(a2, &v12);
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 56LL))(v12, &v11);
  winrt::check_hresult(v4);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v12);
  if ( !v11 )
    winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(a2);
  *(_QWORD *)this = 0LL;
  v6 = *a2;
  v7 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 64LL);
  v8 = winrt::put_abi(this, v5);
  v9 = v7(v6, v8);
  winrt::check_hresult(v9);
  return this;
}
