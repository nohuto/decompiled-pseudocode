/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x1404098B0
 * Callers:
 *     HviEnterKernelAperture @ 0x14059490C (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x140594968 (HviLeaveKernelAperture.c)
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
