/*
 * XREFs of _LdrpProcessInitializationComplete@0 @ 0x4B2E645A
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _LdrpLogEtwEvent@24 @ 0x4B330117 (_LdrpLogEtwEvent@24.c)
 */

HANDLE __stdcall LdrpProcessInitializationComplete()
{
  int v0; // eax
  HANDLE result; // eax
  char *v2; // eax

  if ( RtlGetCurrentServiceSessionId() )
    v0 = (int)NtCurrentPeb()->SharedData + 554;
  else
    v0 = 2147353476;
  if ( *(_BYTE *)v0 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v2 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v2 & 0x20) != 0 )
      LdrpLogEtwEvent(-1, -1, 0, 0);
  }
  _InterlockedIncrement(&LdrpProcessInitialized);
  result = LdrpInitCompleteEvent;
  if ( LdrpInitCompleteEvent )
    return (HANDLE)NtSetEvent(LdrpInitCompleteEvent, 0);
  return result;
}
