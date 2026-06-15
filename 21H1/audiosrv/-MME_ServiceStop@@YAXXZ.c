/*
 * XREFs of ?MME_ServiceStop@@YAXXZ @ 0x1800F8218
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800BB2E0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     ?DeletePnpInfo@@YAXXZ @ 0x1800F80F4 (-DeletePnpInfo@@YAXXZ.c)
 */

void MME_ServiceStop(void)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_609dd533b8aa311af52d5b9794abf855_Traceguids);
  }
  DeletePnpInfo();
  if ( AudioEndpointBuilderSid )
    LocalFree(AudioEndpointBuilderSid);
  if ( AudiosrvSid )
    LocalFree(AudiosrvSid);
  AudioEndpointBuilderSid = 0LL;
  AudiosrvSid = 0LL;
}
