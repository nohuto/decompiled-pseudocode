/*
 * XREFs of ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x180136A48
 * Callers:
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180037148 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180030EF0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800605D0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AtmosCheck::IsLogLicenseResult(AtmosCheck *this, struct SpatialLicenseResult *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _DWORD *v5; // rcx
  char v6; // bl
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+20h] [rbp-38h] BYREF
  void *v9[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v8 = v4;
  if ( *((_BYTE *)this + 209) )
    goto LABEL_12;
  std::wstring::wstring((__int64)v9, L"LegacyDefaultEndpointKey");
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
    (_QWORD *)this + 58,
    &v8,
    (char *)v9);
  if ( v10 >= 8 )
    std::_Deallocate<16,0>(v9[0], (const struct std::nothrow_t *)(2 * v10 + 2));
  if ( v8 == *((struct _RTL_CRITICAL_SECTION **)this + 59)
    || (v5 = *(_DWORD **)&v8[1].LockCount, *(_DWORD *)a2 == v5[1])
    && *((_DWORD *)a2 + 1) == v5[7]
    && *((_DWORD *)a2 + 2) == v5[13]
    && *((_DWORD *)a2 + 3) == v5[19]
    && *((_DWORD *)a2 + 4) == v5[25]
    && *((_DWORD *)a2 + 5) == v5[31] )
  {
LABEL_12:
    v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
