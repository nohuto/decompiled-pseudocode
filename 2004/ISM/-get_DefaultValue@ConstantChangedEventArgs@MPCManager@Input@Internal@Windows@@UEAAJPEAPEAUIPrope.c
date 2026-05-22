/*
 * XREFs of ?get_DefaultValue@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAJPEAPEAUIPropertyValue@Foundation@5@@Z @ 0x180119C20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Input::MPCManager::ConstantChangedEventArgs::get_DefaultValue(
        Windows::Internal::Input::MPCManager::ConstantChangedEventArgs *this,
        struct Windows::Foundation::IPropertyValue **a2)
{
  struct Windows::Foundation::IPropertyValue *v2; // rcx

  v2 = (struct Windows::Foundation::IPropertyValue *)*((_QWORD *)this + 11);
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
