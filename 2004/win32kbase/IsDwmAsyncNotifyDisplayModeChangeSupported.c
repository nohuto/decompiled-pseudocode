/*
 * XREFs of IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C00BA888
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C00BA740 (UserNotifyDisplayChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDwmAsyncNotifyDisplayModeChangeSupported()
{
  if ( qword_1C0252D90 )
    return qword_1C0252D90();
  else
    return 3221225659LL;
}
