/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1403FF9A0
 * Callers:
 *     HviEnterKernelAperture @ 0x14058EB00 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14058EB5C (HviLeaveKernelAperture.c)
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
