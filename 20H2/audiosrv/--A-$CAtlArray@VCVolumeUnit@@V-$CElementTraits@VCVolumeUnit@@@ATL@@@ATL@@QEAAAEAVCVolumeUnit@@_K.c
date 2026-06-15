/*
 * XREFs of ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005D2CC
 * Callers:
 *     ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x18005C870 (-GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18005C900 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005CA00 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005D2F0 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x1800BF09C (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800BF190 (-GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800BF240 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800BF9C0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800C0838 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800C0D4C (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800C0ED0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C1040 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C11D0 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C1390 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C1650 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x1800C1A90 (-SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z.c)
 *     ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x1800C1C10 (-UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x1800C1D10 (-UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800C1E10 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
        _QWORD *a1,
        unsigned __int64 a2)
{
  if ( a2 >= a1[1] )
    ATL::AtlThrowImpl(-2147024809);
  return *a1 + (a2 << 6);
}
