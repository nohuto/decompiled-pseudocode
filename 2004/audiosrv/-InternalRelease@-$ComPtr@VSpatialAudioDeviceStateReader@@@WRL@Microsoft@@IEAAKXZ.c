/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x180068DF0
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180029ED0 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180055C2C (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x180055CF4 (Create_SpatialAudioDeviceStateReader.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x18005C968 (Create_SpatialAudioDeviceStateWriter.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18005CB50 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??1?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@QEAA@XZ @ 0x1801298A4 (--1-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 568) + 16LL))(v1 + 568);
  }
  return result;
}
