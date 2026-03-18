/*
 * XREFs of ?UmfdMsgCreateEvent@@YGPAU_KEVENT@@XZ @ 0xE5F90
 * Callers:
 *     ?Create@CManualResetEvent@@SGQAV1@XZ @ 0xE5F4C (-Create@CManualResetEvent@@SGQAV1@XZ.c)
 * Callees:
 *     <none>
 */

struct _KEVENT *__stdcall UmfdMsgCreateEvent()
{
  struct _KEVENT *v0; // eax
  struct _KEVENT *v1; // esi

  v0 = (struct _KEVENT *)EngAllocMem(2u, 0x10u, 0x676D6466u);
  v1 = v0;
  if ( !v0 )
    return 0;
  KeInitializeEvent(v0, NotificationEvent, 0);
  return v1;
}
