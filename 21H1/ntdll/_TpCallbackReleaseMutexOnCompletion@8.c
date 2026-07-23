/*
 * XREFs of _TpCallbackReleaseMutexOnCompletion@8 @ 0x4B3845D0
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __cdecl TpCallbackReleaseMutexOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Mutex)
{
  if ( !Instance || !Mutex || Mutex == (HANDLE)-1 || *((_DWORD *)Instance + 22) )
    TppRaiseInvalidParameter();
  *((_DWORD *)Instance + 20) |= 2u;
  *((_DWORD *)Instance + 22) = Mutex;
}
