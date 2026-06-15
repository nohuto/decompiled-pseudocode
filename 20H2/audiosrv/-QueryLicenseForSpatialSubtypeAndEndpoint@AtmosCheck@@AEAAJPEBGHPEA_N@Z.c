/*
 * XREFs of ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18000AC40
 * Callers:
 *     ?GetDeepLink@CSpatialAudioDtsxHeadphones@@UEBAPEBGPEBG@Z @ 0x180047020 (-GetDeepLink@CSpatialAudioDtsxHeadphones@@UEBAPEBGPEBG@Z.c)
 *     ?GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGPEBG@Z @ 0x180047060 (-GetDeepLink@CSpatialAudioDolbyHeadphones@@UEBAPEBGPEBG@Z.c)
 *     ?GetTechnologyLicenseResult@CSpatialAudioDolbyStereo@@UEBAJPEBG@Z @ 0x1800470D0 (-GetTechnologyLicenseResult@CSpatialAudioDolbyStereo@@UEBAJPEBG@Z.c)
 *     ?GetTechnologyLicenseResult@CSpatialAudioDolbyHeadphones@@UEBAJPEBG@Z @ 0x180047110 (-GetTechnologyLicenseResult@CSpatialAudioDolbyHeadphones@@UEBAJPEBG@Z.c)
 *     ?GetTechnologyLicenseResult@CSpatialAudioDtsxStereo@@UEBAJPEBG@Z @ 0x1800471D0 (-GetTechnologyLicenseResult@CSpatialAudioDtsxStereo@@UEBAJPEBG@Z.c)
 *     ?GetTechnologyLicenseResult@CSpatialAudioDtsxHeadphones@@UEBAJPEBG@Z @ 0x180047200 (-GetTechnologyLicenseResult@CSpatialAudioDtsxHeadphones@@UEBAJPEBG@Z.c)
 *     wistd::__function::__func__lambda_187f8f67365585d79c898cd745a8eed3__long___cdecl(void)_::operator() @ 0x180073370 (wistd--__function--__func__lambda_187f8f67365585d79c898cd745a8eed3__long___cdecl(void)_--operato.c)
 *     wistd::__function::__func__lambda_ec7260462f53004eb0edc67dd5e05be0__long___cdecl(void)_::operator() @ 0x180073420 (wistd--__function--__func__lambda_ec7260462f53004eb0edc67dd5e05be0__long___cdecl(void)_--operato.c)
 *     wistd::__function::__func__lambda_7ad38737e46e24cc28377d4c0faef1bb__long___cdecl(void)_::operator() @ 0x180073440 (wistd--__function--__func__lambda_7ad38737e46e24cc28377d4c0faef1bb__long___cdecl(void)_--operato.c)
 *     ?GetTechnologyLicenseResult@CSpatialAudioDolbyAtmosMAT@@UEBAJPEBG@Z @ 0x180126A80 (-GetTechnologyLicenseResult@CSpatialAudioDolbyAtmosMAT@@UEBAJPEBG@Z.c)
 *     ?PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z @ 0x1801366E0 (-PerformLicenseCheckHelper@AtmosCheck@@AEAAXPEBGHPEAUEndpointSpecificSpatialTechInfo@1@PEA_N@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180030870 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180060190 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::QueryLicenseForSpatialSubtypeAndEndpoint(
        AtmosCheck *this,
        const unsigned __int16 *a2,
        int a3,
        bool *a4)
{
  __int64 v5; // r15
  char v8; // bp
  const WCHAR *v9; // r8
  unsigned int v10; // r9d
  HANDLE ProcessHeap; // rax
  _OWORD *v12; // rbx
  int pdwType; // [rsp+20h] [rbp-C8h]
  int pdwTypea; // [rsp+20h] [rbp-C8h]
  int pvData; // [rsp+40h] [rbp-A8h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-A4h] BYREF
  __int64 v17; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v19[4]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v20[3]; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v5 = a3;
  if ( !*((_BYTE *)this + 96) )
    return 0LL;
  pvData = 0;
  v8 = 0;
  if ( *((_BYTE *)this + 209) )
  {
    std::wstring::wstring(v20, a2);
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
      (char *)this + 464,
      &v18,
      v20);
    if ( v21 >= 8 )
      std::_Deallocate<16,0>(v20[0], 2 * v21 + 2);
    if ( v18 == *((_QWORD *)this + 59) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2AA,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x80070490LL,
        pdwType);
      return 2147943568LL;
    }
    v10 = *(_DWORD *)(24 * v5 + *(_QWORD *)(v18 + 48) + 4);
    pvData = v10;
    v8 = *(_BYTE *)(24 * v5 + *(_QWORD *)(v18 + 48) + 1);
    if ( *((_BYTE *)this + 32 * v5 + 272) && !v8 )
      v10 = 0;
    goto LABEL_22;
  }
  if ( !*((_BYTE *)this + 99) )
    goto LABEL_14;
  pcbData = 4;
  v9 = L"AudioSrvLicenseResult";
  if ( !*((_BYTE *)this + 100) )
    v9 = L"AudioDGLicenseResult";
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Spatial\\AtmosLicenseDebug",
    v9,
    0x10u,
    0LL,
    &pvData,
    &pcbData);
  v10 = pvData;
  if ( pvData >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    ProcessHeap = GetProcessHeap();
    v12 = HeapAlloc(ProcessHeap, 0, 0x40uLL);
    v19[2] = 24LL;
    v19[3] = 31LL;
    *v12 = *(_OWORD *)L"LegacyDefaultEndpointKey";
    v12[1] = *(_OWORD *)L"faultEndpointKey";
    v12[2] = *(_OWORD *)L"pointKey";
    *((_WORD *)v12 + 24) = 0;
    v19[0] = v12;
    std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::lower_bound(
      (char *)this + 464,
      &v17,
      v19);
    operator delete(v12, (const struct std::nothrow_t *)0x40);
    if ( v17 == *((_QWORD *)this + 59) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A0,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)0x8000FFFFLL,
        pdwTypea);
      if ( this != (AtmosCheck *)-56LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      return 2147549183LL;
    }
    v10 = *(_DWORD *)(*(_QWORD *)(v17 + 48) + 24 * v5 + 4);
    pvData = v10;
    if ( this != (AtmosCheck *)-56LL )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
LABEL_14:
      v10 = pvData;
    }
  }
LABEL_22:
  if ( a4 )
    *a4 = v8;
  return v10;
}
