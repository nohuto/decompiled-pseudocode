/*
 * XREFs of ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180138480
 * Callers:
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x180137588 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180030EF0 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800604D0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::UpdateEndpointUnderLock(
        AtmosCheck *this,
        unsigned __int16 *a2,
        int a3,
        const struct AtmosCheck::EndpointSpecificSpatialTechInfo *a4)
{
  __int64 v5; // rbp
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rax
  __int64 v10; // r9
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+20h] [rbp-58h] BYREF
  void *v13[3]; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-38h]

  v5 = a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v12 = v8;
  std::wstring::wstring((__int64)v13, a2);
  std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
    (_QWORD *)this + 58,
    &v12,
    (char *)v13);
  if ( v14 >= 8 )
    std::_Deallocate<16,0>(v13[0], (const struct std::nothrow_t *)(2 * v14 + 2));
  v9 = v12;
  if ( v12 != *((struct _RTL_CRITICAL_SECTION **)this + 59) )
  {
    v10 = 3 * v5;
    *(_BYTE *)(*(_QWORD *)&v12[1].LockCount + 8 * v10) = *((_BYTE *)a4 + 24 * v5);
    *(_BYTE *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 1) = *((_BYTE *)a4 + 24 * v5 + 1);
    *(_BYTE *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 2) = *((_BYTE *)a4 + 24 * v5 + 2);
    *(_DWORD *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 4) = *((_DWORD *)a4 + 6 * v5 + 1);
    *(_DWORD *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 8) = *((_DWORD *)a4 + 6 * v5 + 2);
    *(_QWORD *)(*(_QWORD *)&v9[1].LockCount + 8 * v10 + 16) = *((_QWORD *)a4 + 3 * v5 + 2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
