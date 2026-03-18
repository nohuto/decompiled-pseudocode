/*
 * XREFs of PopDirectedDripsMarkCandidateDevice @ 0x14098C094
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14099613C (PopDripsWatchdogCallbackHandler.c)
 *     PopDirectedDripsUmMarkTestDevices @ 0x14099F0A0 (PopDirectedDripsUmMarkTestDevices.c)
 * Callees:
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x14099EB84 (PopDirectedDripsDiagTraceMarkDevice.c)
 */

__int64 __fastcall PopDirectedDripsMarkCandidateDevice(__int64 a1)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 824));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x40u);
  if ( (result & 0x40) == 0 )
  {
    ++dword_140C24074;
    ++dword_140C24258;
    return PopDirectedDripsDiagTraceMarkDevice(*(_QWORD *)(a1 + 48));
  }
  return result;
}
