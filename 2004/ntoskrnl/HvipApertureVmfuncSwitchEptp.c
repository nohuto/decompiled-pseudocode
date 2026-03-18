/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x140400C30
 * Callers:
 *     HviEnterKernelAperture @ 0x14058F1F0 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x14058F24C (HviLeaveKernelAperture.c)
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
