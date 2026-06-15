/*
 * XREFs of ??0CVolumeControlBase@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180060C10
 * Callers:
 *     ??0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x180060B58 (--0CVolumeHardware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 *     ??0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z @ 0x1800C276C (--0CVolumeSoftware@@QEAA@PEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x180056028 (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

CVolumeControlBase *__fastcall CVolumeControlBase::CVolumeControlBase(
        CVolumeControlBase *this,
        struct IVolumeStrip *a2)
{
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CVolumeControlBase::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_DWORD *)this + 14) = 51;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 17) = a2;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry((CVolumeControlBase *)((char *)this + 144));
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 18) = &AudioSrvVolumeTelemetryEndpointVolume::`vftable';
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, this);
  }
  return this;
}
