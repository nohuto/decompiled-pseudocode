/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006ACCC
 * Callers:
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18002A818 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180039460 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x1800583EC (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18005B5F4 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F744 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x180065A7C (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800C5930 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18006A7D4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
