/*
 * XREFs of _EngCreateEvent@4 @ 0x1D9E8A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngCreateEvent(PEVENT *ppEvent)
{
  int v1; // esi
  BOOL result; // eax

  v1 = Win32AllocPoolNonPaged(24, 1836279364);
  result = 0;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 4) = 0;
    *(_DWORD *)v1 = v1 + 8;
    KeInitializeEvent((PRKEVENT)(v1 + 8), SynchronizationEvent, 0);
    result = 1;
    *ppEvent = (PEVENT)v1;
  }
  return result;
}
