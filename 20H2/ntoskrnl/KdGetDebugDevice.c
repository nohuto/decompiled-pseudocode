/*
 * XREFs of KdGetDebugDevice @ 0x1403C9F30
 * Callers:
 *     HalpDbgInitSystem @ 0x1409A3DF0 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
