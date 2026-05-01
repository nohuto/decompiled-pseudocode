/*
 * XREFs of ?QueryInterface@?$weak_ref@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180464F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1>::QueryInterface(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = *a2 - winrt::impl::guid_storage<winrt::impl::IWeakReference>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::impl::IWeakReference>::value )
    v3 = a2[1] - 0x46000000000000C0LL;
  if ( !v3 )
    goto LABEL_15;
  v4 = *a2 - winrt::impl::guid_storage<IUnknown>::value;
  if ( *a2 == winrt::impl::guid_storage<IUnknown>::value )
    v4 = a2[1] - 0x46000000000000C0LL;
  if ( !v4 )
    goto LABEL_15;
  v5 = *a2 - winrt::impl::guid_storage<winrt::impl::IAgileObject>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value )
    v5 = a2[1] + 0x6FA470359B110040LL;
  if ( v5 )
  {
    v6 = *a2 - winrt::impl::guid_storage<winrt::impl::IMarshal>::value;
    if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value )
      v6 = a2[1] - 0x46000000000000C0LL;
    if ( v6 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
      return winrt::impl::make_marshaler(a1, a3);
    }
  }
  else
  {
LABEL_15:
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
}
