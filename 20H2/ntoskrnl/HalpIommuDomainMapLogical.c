/*
 * XREFs of HalpIommuDomainMapLogical @ 0x1404C78A0
 * Callers:
 *     HalAllocateCommonBufferVector @ 0x1404C3D30 (HalAllocateCommonBufferVector.c)
 *     HalpAllocateCommonBufferThin @ 0x1404C9920 (HalpAllocateCommonBufferThin.c)
 *     HalpConstructScatterGatherListThin @ 0x1404C9E48 (HalpConstructScatterGatherListThin.c)
 * Callees:
 *     IommupHvMapDeviceLogical @ 0x1404D8820 (IommupHvMapDeviceLogical.c)
 *     HalpIommuMapLogical @ 0x1404DA414 (HalpIommuMapLogical.c)
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
