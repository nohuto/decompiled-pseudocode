/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800605D0
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009468 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z @ 0x18000B0F0 (-QueryLicenseForSpatialSubtypeAndEndpoint@AtmosCheck@@AEAAJPEBGHPEA_N@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18004E860 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ??$_Insert@AEAPEBGV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAPEBG$$QEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x180060528 (--$_Insert@AEAPEBGV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U-$default_d.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066F30 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     AudioServerCreateStreamConnection @ 0x1800DE5F0 (AudioServerCreateStreamConnection.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$CComHeapPtr@G@ATL@@@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAV?$CComHeapPtr@G@ATL@@@Z @ 0x1800E3CC0 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$CComHeapPtr@G.c)
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800E6640 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z @ 0x1800FA5E8 (--0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_N@Z.c)
 *     ?CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ @ 0x180135600 (-CheckInstalledAppServicesAvailable@AtmosCheck@@AEAA_NXZ.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x18013580C (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x180135C80 (-GetCurrentEndpointsUnderLock@AtmosCheck@@AEAAJAEAV-$vector@V-$basic_string@GU-$char_traits@G@st.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x180135E98 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x180136288 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x180136A48 (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 *     ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x180136B64 (-IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@Z @ 0x180138050 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGAEAV-$unique_ptr@$$BY0A@UEndpointSpecificSpatialTe.c)
 *     ?UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180138130 (-UpdateEndpointUnderLock@AtmosCheck@@AEAAJPEBGHPEBUEndpointSpecificSpatialTechInfo@1@@Z.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18013825C (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180057AC8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::wstring(__int64 a1, _WORD *a2)
{
  unsigned __int64 v3; // r8

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  std::wstring::assign((void **)a1, a2, v3);
  return a1;
}
