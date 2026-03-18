/*
 * XREFs of KdGetDebugDevice @ 0x1403C72F0
 * Callers:
 *     HalpDbgInitSystem @ 0x14099DCF0 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
