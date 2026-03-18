/*
 * XREFs of VfDriverInitStarting @ 0x1409BEF60
 * Callers:
 *     MmCallDllInitialize @ 0x1407932E0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140A57548 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     <none>
 */

__int64 VfDriverInitStarting()
{
  return (unsigned int)ViActiveVerifierThunks;
}
