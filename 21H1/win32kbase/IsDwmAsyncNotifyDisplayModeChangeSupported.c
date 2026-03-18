/*
 * XREFs of IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C00ADBA8
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00AB4F0 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C00ADA60 (UserNotifyDisplayChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDwmAsyncNotifyDisplayModeChangeSupported()
{
  if ( qword_1C0258D50 )
    return qword_1C0258D50();
  else
    return 3221225659LL;
}
