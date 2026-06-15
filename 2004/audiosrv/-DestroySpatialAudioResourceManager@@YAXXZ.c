/*
 * XREFs of ?DestroySpatialAudioResourceManager@@YAXXZ @ 0x180107044
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800BBAA4 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void DestroySpatialAudioResourceManager(void)
{
  if ( g_SpatialAudioResourceManager )
  {
    (*(void (__fastcall **)(struct ISpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 40LL))(g_SpatialAudioResourceManager);
    if ( g_SpatialAudioResourceManager )
    {
      (*(void (__fastcall **)(struct ISpatialAudioResourceManager *))(*(_QWORD *)g_SpatialAudioResourceManager + 16LL))(g_SpatialAudioResourceManager);
      g_SpatialAudioResourceManager = 0LL;
    }
  }
}
