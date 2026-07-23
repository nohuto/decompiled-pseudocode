/*
 * XREFs of _TpCallbackSetEventOnCompletion@8 @ 0x4B2F26D0
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __cdecl TpCallbackSetEventOnCompletion(PTP_CALLBACK_INSTANCE Instance, HANDLE Event)
{
  if ( !Instance || !Event || Event == (HANDLE)-1 || *((_DWORD *)Instance + 21) )
    TppRaiseInvalidParameter();
  *((_DWORD *)Instance + 20) |= 4u;
  *((_DWORD *)Instance + 21) = Event;
}
