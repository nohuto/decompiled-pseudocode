/*
 * XREFs of ?OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2DevicePropertyRequest@234@J@Z @ 0x180161020
 * Callers:
 *     <none>
 * Callees:
 *     ??$DevicePropertyRequestFailed@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEAJ@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@AEBU_GUID@@1AEAJ@Z @ 0x18014E20C (--$DevicePropertyRequestFailed@W4TraceDriverType@@AEBU_GUID@@AEBU2@AEAJ@HolographicDriverClientT.c)
 *     ?GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z @ 0x18015EF3C (-GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x180163CF8 (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::OnDevicePropertyRequestComplete(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::V2DevicePropertyRequest *a2,
        int a3,
        const char *a4)
{
  const struct _GUID *v4; // rsi
  void *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a3;
  v4 = (const struct _GUID *)((char *)a2 + 128);
  if ( a3 < 0 )
  {
    LODWORD(v9) = 1;
    HolographicDriverClientTrace::DevicePropertyRequestFailed<enum TraceDriverType,_GUID const &,_GUID const &,long &>(
      (unsigned int *)&v9,
      (unsigned __int64)this + 80,
      (__int64)v4,
      &v8);
  }
  else
  {
    Windows::Internal::Holographic::V2PropertyRequest::GetValue(a2, (const unsigned __int8 **)&v7, &v9, a4);
    Windows::Internal::Holographic::PropertyCache::SetValue(
      (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 224),
      v4,
      v7,
      v9);
    *((_DWORD *)this + 94) |= *((_DWORD *)a2 + 13);
  }
}
