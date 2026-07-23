/*
 * XREFs of HalpIommuDomainMapLogical @ 0x1404C94B0
 * Callers:
 *     HalAllocateCommonBufferVector @ 0x1404C5940 (HalAllocateCommonBufferVector.c)
 *     HalpAllocateCommonBufferThin @ 0x1404CB530 (HalpAllocateCommonBufferThin.c)
 *     HalpConstructScatterGatherListThin @ 0x1404CBA58 (HalpConstructScatterGatherListThin.c)
 * Callees:
 *     IommupHvMapDeviceLogical @ 0x1404DA470 (IommupHvMapDeviceLogical.c)
 *     HalpIommuMapLogical @ 0x1404DC064 (HalpIommuMapLogical.c)
 */

__int64 __fastcall HalpIommuDomainMapLogical(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = a4;
  if ( !HalpHvIommu )
    return HalpIommuMapLogical(a1, *(_QWORD *)(a1 + 24), a3, a3, a4, a5);
  if ( HalpHvIommuDeviceDomain )
    return IommupHvMapDeviceLogical(a1, 3, a3, (unsigned int)&v6, a5);
  return 3221225659LL;
}
