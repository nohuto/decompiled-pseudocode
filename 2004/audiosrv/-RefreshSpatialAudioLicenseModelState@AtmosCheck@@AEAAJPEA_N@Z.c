/*
 * XREFs of ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F744
 * Callers:
 *     _lambda_2d831242b22f49e80919fd2827d69307_::operator() @ 0x1800736F8 (_lambda_2d831242b22f49e80919fd2827d69307_--operator().c)
 *     _lambda_5056499381e6be98f6bae348336db3ef_::operator() @ 0x180073914 (_lambda_5056499381e6be98f6bae348336db3ef_--operator().c)
 *     _lambda_d4b2d08f096e200be5494970f4d857ee_::operator() @ 0x180073B10 (_lambda_d4b2d08f096e200be5494970f4d857ee_--operator().c)
 *     _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073C54 (_lambda_e0385c1b3dccbc375408929e287d16bb_--operator().c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18005F9D0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x18005FE68 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x18006040C (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18006081C (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18006A760 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006ACCC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1801345D8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x180136738 (-InitializeAppServiceMode@AtmosCheck@@AEAAJXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180137E3C (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18013825C (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::RefreshSpatialAudioLicenseModelState(AtmosCheck *this, bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r12
  _BYTE *v4; // r14
  int v5; // edx
  bool v6; // r8
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // r15d
  LPCWCH *v12; // rsi
  signed __int64 v13; // rcx
  signed __int64 v14; // r13
  signed __int64 v15; // rbx
  const WCHAR *v16; // rdx
  const WCHAR *v17; // rcx
  const WCHAR *v18; // rax
  const WCHAR *v19; // r8
  int v20; // r8d
  int v21; // r9d
  __int64 v23; // r9
  __int64 v24; // rdx
  void *v25; // rdx
  __int64 v26; // rbx
  void *v27; // rdx
  int v28; // eax
  int updated; // eax
  char v30; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v31[7]; // [rsp+31h] [rbp-CFh] BYREF
  signed __int64 v32; // [rsp+38h] [rbp-C8h]
  signed __int64 v33; // [rsp+40h] [rbp-C0h]
  LPCWCH lpString2; // [rsp+48h] [rbp-B8h]
  LPCWCH lpString1; // [rsp+50h] [rbp-B0h]
  signed __int64 v36; // [rsp+58h] [rbp-A8h]
  bool *v37; // [rsp+60h] [rbp-A0h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+68h] [rbp-98h]
  _BYTE v39[8]; // [rsp+70h] [rbp-90h] BYREF
  char v40; // [rsp+78h] [rbp-88h] BYREF
  char v41; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[168]; // [rsp+88h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v37 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v38 = v3;
  v4 = (char *)this + 209;
  v31[0] = *((_BYTE *)this + 209);
  v30 = 0;
  `eh vector constructor iterator'(
    v39,
    0x20uLL,
    6uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::SpatialAudioFormatSubtypeInfo,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  v7 = InitializeSpatialAudioFormatSubtypeInfoArray((struct SpatialAudioFormatSubtypeInfo *)v39, v5, v6);
  v8 = v7;
  v9 = 19;
  if ( v7 != 19 )
  {
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x928,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v7);
      v9 = v8;
    }
    else
    {
      v10 = ScanForInstalledSpatialAudioSubtypeAppServices(
              (struct SpatialAudioFormatSubtypeInfo *)v39,
              6,
              (bool *)this + 209);
      v9 = v10;
      if ( v10 < 0 )
      {
        v23 = (unsigned int)v10;
        v24 = 2346LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)v23);
      }
      else
      {
        v11 = 0;
        v12 = (LPCWCH *)((char *)this + 288);
        v13 = &v40 - (char *)this;
        v36 = &v40 - (char *)this;
        v32 = v39 - (_BYTE *)this;
        v14 = &v41 - (char *)this;
        v15 = v42 - (_BYTE *)this;
        v33 = v42 - (_BYTE *)this;
        do
        {
          if ( CompareStringOrdinal(*(LPCWCH *)((char *)v12 + v13 - 288), -1, *(v12 - 1), -1, 1) != 2 )
          {
            v9 = -2147418113;
            v23 = 2147549183LL;
            v24 = 2362LL;
            goto LABEL_37;
          }
          v16 = (const WCHAR *)&unk_18015D734;
          v17 = (const WCHAR *)&unk_18015D734;
          if ( *v12 )
            v17 = *v12;
          v18 = (const WCHAR *)&unk_18015D734;
          if ( v12[1] )
            v18 = v12[1];
          lpString1 = v18;
          v19 = (const WCHAR *)&unk_18015D734;
          if ( *(LPCWCH *)((char *)v12 + v14 - 288) )
            v19 = *(LPCWCH *)((char *)v12 + v14 - 288);
          if ( *(LPCWCH *)((char *)v12 + v15 - 288) )
            v16 = *(LPCWCH *)((char *)v12 + v15 - 288);
          lpString2 = v16;
          if ( *((_BYTE *)v12 - 16) != *((_BYTE *)v12 + v32 - 288)
            || CompareStringOrdinal(v17, -1, v19, -1, 1) != 2
            || CompareStringOrdinal(lpString1, -1, lpString2, -1, 1) != 2 )
          {
            v30 = 1;
            *((_BYTE *)v12 - 16) = *((_BYTE *)v12 + v32 - 288);
            v25 = *(void **)((char *)v12 + v14 - 288);
            *(LPCWCH *)((char *)v12 + v14 - 288) = 0LL;
            v26 = 32LL * (int)v11;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              (void **)((char *)this + v26 + 288),
              v25);
            v27 = *(void **)((char *)v12 + v33 - 288);
            *(LPCWCH *)((char *)v12 + v33 - 288) = 0LL;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              (void **)((char *)this + v26 + 296),
              v27);
            v15 = v33;
          }
          ++v11;
          v12 += 4;
          v13 = v36;
        }
        while ( v11 < 6 );
        if ( v31[0] != *v4 )
        {
          if ( *v4 )
          {
            std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::clear((char *)this + 464);
            v28 = AtmosCheck::InitializeAppServiceMode(this);
            v9 = v28;
            if ( v28 < 0 )
            {
              v23 = (unsigned int)v28;
              v24 = 2412LL;
              goto LABEL_37;
            }
            updated = AtmosCheck::UpdateLicenseMapForAllEndpoints(this);
            v9 = updated;
            if ( updated < 0 )
            {
              v23 = (unsigned int)updated;
              v24 = 2413LL;
              goto LABEL_37;
            }
          }
          else
          {
            AtmosCheck::InitializeLicenseMapLegacy(this);
            AtmosCheck::UninitializeAppServiceMode(this);
          }
        }
        LOBYTE(v13) = v30;
        if ( v37 )
          *v37 = v30;
        if ( (unsigned int)dword_18019D520 > 5 )
        {
          v31[0] = *v4;
          v30 = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            v13,
            (unsigned int)&unk_18016D989,
            v20,
            v21,
            (__int64)&v30,
            (__int64)v31);
        }
        v9 = 0;
      }
    }
  }
  `eh vector destructor iterator'(
    v39,
    0x20uLL,
    6uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v9;
}
