/*
 * XREFs of _TpCallbackReleaseSemaphoreOnCompletion@12 @ 0x4B384610
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __cdecl TpCallbackReleaseSemaphoreOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        HANDLE Semaphore,
        ULONG ReleaseCount)
{
  if ( !Instance || !Semaphore || Semaphore == (HANDLE)-1 || !ReleaseCount || *((_DWORD *)Instance + 23) )
    TppRaiseInvalidParameter();
  *((_DWORD *)Instance + 20) |= 8u;
  *((_DWORD *)Instance + 23) = Semaphore;
  *((_DWORD *)Instance + 24) = ReleaseCount;
}
