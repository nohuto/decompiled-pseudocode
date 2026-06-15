/*
 * XREFs of ?InitSpatialTechList@CSpatialProperties@@AEAAJXZ @ 0x18004C970
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18004A220 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAXPEAVCEndpointCharacteristics@@PEBUSpatialAudio.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x18004A824 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18005DD60 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x180126708 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@3PEAUIPropertyStore@@PEAUSpatialAudioRelatedGlobalSettings@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180126900 (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVCEndpointCharacteristics@@_NPEBUSpa.c)
 * Callees:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18006171C (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 */

int __fastcall CSpatialProperties::InitSpatialTechList(CSpatialProperties *this)
{
  int result; // eax
  HMODULE ModuleHandleW; // rax
  CSpatialAudioTechnologies *v4; // rcx

  result = 0;
  if ( !*((_BYTE *)this + 74) )
  {
    ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll");
    result = CSpatialAudioTechnologies::CreateTopologyList(v4, ModuleHandleW);
    if ( result >= 0 )
      *((_BYTE *)this + 74) = 1;
  }
  return result;
}
