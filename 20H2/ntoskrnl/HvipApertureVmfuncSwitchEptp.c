/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x140407030
 * Callers:
 *     HviEnterKernelAperture @ 0x140592C94 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140592CF0 (HviLeaveKernelAperture.c)
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
