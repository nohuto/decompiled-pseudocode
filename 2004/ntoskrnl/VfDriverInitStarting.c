/*
 * XREFs of VfDriverInitStarting @ 0x1409BEF70
 * Callers:
 *     MmCallDllInitialize @ 0x14078C110 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A4E9AC (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
