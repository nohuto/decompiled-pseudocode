/*
 * XREFs of IoIsActivityTracingEnabled @ 0x1403339D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IoIsActivityTracingEnabled()
{
  return (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
}
