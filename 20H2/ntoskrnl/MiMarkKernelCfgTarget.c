/*
 * XREFs of MiMarkKernelCfgTarget @ 0x1402FCE94
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1406AA800 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1408DA050 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x140892164 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x80000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
