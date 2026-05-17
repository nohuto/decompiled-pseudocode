/*
 * XREFs of TppTerminateProcess @ 0x180112580
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x180112EA8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180112F2C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}
