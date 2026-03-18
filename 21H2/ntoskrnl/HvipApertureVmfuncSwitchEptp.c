/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x14042B760
 * Callers:
 *     HviEnterKernelAperture @ 0x1405F2C80 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405F2CDC (HviLeaveKernelAperture.c)
 * Callees:
 *     <none>
 */

__int64 HvipApertureVmfuncSwitchEptp()
{
  __int64 result; // rax

  result = 0LL;
  __asm { vmfunc }
  return result;
}
