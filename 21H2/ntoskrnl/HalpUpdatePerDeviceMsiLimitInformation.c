/*
 * XREFs of HalpUpdatePerDeviceMsiLimitInformation @ 0x140A73004
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x1403CDC9C (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     HalpIsHvRemappingInterrupts @ 0x1407D2034 (HalpIsHvRemappingInterrupts.c)
 */

__int64 HalpUpdatePerDeviceMsiLimitInformation()
{
  int v0; // edx
  __int64 result; // rax

  v0 = 2048;
  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 )
  {
    if ( (HalpIrtAllocationFlags & 4) != 0 )
      v0 = (unsigned __int16)HalpIrtEntriesPerDeviceAperture;
  }
  else if ( HalpIsHvRemappingInterrupts() && KeGetCurrentPrcb()->CpuVendor == 1 )
  {
    v0 = 512;
  }
  result = (unsigned int)(v0 - 1);
  if ( (unsigned __int16)(v0 - 1) <= 0x7FFu )
    HalpInterruptPerDeviceMsiLimit = v0;
  return result;
}
