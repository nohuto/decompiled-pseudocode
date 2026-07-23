/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x180088610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackLeaveCriticalSectionOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        PRTL_CRITICAL_SECTION CriticalSection)
{
  __int64 v2; // r8

  if ( Instance && CriticalSection && !*((_QWORD *)Instance + 24) )
  {
    *((_DWORD *)Instance + 36) |= 1u;
    *((_QWORD *)Instance + 24) = CriticalSection;
  }
  else
  {
    TppRaiseInvalidParameter(Instance, CriticalSection, v2);
  }
}
