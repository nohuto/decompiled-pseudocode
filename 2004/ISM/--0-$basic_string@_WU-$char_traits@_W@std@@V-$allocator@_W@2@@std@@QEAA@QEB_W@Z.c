/*
 * XREFs of ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800C5284
 * Callers:
 *     ?OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z @ 0x1800C643C (-OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z.c)
 *     _lambda_44ac52284afab4209afe1ba1ddd42b4f_::operator() @ 0x1800D60C8 (_lambda_44ac52284afab4209afe1ba1ddd42b4f_--operator().c)
 *     ?RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800D8310 (-RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x18015A0B8 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING_.c)
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x18015C240 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180166490 (-TrySetupImportExportOperation@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBU_.c)
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x18016A0C4 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800C6E1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8

  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  std::wstring::assign(a1);
  return a1;
}
