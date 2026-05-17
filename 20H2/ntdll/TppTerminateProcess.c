/*
 * XREFs of TppTerminateProcess @ 0x1801126E0
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x180113008 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18011308C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     <none>
 */

__int64 TppTerminateProcess()
{
  return ZwTerminateProcess();
}
