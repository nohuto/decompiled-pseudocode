/*
 * XREFs of ??1?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x18004EC48
 * Callers:
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x18004B8F8 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004C504 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     ??_E?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x18004F750 (--_E-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@st.c)
 *     _CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String_::_1_::dtor$2 @ 0x1800D37BC (_CreativeFramework--CommonHelper--StringUtils--WStringToUtf8String_--_1_--dtor$2.c)
 *     _MobilityExperience::ActivityWrapper::GetUserActivityPayload_::_1_::dtor$8 @ 0x1800D3A88 (_MobilityExperience--ActivityWrapper--GetUserActivityPayload_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rax

  *(_QWORD *)a1 = &std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::`vftable';
  if ( *(_QWORD *)(a1 + 80) >= 8uLL )
    operator delete(*(void **)(a1 + 56));
  *(_QWORD *)(a1 + 80) = 7LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_WORD *)(a1 + 56) = 0;
  if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
    operator delete(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 48) = 15LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    if ( v3 )
      (**v3)(v3, 1LL);
  }
}
