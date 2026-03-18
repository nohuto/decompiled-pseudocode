/*
 * XREFs of ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ @ 0x1C012B21C
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C012B150 (UninitializeWin32PoolTracking.c)
 *     ?Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C021FC30 (-Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CLeakTrackingAllocator::Empty(NSInstrumentation::CLeakTrackingAllocator *this)
{
  bool result; // al
  __int64 v2; // rcx
  bool v3; // dl
  __int64 v4; // rcx
  bool v5; // cl

  result = 1;
  v2 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 6);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 48) == 0;
  else
    v3 = 1;
  v4 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 7);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 40) == 0LL;
  else
    v5 = 1;
  if ( !v3 || !v5 )
    return 0;
  return result;
}
