/*
 * XREFs of IoIsActivityTracingEnabled @ 0x14022E390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IoIsActivityTracingEnabled()
{
  return (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
}
