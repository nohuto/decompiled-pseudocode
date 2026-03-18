/*
 * XREFs of HalpUpdatePerDeviceMsiLimitInformation @ 0x140AF8610
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x1403B91D4 (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     HalpIsHvRemappingInterrupts @ 0x140822E58 (HalpIsHvRemappingInterrupts.c)
 */

char HalpUpdatePerDeviceMsiLimitInformation()
{
  __int16 v0; // dx
  struct _KPRCB *CurrentPrcb; // rax

  v0 = 2048;
  if ( (*(_DWORD *)(HalpInterruptController + 228) & 0x100) == 0 )
  {
    LOBYTE(CurrentPrcb) = HalpIsHvRemappingInterrupts();
    if ( (_BYTE)CurrentPrcb )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( CurrentPrcb->CpuVendor == 1 )
        v0 = 512;
    }
LABEL_3:
    HalpInterruptPerDeviceMsiLimit = v0;
    return (char)CurrentPrcb;
  }
  if ( (HalpIrtAllocationFlags & 4) != 0 )
    v0 = HalpIrtEntriesPerDeviceAperture;
  LOBYTE(CurrentPrcb) = v0 - 1;
  if ( (unsigned __int16)(v0 - 1) <= 0x7FFu )
    goto LABEL_3;
  return (char)CurrentPrcb;
}
