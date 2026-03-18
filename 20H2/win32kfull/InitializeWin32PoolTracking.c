/*
 * XREFs of InitializeWin32PoolTracking @ 0x1C012C760
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1C021F5C4 (-IsWin32kRefreshed@@YA_NXZ.c)
 *     ?LoadWin32PoolTrackingSettings@@YAXXZ @ 0x1C021F82C (-LoadWin32PoolTrackingSettings@@YAXXZ.c)
 *     ?StopWin32PoolTracking@@YAXXZ @ 0x1C021FA0C (-StopWin32PoolTracking@@YAXXZ.c)
 */

__int64 InitializeWin32PoolTracking()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rax
  bool v4; // al
  _DWORD *DeviceContext; // rdx
  int v6; // r8d
  __int64 v7; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x50uLL, 0x36497355u);
  v1 = 0;
  if ( PoolWithTag )
  {
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[8] = 0LL;
    *((_BYTE *)PoolWithTag + 72) = 1;
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = PoolWithTag;
    if ( gSessionId == gServiceSessionId )
    {
      v4 = IsWin32kRefreshed();
      if ( gpxsGlobals && (*((_DWORD *)gpxsGlobals + 8) = v4, gpxsGlobals) && !v4 )
        LoadWin32PoolTrackingSettings();
      else
        StopWin32PoolTracking();
    }
    v2 = gpxsGlobals;
    if ( gpxsGlobals && !*((_DWORD *)gpxsGlobals + 8) && *((_DWORD *)gpxsGlobals + 9) )
    {
      DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
      do
      {
        v6 = *(_DWORD *)(v2[5] + 4LL * v1);
        v7 = (unsigned int)DeviceContext[11];
        if ( (_DWORD)v7 != 10 )
        {
          DeviceContext[v7] = v6;
          ++DeviceContext[11];
          DeviceContext[10] |= v6;
        }
        v2 = gpxsGlobals;
        ++v1;
      }
      while ( v1 < *((_DWORD *)gpxsGlobals + 9) );
    }
    return 1LL;
  }
  else
  {
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = &unk_1C033B7B0;
    return 0LL;
  }
}
