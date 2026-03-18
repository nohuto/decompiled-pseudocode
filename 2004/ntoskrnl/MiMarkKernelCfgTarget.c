/*
 * XREFs of MiMarkKernelCfgTarget @ 0x140357D4C
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1407055C0 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408D4210 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x14088C614 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x80000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
