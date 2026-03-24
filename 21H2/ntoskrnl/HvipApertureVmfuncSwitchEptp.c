/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1404096D0
 * Callers:
 *     HviEnterKernelAperture @ 0x1405946DC (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140594738 (HviLeaveKernelAperture.c)
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
