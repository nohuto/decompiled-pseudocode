/*
 * XREFs of ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005D174
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005D1A0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C0040 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800C0960 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800C0C4C (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800C19DC (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C1CD0 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C1E60 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C2020 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C22E0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVolumeUnit::SetDB(CVolumeUnit *this, float a2)
{
  if ( *((float *)this + 5) <= a2 )
    a2 = *((float *)this + 5);
  if ( a2 <= *((float *)this + 2) )
    a2 = *((float *)this + 2);
  *((float *)this + 1) = a2;
}
