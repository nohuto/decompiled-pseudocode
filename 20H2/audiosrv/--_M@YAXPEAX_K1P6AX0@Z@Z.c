/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069E00
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F304 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$5 @ 0x18007AA8A (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$13 @ 0x18007AB0D (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$18 @ 0x18007AB48 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$18.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$23 @ 0x18007AB83 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$23.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$24 @ 0x18007ABBE (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$24.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$25 @ 0x18007ABF9 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$25.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$26 @ 0x18007AC34 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$26.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$6 @ 0x18007B80A (_AtmosCheck--AtmosCheck_--_1_--dtor$6.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x18007C08C (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18007CCF0 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800C4DE8 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800D0C84 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800E73B8 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x18010E850 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x180118CAC (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180134500 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180069E74 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
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
