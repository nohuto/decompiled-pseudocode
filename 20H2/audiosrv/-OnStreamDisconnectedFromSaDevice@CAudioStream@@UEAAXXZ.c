/*
 * XREFs of ?OnStreamDisconnectedFromSaDevice@CAudioStream@@UEAAXXZ @ 0x1800520D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CB034 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

void __fastcall CAudioStream::OnStreamDisconnectedFromSaDevice(CAudioStream *this)
{
  (*(void (__fastcall **)(struct ISpatialAudioResourceManager *, _QWORD))(*(_QWORD *)g_SpatialAudioResourceManager + 32LL))(
    g_SpatialAudioResourceManager,
    ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
  if ( *((_DWORD *)this + 33) == 2 )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 176);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 184);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 192);
  }
}
