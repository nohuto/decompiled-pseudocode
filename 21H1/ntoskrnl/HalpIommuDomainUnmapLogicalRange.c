/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x1404C3FCC
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A2F90 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1403A3C30 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalpDmaFreeLa @ 0x1404B2338 (HalpDmaFreeLa.c)
 *     HalFreeCommonBufferV3 @ 0x1404BF020 (HalFreeCommonBufferV3.c)
 *     HalpLeaveDmaDomain @ 0x1404BF8DC (HalpLeaveDmaDomain.c)
 *     HalFreeCommonBufferVector @ 0x1404C0CC0 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferThin @ 0x1404C59D0 (HalFreeCommonBufferThin.c)
 *     HalpPutScatterGatherListThin @ 0x1404C66AC (HalpPutScatterGatherListThin.c)
 *     IommuUnmapLogicalRange @ 0x1404D58F0 (IommuUnmapLogicalRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalpIommuFlushDmaDomain @ 0x1404C40DC (HalpIommuFlushDmaDomain.c)
 *     IommupHvMapDeviceLogicalRange @ 0x1404D4E34 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x1404D717C (HalpIommuUnmapLogicalRange.c)
 */

__int64 __fastcall HalpIommuDomainUnmapLogicalRange(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 *a3,
        char a4)
{
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edi
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v12[0] = 0LL;
  if ( HalpHvIommu )
  {
    if ( !HalpHvIommuDeviceDomain )
      return 3221225659LL;
    v8 = *a3;
    v9 = *(_DWORD *)(BugCheckParameter3 + 32);
    if ( a4 )
    {
      v10 = IommupHvMapDeviceLogicalRange(v9, 0, 0, *a3, BugCheckParameter4);
    }
    else
    {
      v13 = v9;
      v12[0] = (v8 >> 12) + ((v8 & 0xFFF) != 0);
      v10 = ((__int64 (__fastcall *)(__int64 *, ULONG_PTR, _QWORD *))qword_140C4A4F8)(&v13, BugCheckParameter4, v12);
    }
    v11 = v10;
    if ( v10 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v10, BugCheckParameter3, BugCheckParameter4);
  }
  else
  {
    v11 = HalpIommuUnmapLogicalRange(*(_QWORD *)(BugCheckParameter3 + 24), a3, BugCheckParameter4);
    HalpIommuFlushDmaDomain(
      BugCheckParameter3,
      BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL | (*(_DWORD *)a3 >> 12) & 0x3FF);
    if ( v11 >= 0 )
      return 0;
  }
  return (unsigned int)v11;
}
