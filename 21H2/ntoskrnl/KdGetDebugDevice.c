/*
 * XREFs of KdGetDebugDevice @ 0x1403CAA70
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A2540 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
