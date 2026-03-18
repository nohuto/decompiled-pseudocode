/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x1408DFF80
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x1408EB9C8 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408F5400 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x1408F4E98 (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 824));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140C249F4;
    ++dword_140C24BD8;
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
