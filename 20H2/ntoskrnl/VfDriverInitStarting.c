/*
 * XREFs of VfDriverInitStarting @ 0x1409C4F74
 * Callers:
 *     MmCallDllInitialize @ 0x1407A23C0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A5D948 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
