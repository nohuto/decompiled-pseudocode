/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18006A660
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F644 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$5 @ 0x18007B44A (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$13 @ 0x18007B4CD (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$18 @ 0x18007B508 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$18.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$23 @ 0x18007B543 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$23.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$24 @ 0x18007B57E (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$24.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$25 @ 0x18007B5B9 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$25.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$26 @ 0x18007B5F4 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$26.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$6 @ 0x18007C1CA (_AtmosCheck--AtmosCheck_--_1_--dtor$6.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x18007CA4C (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18007D6B0 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800C5988 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800D1854 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800E7F88 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x18010F420 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x18011987C (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x1801354E0 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18006A6D4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
