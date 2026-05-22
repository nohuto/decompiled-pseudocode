/*
 * XREFs of ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x18015D040
 * Callers:
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEA_N@Z @ 0x18004D600 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___ @ 0x1801513CC (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_1801513CC.c)
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C1FC (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetForwardOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x18015D13C (-GetForwardOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016060C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F94 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetForwardOnly(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        bool *a2)
{
  int DevicePropertyOfKnownSize; // eax
  unsigned __int64 v4; // rdx
  unsigned int v5; // ebx
  unsigned __int8 v6; // cl
  bool *v7; // rdi
  __int64 v8; // rcx
  HolographicDriverClientTrace *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  bool *v13; // [rsp+58h] [rbp+10h]
  char *v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = a2;
  DevicePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetDevicePropertyOfKnownSize(
                                (__int64)this - 8,
                                &SPATIAL_GRAPH_DEVICE_PROPERTY_FORWARD_ONLY,
                                &v12,
                                1uLL,
                                (__int64 (__fastcall *)(void *, unsigned __int64))Windows::Internal::Holographic::ValidateProperty::Boolean,
                                0);
  v5 = DevicePropertyOfKnownSize;
  if ( DevicePropertyOfKnownSize == -2147024846 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1565LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070032LL);
    *v13 = 0;
  }
  else
  {
    if ( DevicePropertyOfKnownSize < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x622,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)DevicePropertyOfKnownSize);
      *v13 = 0;
      return v5;
    }
    v6 = v12 != 0;
    *v13 = v12 != 0;
  }
  v7 = v13;
  if ( HolographicDriverClientTrace::IsEnabled(v6, v4) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v8,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::GetForwardOnly_(v9, (char *)this - 8, (const struct _GUID *)((char *)this + 72), *v7);
  }
  v14 = &v12;
  Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___(
    (__int64)this + 72,
    (__int64)&v14);
  return 0;
}
