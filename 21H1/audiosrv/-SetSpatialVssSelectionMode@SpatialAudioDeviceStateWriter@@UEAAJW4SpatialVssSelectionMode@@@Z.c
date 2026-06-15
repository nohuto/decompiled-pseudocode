/*
 * XREFs of ?SetSpatialVssSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialVssSelectionMode@@@Z @ 0x180129F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x18012CA98 (-Store@SpatialAudioStateIO@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDeviceStateWriter::SetSpatialVssSelectionMode(__int64 a1, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // edi

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 568) + 8LL))(a1 - 568);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(a1 - 20) = a2;
    v5 = SpatialAudioStateIO::Store((SpatialAudioStateIO *)(a1 - 568));
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
