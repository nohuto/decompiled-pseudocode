/*
 * XREFs of KdGetDebugDevice @ 0x1403C64E0
 * Callers:
 *     HalpDbgInitSystem @ 0x14099C550 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
