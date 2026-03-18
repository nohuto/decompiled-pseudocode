/*
 * XREFs of PopNotifyShutdownListener @ 0x1409AE8F0
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1409AE954 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
