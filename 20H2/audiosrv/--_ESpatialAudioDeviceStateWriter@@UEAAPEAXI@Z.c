/*
 * XREFs of ??_ESpatialAudioDeviceStateWriter@@UEAAPEAXI@Z @ 0x180128C90
 * Callers:
 *     ??_ESpatialAudioDeviceStateWriter@@WCDI@EAAPEAXI@Z @ 0x180074C00 (--_ESpatialAudioDeviceStateWriter@@WCDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180033A40 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??1SpatialAudioIO@@UEAA@XZ @ 0x180128C20 (--1SpatialAudioIO@@UEAA@XZ.c)
 */

SpatialAudioDeviceStateWriter *__fastcall SpatialAudioDeviceStateWriter::`vector deleting destructor'(
        SpatialAudioDeviceStateWriter *this,
        char a2)
{
  __int64 v4; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 616));
  *((_DWORD *)this + 153) = -1073741823;
  v4 = *((_QWORD *)this + 75);
  if ( v4 )
  {
    *((_QWORD *)this + 75) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  SpatialAudioIO::~SpatialAudioIO(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
