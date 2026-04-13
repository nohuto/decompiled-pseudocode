/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180099B6C
 * Callers:
 *     _CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService_::_1_::dtor$7 @ 0x1800D60DA (_CreativeFramework--Actions--SetLockScreenHotspotsService--SetLockScreenHotspotsSer_ea_1800D60DA.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>(
        void ***a1)
{
  void **v1; // rbp
  void **v2; // rdi
  void *v3; // rsi
  DWORD LastError; // ebx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    v2 = *a1;
    v3 = **a1;
    if ( v3 )
    {
      LastError = GetLastError();
      LocalFree(v3);
      SetLastError(LastError);
    }
    *v2 = v1;
  }
}
