/*
 * XREFs of ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C3F4
 * Callers:
 *     _lambda_cba08b96e4acaa4f1bd67338dd697b1d_::operator() @ 0x180158884 (_lambda_cba08b96e4acaa4f1bd67338dd697b1d_--operator().c)
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x18015CDB0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$DevicePropertyCacheMiss@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEB_N@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBU_GUID@@1AEB_N@Z @ 0x18014E6F4 (--$DevicePropertyCacheMiss@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEB_N@HolographicDriverClientTrac.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014EE94 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014F050 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWra.c)
 *     ?GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z @ 0x18015E750 (-GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z.c)
 *     ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015F278 (-GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrap.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x180164248 (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfVariableSize(
        __int64 a1,
        const struct _GUID *a2,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a3,
        __int64 (__fastcall *a4)(unsigned __int8 *, unsigned __int64),
        char a5)
{
  const struct _GUID *v7; // rsi
  bool v9; // al
  char v10; // di
  struct _GUID v12; // xmm0
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v13; // rcx
  int PropertyOfVariable; // edi
  __int64 v15; // rdx
  char v16[4]; // [rsp+30h] [rbp-31h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-2Dh] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int8 *v19; // [rsp+40h] [rbp-21h] BYREF
  int v20[4]; // [rsp+48h] [rbp-19h] BYREF
  int v21[4]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v22; // [rsp+68h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v7 = a2;
  v9 = (a5 & 1) != 0 || *(_BYTE *)(a1 + 161) && (a5 & 2) == 0;
  LOBYTE(a2) = *(_BYTE *)(a1 + 161);
  if ( (a5 & 2) != 0 || !(_BYTE)a2 )
  {
    v16[0] = 1;
    v10 = 1;
  }
  else
  {
    v16[0] = 0;
    v10 = 0;
  }
  if ( v9 )
  {
    if ( (int)Windows::Internal::Holographic::PropertyCache::GetValue(
                (Windows::Internal::Holographic::PropertyCache *)(a1 + 224),
                v7,
                a3) >= 0 )
      return 0LL;
    v17 = 1;
    HolographicDriverClientTrace::DevicePropertyCacheMiss<enum TraceDriverType,_GUID const &,_GUID const &,bool const &>(
      &v17,
      a1 + 80,
      (__int64)v7,
      v16);
  }
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x562,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
  v12 = *v7;
  v13 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  if ( *(_BYTE *)(a1 + 162) )
  {
    v22 = 0LL;
    *(struct _GUID *)v21 = v12;
    PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2>(
                           v13,
                           (unsigned int)a2,
                           v21,
                           (__int64)a4,
                           a3);
    if ( PropertyOfVariable < 0 )
    {
      v15 = 1391LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)PropertyOfVariable);
      return (unsigned int)PropertyOfVariable;
    }
  }
  else
  {
    *(struct _GUID *)v20 = *v7;
    PropertyOfVariable = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                           v13,
                           0x5B8414u,
                           v20,
                           0x10u,
                           a3);
    if ( PropertyOfVariable < 0 )
    {
      v15 = 1404LL;
      goto LABEL_18;
    }
  }
  Windows::Internal::Holographic::VariableSizeStructWrapperBase::GetRawValue(a3, &v19, &v18);
  PropertyOfVariable = a4(v19, v18);
  if ( PropertyOfVariable < 0 )
  {
    v15 = 1410LL;
    goto LABEL_18;
  }
  Windows::Internal::Holographic::PropertyCache::SetValue(
    (Windows::Internal::Holographic::PropertyCache *)(a1 + 224),
    v7,
    v19,
    v18);
  return 0LL;
}
