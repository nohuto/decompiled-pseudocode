/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x14051C2C4
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x140373E7C (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
