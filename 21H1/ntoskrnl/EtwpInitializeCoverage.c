/*
 * XREFs of EtwpInitializeCoverage @ 0x14078679C
 * Callers:
 *     EtwpInitialize @ 0x140A46B98 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
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
