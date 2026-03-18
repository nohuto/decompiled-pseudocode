/*
 * XREFs of DbgkpInitializePhase1SiloState @ 0x1407C6270
 * Callers:
 *     DbgkInitializeServerSilo @ 0x140886DE8 (DbgkInitializeServerSilo.c)
 *     DbgkpInitializePhase1 @ 0x140A706A8 (DbgkpInitializePhase1.c)
 * Callees:
 *     DbgkpCreateNotificationEvent @ 0x1407C62AC (DbgkpCreateNotificationEvent.c)
 */

__int64 __fastcall DbgkpInitializePhase1SiloState(__int64 a1)
{
  int NotificationEvent; // eax
  unsigned int v2; // ecx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = 4718662LL;
  v4[1] = L"\\KernelObjects\\SystemErrorPortReady";
  NotificationEvent = DbgkpCreateNotificationEvent(v4, a1 + 24);
  v2 = 0;
  if ( NotificationEvent < 0 )
    return (unsigned int)NotificationEvent;
  return v2;
}
