/*
 * XREFs of ?UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ @ 0x180074734
 * Callers:
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180137FF0 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18000A258 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

void __fastcall AtmosCheck::UnregisterFromUserWatcherNotifications(AtmosCheck *this)
{
  __int64 v2; // rcx

  if ( AtmosCheck::IsRunningOnXbox(this) )
  {
    v2 = *((_QWORD *)this + 31);
    if ( v2 )
    {
      if ( *((_QWORD *)this + 32) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 31) + 80LL))(
          *((_QWORD *)this + 31),
          *((_QWORD *)this + 32));
        *((_QWORD *)this + 32) = 0LL;
      }
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 248);
  }
}
