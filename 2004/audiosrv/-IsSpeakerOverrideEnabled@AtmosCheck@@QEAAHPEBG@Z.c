/*
 * XREFs of ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x180136B64
 * Callers:
 *     ?GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z @ 0x1800D8050 (-GetSpatialSpeakerProtectionOverrideValue@CPolicyConfig@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180030EF0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800605D0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180134524 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_180134524.c)
 */

__int64 __fastcall AtmosCheck::IsSpeakerOverrideEnabled(AtmosCheck *this, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // rsi
  unsigned int v5; // ebx
  _QWORD *v6; // r14
  _BYTE *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 *v12; // [rsp+38h] [rbp-38h] BYREF
  void *v13[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-18h]

  v2 = a2;
  if ( !a2 )
    return 0LL;
  v5 = 0;
  v6 = (_QWORD *)((char *)this + 464);
  if ( !*((_BYTE *)this + 209) )
    a2 = L"LegacyDefaultEndpointKey";
  std::wstring::wstring((__int64)v13, a2);
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
    v6,
    &v11,
    (char *)v13);
  if ( v14 >= 8 )
    std::_Deallocate<16,0>(v13[0], (const struct std::nothrow_t *)(2 * v14 + 2));
  if ( v11 != *((_QWORD *)this + 59) )
  {
    v7 = *(_BYTE **)(v11 + 48);
    if ( v7 )
    {
      v7 += 2;
      v10 = 6LL;
      do
      {
        if ( v5 || *v7 )
          v5 = 1;
        v7 += 24;
        --v10;
      }
      while ( v10 );
    }
  }
  if ( (unsigned int)dword_18019D520 > 5 )
  {
    LODWORD(v11) = v5;
    v12 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_18016DC32,
      v8,
      v9,
      (void **)&v12,
      (__int64)&v11);
  }
  return v5;
}
