/*
 * XREFs of EtwpInitializeCoverage @ 0x140798FCC
 * Callers:
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D094 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
           (ULONGLONG *)&dword_140C02C28,
           (unsigned __int16 *)EtwpCoverageProvEnableCallback,
           0LL);
}
