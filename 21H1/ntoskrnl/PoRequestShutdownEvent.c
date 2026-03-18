/*
 * XREFs of PoRequestShutdownEvent @ 0x140795870
 * Callers:
 *     SepRmCommandServerThread @ 0x1407953A0 (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x1407958B4 (PopRequestShutdownWait.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = PopRequestShutdownWait(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = &PopShutdownEvent;
    return 0;
  }
  return result;
}
