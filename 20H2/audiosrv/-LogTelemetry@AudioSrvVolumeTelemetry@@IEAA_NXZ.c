/*
 * XREFs of ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800B6BD8
 * Callers:
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800BEE80 (--1CVolumeControlBase@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AudioSrvVolumeTelemetry::LogTelemetry(AudioSrvVolumeTelemetry *this)
{
  char v1; // di
  __int64 v3; // rsi

  v1 = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v3 = *((_QWORD *)this + 1);
    if ( GetTickCount64() - v3 > 0x3E8 )
    {
      (**(void (__fastcall ***)(AudioSrvVolumeTelemetry *, __int64, _QWORD))this)(
        this,
        v3 - *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
      return 1;
    }
  }
  return v1;
}
