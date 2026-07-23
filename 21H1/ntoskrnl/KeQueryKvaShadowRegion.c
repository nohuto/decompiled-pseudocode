/*
 * XREFs of KeQueryKvaShadowRegion @ 0x14033B994
 * Callers:
 *     MiCheckRelevantKernelShadows @ 0x14033B924 (MiCheckRelevantKernelShadows.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14033B320 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall KeQueryKvaShadowRegion(__int64 a1, unsigned __int64 **a2, unsigned __int64 *a3)
{
  __int64 v5; // rcx
  _IMAGE_NT_HEADERS64 *v6; // rax
  PIMAGE_SECTION_HEADER v7; // rax
  unsigned int PhysicalAddress; // ecx
  unsigned int SizeOfRawData; // eax
  struct _KPRCB *CurrentPrcb; // rax
  KPCR *Pcr; // rax

  if ( !a1 )
  {
    Pcr = KeGetPcr();
    *a3 = 20480LL;
    *a2 = (unsigned __int64 *)&Pcr->NtTib.ExceptionList[-763];
    return 1LL;
  }
  v5 = a1 - 1;
  if ( !v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *a3 = 4096LL;
    *a2 = &CurrentPrcb->KernelDirectoryTableBase;
    return 1LL;
  }
  if ( v5 == 1 )
  {
    v6 = RtlImageNtHeader((PVOID)0x140000000LL);
    v7 = RtlSectionTableFromVirtualAddress(
           v6,
           (PVOID)0x140000000LL,
           (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
    *a2 = (unsigned __int64 *)(0x140000000LL + v7->VirtualAddress);
    PhysicalAddress = v7->Misc.PhysicalAddress;
    SizeOfRawData = v7->SizeOfRawData;
    if ( PhysicalAddress <= SizeOfRawData )
      PhysicalAddress = SizeOfRawData;
    *a3 = (PhysicalAddress + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    return 1LL;
  }
  return 0LL;
}
