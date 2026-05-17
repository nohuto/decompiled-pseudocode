/*
 * XREFs of TppTerminateProcess @ 0x1801121D0
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x180112AF8 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180112B7C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}
