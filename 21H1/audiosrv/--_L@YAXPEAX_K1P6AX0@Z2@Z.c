/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006ABCC
 * Callers:
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18002A818 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180039470 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x1800582EC (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18005B4F4 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005F644 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x18006597C (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800C5840 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18006A6D4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
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
