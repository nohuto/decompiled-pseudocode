/*
 * XREFs of _TpCallbackLeaveCriticalSectionOnCompletion@8 @ 0x4B3845A0
 * Callers:
 *     <none>
 * Callees:
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __cdecl TpCallbackLeaveCriticalSectionOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        PRTL_CRITICAL_SECTION CriticalSection)
{
  if ( !Instance || !CriticalSection || *((_DWORD *)Instance + 28) )
    TppRaiseInvalidParameter();
  *((_DWORD *)Instance + 20) |= 1u;
  *((_DWORD *)Instance + 28) = CriticalSection;
}
