/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x1800684C0
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180029850 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18005548C (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x180055554 (Create_SpatialAudioDeviceStateReader.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x18005C1C8 (Create_SpatialAudioDeviceStateWriter.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18005C3B0 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??1?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@QEAA@XZ @ 0x180128C14 (--1-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
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
