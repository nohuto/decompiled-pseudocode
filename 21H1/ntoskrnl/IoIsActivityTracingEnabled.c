/*
 * XREFs of IoIsActivityTracingEnabled @ 0x1402F6C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IoIsActivityTracingEnabled()
{
  return (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
}
