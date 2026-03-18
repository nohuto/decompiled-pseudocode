/*
 * XREFs of KdGetDebugDevice @ 0x1403B8370
 * Callers:
 *     HalpDbgInitSystem @ 0x140A54B30 (HalpDbgInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *KdGetDebugDevice()
{
  return &KdDebugDevice;
}
