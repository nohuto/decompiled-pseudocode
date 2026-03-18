/*
 * XREFs of ?TrackTag@CLeakTrackingAllocator@NSInstrumentation@@QAE_NI@Z @ 0x24A048
 * Callers:
 *     _InitializeWin32PoolTracking@0 @ 0xEBEE8 (_InitializeWin32PoolTracking@0.c)
 * Callees:
 *     <none>
 */

char __thiscall NSInstrumentation::CLeakTrackingAllocator::TrackTag(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned int a2)
{
  int v2; // ecx
  int v3; // edx

  v2 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  v3 = *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 44);
  if ( v3 == 10 )
    return 0;
  *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 4 * v3) = a2;
  ++*(_DWORD *)(v2 + 44);
  *(_DWORD *)(v2 + 40) |= a2;
  return 1;
}
