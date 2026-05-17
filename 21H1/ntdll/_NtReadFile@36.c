/*
 * XREFs of _NtReadFile@36 @ 0x4B2F29C0
 * Callers:
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _LdrpCheckForSecuROMImage@4 @ 0x4B33163B (_LdrpCheckForSecuROMImage@4.c)
 *     _LdrpResReadFile@16 @ 0x4B343482 (_LdrpResReadFile@16.c)
 *     _RtlCheckBootStatusIntegrity@8 @ 0x4B3507E0 (_RtlCheckBootStatusIntegrity@8.c)
 *     _RtlpGetSetBootStatusData@24 @ 0x4B350EC6 (_RtlpGetSetBootStatusData@24.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtReadFile(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  return Wow64SystemServiceCall();
}
