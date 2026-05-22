/*
 * XREFs of memcpy_s_1 @ 0x18011A098
 * Callers:
 *     ?InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z @ 0x180116208 (-InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014E7A0 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014E8C4 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrappe.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18015E6F0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015EB70 (-GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@P.c)
 *     ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_K@Z @ 0x18015ECC8 (-GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@_ea_18015ECC8.c)
 *     ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015EDB8 (-GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrap.c)
 *     ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAX_K@Z @ 0x18015EEF0 (-GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAX_K@Z.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180163BEC (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x180163D88 (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18003C40E (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     memcpy_0 @ 0x18004A68B (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_1(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 22;
LABEL_5:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}
