/*
 * XREFs of PopNotifyShutdownListener @ 0x1409AF750
 * Callers:
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1409AF7B4 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
