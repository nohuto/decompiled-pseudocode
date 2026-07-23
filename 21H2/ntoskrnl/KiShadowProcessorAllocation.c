/*
 * XREFs of KiShadowProcessorAllocation @ 0x1409A0924
 * Callers:
 *     KeWriteProtectProcessorState @ 0x1409A0058 (KeWriteProtectProcessorState.c)
 *     KiEnableKvaShadowing @ 0x1409A0790 (KiEnableKvaShadowing.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x140227050 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     MmCreateShadowMapping @ 0x1407A02AC (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1408D1AC4 (MmDeleteShadowMapping.c)
 */

__int64 __fastcall KiShadowProcessorAllocation(__int64 a1, unsigned __int64 a2)
{
  int v4; // esi
  _IMAGE_NT_HEADERS64 *v6; // rax
  PIMAGE_SECTION_HEADER v7; // rax
  unsigned int PhysicalAddress; // edx

  if ( !KiKvaShadow )
    return 1LL;
  if ( (unsigned int)MmCreateShadowMapping(a2, 20480LL) )
  {
    v4 = 0;
    if ( !(unsigned int)MmCreateShadowMapping(a1 + 36480, 4096LL) )
      goto LABEL_11;
    v4 = 1;
    if ( !*(_DWORD *)(a1 + 36) )
    {
      v6 = RtlImageNtHeader((PVOID)0x140000000LL);
      v7 = RtlSectionTableFromVirtualAddress(
             v6,
             (PVOID)0x140000000LL,
             (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
      PhysicalAddress = v7->Misc.PhysicalAddress;
      if ( PhysicalAddress <= v7->SizeOfRawData )
        PhysicalAddress = v7->SizeOfRawData;
      if ( !(unsigned int)MmCreateShadowMapping(
                            0x140000000LL + v7->VirtualAddress,
                            (PhysicalAddress + 4095) & 0xFFFFF000) )
      {
LABEL_11:
        MmDeleteShadowMapping(a2, 0x5000uLL);
        if ( v4 )
          MmDeleteShadowMapping(a1 + 36480, 0x1000uLL);
        return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
