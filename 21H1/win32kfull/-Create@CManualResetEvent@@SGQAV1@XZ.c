/*
 * XREFs of ?Create@CManualResetEvent@@SGQAV1@XZ @ 0xE5F4C
 * Callers:
 *     ?Create@CEventPoolEntry@CEventPool@@SGQAV12@XZ @ 0xE5E08 (-Create@CEventPoolEntry@CEventPool@@SGQAV12@XZ.c)
 *     ?Create@CWorkItemQueue@@SGPAV1@XZ @ 0xE5F00 (-Create@CWorkItemQueue@@SGPAV1@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SGXQAV1@@Z @ 0xD3388 (-Destroy@CManualResetEvent@@SGXQAV1@@Z.c)
 *     ?UmfdMsgCreateEvent@@YGPAU_KEVENT@@XZ @ 0xE5F90 (-UmfdMsgCreateEvent@@YGPAU_KEVENT@@XZ.c)
 */

struct _KEVENT **__stdcall CManualResetEvent::Create()
{
  struct _KEVENT **v0; // edi
  struct _KEVENT **v1; // eax
  struct _KEVENT **v2; // ebx
  PVOID *v3; // esi
  struct _KEVENT *Event; // eax

  v0 = 0;
  v1 = (struct _KEVENT **)EngAllocMem(0, 4u, 0x676D6466u);
  v2 = v1;
  if ( !v1 )
    return 0;
  v3 = (PVOID *)v1;
  Event = UmfdMsgCreateEvent();
  *v2 = Event;
  if ( Event )
  {
    v3 = 0;
    v0 = v2;
  }
  if ( v3 )
    CManualResetEvent::Destroy(v3);
  return v0;
}
