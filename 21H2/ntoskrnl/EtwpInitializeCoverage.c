/*
 * XREFs of EtwpInitializeCoverage @ 0x140864B00
 * Callers:
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
           (char *)&dword_140C04418,
           (__int64)EtwpCoverageProvEnableCallback,
           0LL);
}
