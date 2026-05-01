/*
 * XREFs of ??1?$pair@V?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@2@@std@@QEAA@XZ @ 0x18026A614
 * Callers:
 *     _TabViewManager::OnThumbnailRequested_::_1_::dtor$5 @ 0x180274BFB (_TabViewManager--OnThumbnailRequested_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<wil::com_ptr_t<Windows::UI::Composition::IVisual,wil::err_exception_policy>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~pair<wil::com_ptr_t<Windows::UI::Composition::IVisual,wil::err_exception_policy>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
        __int64 *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[1];
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
