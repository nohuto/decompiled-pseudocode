/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x1408E5DC0
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x1408F15D8 (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x1408FB010 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x1408FAAA8 (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 824));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140C24B14;
    ++dword_140C24CF8;
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
