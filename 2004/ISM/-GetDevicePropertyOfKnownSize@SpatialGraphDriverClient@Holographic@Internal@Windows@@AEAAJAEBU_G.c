/*
 * XREFs of ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015BD9C
 * Callers:
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x18015CAC0 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNode.c)
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x18015CBE0 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x18015E360 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x18015EA04 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?GetSupportsImportExport@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAA_NXZ @ 0x18015EB20 (-GetSupportsImportExport@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$DevicePropertyCacheMiss@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEB_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBU_GUID@@1AEB_N@Z @ 0x18014E234 (--$DevicePropertyCacheMiss@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEB_N@HolographicDriverClientTrac.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014E7A0 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014E8C4 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrappe.c)
 *     ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAX_K@Z @ 0x18015EEF0 (-GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAX_K@Z.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x180163D88 (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
        __int64 a1,
        const struct _GUID *a2,
        void *a3,
        unsigned __int64 a4,
        __int64 (__fastcall *a5)(void *, unsigned __int64),
        char a6)
{
  const struct _GUID *v8; // rsi
  bool v10; // al
  char v11; // di
  struct _GUID v13; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v14; // rcx
  int PropertyOfKnown; // edi
  __int64 v16; // rdx
  char v17[4]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-3Ch] BYREF
  int v19[4]; // [rsp+38h] [rbp-38h] BYREF
  int v20[4]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v8 = a2;
  v10 = (a6 & 1) != 0 || *(_BYTE *)(a1 + 161) && (a6 & 2) == 0;
  LOBYTE(a2) = *(_BYTE *)(a1 + 161);
  if ( (a6 & 2) != 0 || !(_BYTE)a2 )
  {
    v17[0] = 1;
    v11 = 1;
  }
  else
  {
    v17[0] = 0;
    v11 = 0;
  }
  if ( v10 )
  {
    if ( Windows::Internal::Holographic::PropertyCache::GetValue(
           (Windows::Internal::Holographic::PropertyCache *)(a1 + 224),
           v8,
           a3,
           a4) >= 0 )
      return 0LL;
    v18 = 1;
    HolographicDriverClientTrace::DevicePropertyCacheMiss<enum TraceDriverType,_GUID const &,_GUID const &,bool const &>(
      &v18,
      a1 + 80,
      (__int64)v8,
      v17);
  }
  if ( !v11 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x523,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
  v13 = *v8;
  v14 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  if ( *(_BYTE *)(a1 + 162) )
  {
    v21 = 0LL;
    *(struct _GUID *)v20 = v13;
    PropertyOfKnown = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2>(
                        v14,
                        (unsigned int)a2,
                        v20,
                        a4,
                        a3,
                        a4);
    if ( PropertyOfKnown < 0 )
    {
      v16 = 1329LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)PropertyOfKnown);
      return (unsigned int)PropertyOfKnown;
    }
  }
  else
  {
    *(struct _GUID *)v19 = *v8;
    PropertyOfKnown = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                        v14,
                        0x5B8414u,
                        v19,
                        0x10u,
                        a3,
                        a4);
    if ( PropertyOfKnown < 0 )
    {
      v16 = 1343LL;
      goto LABEL_18;
    }
  }
  PropertyOfKnown = a5(a3, a4);
  if ( PropertyOfKnown < 0 )
  {
    v16 = 1346LL;
    goto LABEL_18;
  }
  Windows::Internal::Holographic::PropertyCache::SetValue(
    (Windows::Internal::Holographic::PropertyCache *)(a1 + 224),
    v8,
    a3,
    a4);
  return 0LL;
}
