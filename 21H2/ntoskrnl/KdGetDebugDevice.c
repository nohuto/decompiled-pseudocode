/*
 * XREFs of KdGetDebugDevice @ 0x1403CA8D0
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A1610 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
