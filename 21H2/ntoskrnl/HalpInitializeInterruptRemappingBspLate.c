/*
 * XREFs of HalpInitializeInterruptRemappingBspLate @ 0x140865890
 * Callers:
 *     HalpInitializeInterruptsBspLate @ 0x1403CDC9C (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     RtlSetBits @ 0x140363CC0 (RtlSetBits.c)
 *     HalpIrtExtendRemappingRange @ 0x140865E88 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtInitializeDeviceApertures @ 0x14086603C (HalpIrtInitializeDeviceApertures.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 HalpInitializeInterruptRemappingBspLate()
{
  unsigned int v0; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  char v2; // cl
  bool v3; // zf
  unsigned int v4; // ecx
  int v5; // ebx

  HalpIrtLock.Owner = 0LL;
  HalpIrtLock.Contention = 0;
  v0 = 1;
  HalpIrtLock.Count = 1;
  KeInitializeEvent(&HalpIrtLock.Event, SynchronizationEvent, 0);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  HalpIrtAllocationFlags = 0;
  HalpIrtTotalRanges = 1;
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    v2 = 15;
    v0 = 32;
    HalpIrtAllocationFlags = 15;
    HalpIrtTotalRanges = 32;
  }
  v3 = (v2 & 4) == 0;
  v4 = 512;
  HalpIrtEntriesPerRange = HalpIrtTotalEntries / v0;
  if ( v3 )
    v4 = HalpIrtTotalEntries;
  HalpIrtEntriesPerDeviceAperture = v4;
  HalpIrtAperturesPerRange = HalpIrtTotalEntries / v0 / v4;
  HalpIrtTotalApertures = HalpIrtTotalEntries / v4;
  v5 = HalpIrtExtendRemappingRange(0LL, HalpIrtTotalEntries % v4);
  if ( v5 < 0 )
    goto LABEL_9;
  RtlSetBits(&HalpIrtRanges, 0, 8u);
  if ( (HalpIrtAllocationFlags & 4) != 0 )
    v5 = HalpIrtInitializeDeviceApertures();
  if ( v5 < 0 )
  {
LABEL_9:
    if ( HalpIrtRanges.Buffer )
    {
      ExFreePoolWithTag(HalpIrtRanges.Buffer, 0);
      HalpIrtRanges.Buffer = 0LL;
    }
  }
  return (unsigned int)v5;
}
