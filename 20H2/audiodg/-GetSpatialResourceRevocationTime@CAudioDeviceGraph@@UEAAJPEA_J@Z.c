/*
 * XREFs of ?GetSpatialResourceRevocationTime@CAudioDeviceGraph@@UEAAJPEA_J@Z @ 0x140049D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z @ 0x1400473D8 (-GetAdaptiveSpatialAudioRenderer@CPipeInstance@@QEBAJPEAPEAUIAdaptiveSpatialAudioRenderer@@@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetSpatialResourceRevocationTime(CAudioDeviceGraph *this, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  CPipeInstance *v5; // rcx
  unsigned int v6; // esi
  struct IAdaptiveSpatialAudioRenderer *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v5 = (CPipeInstance *)*((_QWORD *)this + 20);
  v8 = 0LL;
  v6 = -2147467262;
  if ( (int)CPipeInstance::GetAdaptiveSpatialAudioRenderer(v5, &v8) >= 0 )
    v6 = (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, __int64 *))(*(_QWORD *)v8 + 64LL))(v8, a2);
  if ( v8 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v6;
}
