/*
 * XREFs of ?SignalChange@SpatialAudioConfigureDevice@@UEAAJXZ @ 0x1800692E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioConfigureDevice::SignalChange(SpatialAudioConfigureDevice *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 32LL))(*((_QWORD *)this + 11));
}
