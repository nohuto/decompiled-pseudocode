/*
 * XREFs of ??_GSpatialAudioDeviceStateReader@@UEAAPEAXI@Z @ 0x18002A8D0
 * Callers:
 *     ??_ESpatialAudioDeviceStateReader@@WCDI@EAAPEAXI@Z @ 0x180075610 (--_ESpatialAudioDeviceStateReader@@WCDI@EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioDeviceStateReader *__fastcall SpatialAudioDeviceStateReader::`scalar deleting destructor'(
        SpatialAudioDeviceStateReader *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  HANDLE ProcessHeap; // rax

  *((_DWORD *)this + 153) = -1073741823;
  v4 = *((_QWORD *)this + 75);
  if ( v4 )
  {
    *((_QWORD *)this + 75) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)this = &SpatialAudioIO::`vftable';
  v5 = *((_QWORD *)this + 67);
  if ( v5 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 66);
  if ( v6 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
