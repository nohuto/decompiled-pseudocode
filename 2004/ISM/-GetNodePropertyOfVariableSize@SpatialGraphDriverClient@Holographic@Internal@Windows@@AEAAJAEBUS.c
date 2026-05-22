/*
 * XREFs of ?GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D430
 * Callers:
 *     ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x18015D1D0 (-GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014E9D4 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     ??$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0AEB_N@Z @ 0x18014F5C8 (--$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrac.c)
 *     ?ErrorStatuses@ValidateProperty@Holographic@Internal@Windows@@YAJPEBX_K@Z @ 0x18015BCF0 (-ErrorStatuses@ValidateProperty@Holographic@Internal@Windows@@YAJPEBX_K@Z.c)
 *     ?GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z @ 0x18015E290 (-GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z.c)
 *     ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015EB70 (-GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@P.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180163BEC (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodePropertyOfVariableSize(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        const struct _GUID *a3,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a4)
{
  bool v7; // dl
  bool v8; // di
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v10; // rcx
  __int128 v11; // xmm1
  int PropertyOfVariable; // edi
  __int64 v13; // rdx
  void *v14; // rbp
  bool v15; // [rsp+30h] [rbp-58h] BYREF
  Windows::Internal::Holographic::ValidateProperty *v16; // [rsp+38h] [rbp-50h] BYREF
  void *v17; // [rsp+40h] [rbp-48h] BYREF
  int v18[4]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v19; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v7 = *(_BYTE *)(a1 + 161) != 0;
  v8 = *(_BYTE *)(a1 + 161) == 0;
  v15 = v8;
  if ( v7 )
  {
    if ( (int)Windows::Internal::Holographic::NodePropertyCache::GetValue(
                (Windows::Internal::Holographic::NodePropertyCache *)(a1 + 280),
                a2,
                a3,
                a4) >= 0 )
      return 0LL;
    HolographicDriverClientTrace::NodePropertyCacheMiss<_GUID const &,SPATIAL_NODE_ID const &,_GUID const &,bool const &>(
      (struct _GUID *)(a1 + 80),
      a2,
      (struct _GUID *)&SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES,
      &v15);
  }
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
  v10 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  v11 = *(_OWORD *)a2;
  *(struct _GUID *)v18 = SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES;
  v19 = v11;
  PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                         v10,
                         0x5B8418u,
                         v18,
                         0x20u,
                         a4);
  if ( PropertyOfVariable < 0 )
  {
    v13 = 1510LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfVariable);
    return (unsigned int)PropertyOfVariable;
  }
  Windows::Internal::Holographic::VariableSizeStructWrapperBase::GetRawValue(
    a4,
    (unsigned __int8 **)&v16,
    (unsigned __int64 *)&v17);
  v14 = v17;
  PropertyOfVariable = Windows::Internal::Holographic::ValidateProperty::ErrorStatuses(v16, v17);
  if ( PropertyOfVariable < 0 )
  {
    v13 = 1515LL;
    goto LABEL_8;
  }
  Windows::Internal::Holographic::NodePropertyCache::SetValue(
    (struct _GUID *)(a1 + 280),
    a2,
    &SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES,
    v16,
    (unsigned __int64)v14);
  return 0LL;
}
