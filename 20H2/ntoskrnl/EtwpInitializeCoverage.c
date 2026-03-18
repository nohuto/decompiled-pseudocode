/*
 * XREFs of EtwpInitializeCoverage @ 0x1407A9878
 * Callers:
 *     EtwpInitialize @ 0x140A68D10 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407892B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
           (ULONGLONG *)&dword_140C02BE8,
           (unsigned __int16 *)EtwpCoverageProvEnableCallback,
           0LL);
}
