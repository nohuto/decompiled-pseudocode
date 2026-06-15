/*
 * XREFs of ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800460EC
 * Callers:
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18002EED0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C1F30 (-SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800C21F0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSrvVolumeTelemetry::Update(AudioSrvVolumeTelemetry *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  ULONGLONG TickCount64; // rsi
  char v4; // r14
  __int64 v5; // rbp

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  TickCount64 = GetTickCount64();
  v4 = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v5 = *((_QWORD *)this + 1);
    if ( GetTickCount64() - v5 > 0x3E8 )
    {
      (**(void (__fastcall ***)(AudioSrvVolumeTelemetry *, __int64, _QWORD))this)(
        this,
        v5 - *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
      v4 = 1;
    }
  }
  if ( v4 )
  {
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 2) = TickCount64;
  }
  else
  {
    ++*((_DWORD *)this + 6);
  }
  *((_QWORD *)this + 1) = TickCount64;
  if ( v2 )
    LeaveCriticalSection(v2);
}
