/*
 * XREFs of ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x180021544
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180020904 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021AD4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180024874 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@1@@Z @ 0x1800249A8 (--0-$_Hash@V-$_Umap_traits@KV-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$_Uhash_compare@KU-$hash@K@.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800699CC (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=7
SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::SpatialRimDeviceCollection(
        SpatialRimDeviceCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3,
        struct IMessageSession *a4)
{
  void *v7; // rdx
  HANDLE Event; // rsi
  unsigned int v9; // r8d
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v13; // [rsp+58h] [rbp+20h] BYREF

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &SpatialRimDeviceCollection::`vftable'{for `HIDDeviceCollection'};
  *((_QWORD *)this + 345) = &SpatialRimDeviceCollection::`vftable'{for `Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks'};
  *((_QWORD *)this + 346) = a4;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 346);
  *((_QWORD *)this + 347) = 0LL;
  *((_DWORD *)this + 696) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2792), 0, 0);
  *((_QWORD *)this + 354) = 0LL;
  *((_DWORD *)this + 710) = 0;
  *((_DWORD *)this + 711) = 0;
  *((_BYTE *)this + 2848) = 0;
  HIDWORD(v13) = ((unsigned __int64)this + 2856) >> 32;
  LODWORD(v13) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>(
    (char *)this + 2856,
    &v13);
  v13 = (char *)this + 2920;
  *((_QWORD *)this + 365) = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v7, v9, v10);
    JUMPOUT(0x180021659LL);
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (char *)this + 2920,
    Event);
  *((_QWORD *)this + 3) = a3;
  return this;
}
