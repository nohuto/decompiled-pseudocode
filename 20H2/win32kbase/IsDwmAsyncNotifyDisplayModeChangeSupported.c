/*
 * XREFs of IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C00166B8
 * Callers:
 *     UserNotifyDisplayChange @ 0x1C0016570 (UserNotifyDisplayChange.c)
 *     xxxResetDisplayDevice @ 0x1C006F460 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDwmAsyncNotifyDisplayModeChangeSupported()
{
  if ( qword_1C0250D90 )
    return qword_1C0250D90();
  else
    return 3221225659LL;
}
