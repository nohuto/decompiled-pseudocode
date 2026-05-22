/*
 * XREFs of ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x180092B60
 * Callers:
 *     ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x180092D60 (--_ESpatialRimDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18003215C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B288 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045A74 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x18008AC3C (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialRimDeviceCollection::~SpatialRimDeviceCollection(SpatialRimDeviceCollection *this, void *a2)
{
  _QWORD **v3; // rdx
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // rcx

  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 365,
    a2);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 2880);
  v3 = (_QWORD **)*((_QWORD *)this + 358);
  *v3[1] = 0LL;
  v4 = *v3;
  if ( *v3 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      v6 = (std::_Ref_count_base *)v4[4];
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x28);
      v4 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*((void **)this + 358), (const struct std::nothrow_t *)0x28);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 354);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2792));
  v7 = *((_QWORD *)this + 347);
  if ( v7 )
  {
    *((_QWORD *)this + 347) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 346);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
