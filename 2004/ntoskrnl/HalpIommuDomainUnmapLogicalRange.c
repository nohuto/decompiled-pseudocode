/*
 * XREFs of HalpIommuDomainUnmapLogicalRange @ 0x1404C443C
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A36F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1403A4390 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalpDmaFreeLa @ 0x1404B2A18 (HalpDmaFreeLa.c)
 *     HalFreeCommonBufferV3 @ 0x1404BF700 (HalFreeCommonBufferV3.c)
 *     HalpLeaveDmaDomain @ 0x1404BFFBC (HalpLeaveDmaDomain.c)
 *     HalFreeCommonBufferVector @ 0x1404C1130 (HalFreeCommonBufferVector.c)
 *     HalFreeCommonBufferThin @ 0x1404C5E80 (HalFreeCommonBufferThin.c)
 *     HalpPutScatterGatherListThin @ 0x1404C6B5C (HalpPutScatterGatherListThin.c)
 *     IommuUnmapLogicalRange @ 0x1404D5E00 (IommuUnmapLogicalRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalpIommuFlushDmaDomain @ 0x1404C4590 (HalpIommuFlushDmaDomain.c)
 *     IommupHvMapDeviceLogicalRange @ 0x1404D52E4 (IommupHvMapDeviceLogicalRange.c)
 *     HalpIommuUnmapLogicalRange @ 0x1404D768C (HalpIommuUnmapLogicalRange.c)
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
  int v11; // esi
  ULONG_PTR v12; // r14
  ULONG_PTR v13; // rbp
  __int64 v14; // rdi
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v15[0] = 0LL;
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
      v16 = v9;
      v15[0] = (v8 >> 12) + ((v8 & 0xFFF) != 0);
      v10 = ((__int64 (__fastcall *)(__int64 *, ULONG_PTR, _QWORD *))qword_140C4A398)(&v16, BugCheckParameter4, v15);
    }
    v11 = v10;
    if ( v10 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v10, BugCheckParameter3, BugCheckParameter4);
  }
  else
  {
    v11 = HalpIommuUnmapLogicalRange(*(_QWORD *)(BugCheckParameter3 + 24), a3, BugCheckParameter4);
    v12 = ((BugCheckParameter4 & 0xFFF) + *a3 + 4095) >> 12;
    v13 = BugCheckParameter4 & 0xFFFFFFFFFFFFF000uLL;
    while ( v12 )
    {
      v14 = 1024LL;
      if ( v12 < 0x400 )
        v14 = v12;
      HalpIommuFlushDmaDomain(BugCheckParameter3, v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(v14 - 1)) & 0x3FF);
      v12 -= v14;
      v13 += v14 << 12;
    }
    if ( v11 >= 0 )
      return 0;
  }
  return (unsigned int)v11;
}
