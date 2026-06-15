/*
 * XREFs of ?Close@CHandle@ATL@@QEAAXXZ @ 0x180074890
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180039470 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18005F8D0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ??1CEvent@ATL@@QEAA@XZ @ 0x1800FA6D4 (--1CEvent@ATL@@QEAA@XZ.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1800FA7F0 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x180100C78 (--1CMonitor@@IEAA@XZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180104EC4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::Close(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
