/*
 * XREFs of ??$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAsyncInfo@123@XZ @ 0x1801F16B8
 * Callers:
 *     ??$wait_get@U?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUWindowTabDataModel@Shell@UI@Internal@Windows@1@AEBU?$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@61@@Z @ 0x1800C845C (--$wait_get@U-$IAsyncOperation@UWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@Foundation@.c)
 *     ??$wait_get@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIRandomAccessStreamReference@Streams@Storage@Windows@1@AEBU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@51@@Z @ 0x1800D4C4C (--$wait_get@U-$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Fou.c)
 *     ??$wait_get@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@1@AEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@51@@Z @ 0x1800D4D24 (--$wait_get@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::IAsyncInfo>(
        void (__fastcall ****a1)(_QWORD, const wchar_t *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, const wchar_t *, __int64 *); // rcx
  void (__fastcall **v4)(_QWORD, const wchar_t *, __int64 *); // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v4 = *v2;
    v6 = 0LL;
    (*v4)(v2, L"6", &v6);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
