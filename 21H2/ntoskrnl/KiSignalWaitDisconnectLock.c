/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x140521DC4
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x1403770AC (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 */

LONG __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
