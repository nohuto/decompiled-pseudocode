/*
 * XREFs of _InitializeWin32PoolTracking@0 @ 0xEBEE8
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SGPAV12@XZ @ 0xEBF68 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SGPAV12@XZ.c)
 *     ?IsWin32kRefreshed@@YG_NXZ @ 0xED308 (-IsWin32kRefreshed@@YG_NXZ.c)
 *     ?StopWin32PoolTracking@@YGXXZ @ 0xED75A (-StopWin32PoolTracking@@YGXXZ.c)
 *     ?LoadWin32PoolTrackingSettings@@YGXXZ @ 0x183353 (-LoadWin32PoolTrackingSettings@@YGXXZ.c)
 *     ?TrackTag@CLeakTrackingAllocator@NSInstrumentation@@QAE_NI@Z @ 0x24A048 (-TrackTag@CLeakTrackingAllocator@NSInstrumentation@@QAE_NI@Z.c)
 */

int __stdcall InitializeWin32PoolTracking()
{
  unsigned int v0; // esi
  NSInstrumentation::CLeakTrackingAllocator *v1; // ecx
  _DWORD *v2; // eax
  bool v4; // al

  *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) = NSInstrumentation::CLeakTrackingAllocator::Create();
  if ( *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) )
  {
    v0 = 0;
    v1 = (NSInstrumentation::CLeakTrackingAllocator *)_gSessionId;
    if ( _gSessionId == _gServiceSessionId )
    {
      v4 = IsWin32kRefreshed();
      if ( gpxsGlobals && (*((_DWORD *)gpxsGlobals + 4) = v4, gpxsGlobals) && !*((_DWORD *)gpxsGlobals + 4) )
        LoadWin32PoolTrackingSettings();
      else
        StopWin32PoolTracking();
    }
    v2 = gpxsGlobals;
    if ( gpxsGlobals && !*((_DWORD *)gpxsGlobals + 4) && *((_DWORD *)gpxsGlobals + 5) )
    {
      do
      {
        NSInstrumentation::CLeakTrackingAllocator::TrackTag(v1, *(_DWORD *)(v2[6] + 4 * v0));
        v2 = gpxsGlobals;
        ++v0;
      }
      while ( v0 < *((_DWORD *)gpxsGlobals + 5) );
    }
    return 1;
  }
  else
  {
    *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) = &unk_274BA8;
    return 0;
  }
}
