/*
 * XREFs of MiMarkKernelCfgTarget @ 0x14033B430
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1406FC3A0 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408D2EC0 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x14088B2F4 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x80000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
