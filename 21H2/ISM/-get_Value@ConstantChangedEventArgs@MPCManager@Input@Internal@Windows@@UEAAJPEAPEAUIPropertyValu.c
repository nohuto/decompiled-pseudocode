/*
 * XREFs of ?get_Value@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUIPropertyValue@Foundation@5@@Z @ 0x18011A2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::get_Value(
        Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *this,
        struct Windows::Foundation::IPropertyValue **a2)
{
  struct Windows::Foundation::IPropertyValue *v2; // rcx

  v2 = (struct Windows::Foundation::IPropertyValue *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct Windows::Foundation::IPropertyValue *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
